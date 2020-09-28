/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
/*******************************************************************************
* NXP Semiconductor Inc.
* (c) Copyright 2015 NXP Semiconductor, Inc.
* ALL RIGHTS RESERVED.
********************************************************************************
Services performed by NXP in this matter are performed AS IS and without
any warranty. CUSTOMER retains the final decision relative to the total design
and functionality of the end product. NXP neither guarantees nor will be
held liable by CUSTOMER for the success of this project.
NXP DISCLAIMS ALL WARRANTIES, EXPRESSED, IMPLIED OR STATUTORY INCLUDING,
BUT NOT LIMITED TO, IMPLIED WARRANTY OF MERCHANTABILITY OR FITNESS FOR
A PARTICULAR PURPOSE ON ANY HARDWARE, SOFTWARE ORE ADVISE SUPPLIED TO THE PROJECT
BY NXP, AND OR NAY PRODUCT RESULTING FROM NXP SERVICES. IN NO EVENT
SHALL NXP BE LIABLE FOR INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF
THIS AGREEMENT.

CUSTOMER agrees to hold NXP harmless against any and all claims demands or
actions by anyone on account of any damage, or injury, whether commercial,
contractual, or tortuous, rising directly or indirectly as a result of the advise
or assistance supplied CUSTOMER in connection with product, services or goods
supplied under this Agreement.
********************************************************************************
* File              MPC5777M-PinToggleStationery-S32DS_Z4_3.c
* Owner             Martin Kovar
* Version           1.1
* Date              Mar-07-2016
* Classification    General Business Information
* Brief             pin toggle stationery for MPC5777M
********************************************************************************
* Detailed Description:
* Application performs basic initialization, setup PLL to maximum allowed freq.,
* start both Z7 cores, interrupts initialization, blinking three LED by interrupts,
* initializes and display notice via UART terminal and then terminal ECHO.
* Each core serves one interrupt and one LED.
*
* The example configures the device for maximum performance by initialization of
* instruction/data cache and enabling of branch prediction for each core
* (startup.s files).
*
* ------------------------------------------------------------------------------
* Test HW:         MPC5777M-512DS, MPC57xx Motherboard
* MCU:             PPC5777MQMVA8 0N78H
* Terminal:        19200-8-no parity-1 stop bit-no flow control on LINFlexD_2
* Fsys:			   600MHz
*
* Debugger:        Lauterbach Trace32
*                  PeMicro USB-ML-PPCNEXUS
* Target:          internal_FLASH (debug mode, release mode)
* EVB connection:  USER LED1 connected to P8.0, LED2 connected to P8.1
*                  LED3 connected to P8.2
*
********************************************************************************
Revision History:
Version  Date         Author  			Description of Changes
1.0      Mar-09-2016  Martin Kovar  	Initial version
1.1      Feb-27-2017  Martin Kovar		Fix BAM bug

*******************************************************************************/
#include "derivative.h" /* include peripheral declarations */
#include <stdio.h>


/*******************************************************************************
* Constants and macros
*******************************************************************************/
#define KEY_VALUE1 0x5AF0ul
#define KEY_VALUE2 0xA50Ful
#define LED1_pin 0
#define RUN1_MODE 	0x4
#define MAXCNT 10000000

/*******************************************************************************
* Function prototypes
*******************************************************************************/
static void HW_Init(void);
static void Boot_Cores(void);
static void Sysclk_Init(void);
static void InitPeriClkGen(void);
static void Disable_SWTs(void);
static void GPIO_Init(void);
extern void xcptn_xmpl(void);


/*******************************************************************************
* Local functions
*******************************************************************************/


/*******************************************************************************
Function Name : HW_Init
Engineer      : Martin Kovar
Date          : Jan-21-2016
Parameters    :
Modifies      :
Returns       :
Notes         : initialization of the hw for the purposes of this example
Issues        :
*******************************************************************************/
static void HW_Init(void)
{
	xcptn_xmpl ();              /* Configure and Enable Interrupts */
	Sysclk_Init();
	InitPeriClkGen();
	Disable_SWTs();
	GPIO_Init();
	Boot_Cores();
}


/*******************************************************************************
Function Name : Boot_Cores
Engineer      : Martin Kovar
Date          : Jan-21-2016
Parameters    :
Modifies      :
Returns       :
Notes         : starts cores Z7_1 and Z7_2
Issues        :
*******************************************************************************/
static void Boot_Cores(void)
{
#if defined(DEBUG_SECONDARY_CORES)
	uint32_t mctl = MC_ME.MCTL.R;
#if defined(TURN_ON_CPU0)
	/* enable core 0 in all modes */
	MC_ME.CCTL1.R = 0x00FE;
	/* Set Start address for core 0: Will reset and start */
	MC_ME.CADDR1.R = 0x1000000 | 0x1;
#endif
#if defined(TURN_ON_CPU1)
	/* enable core 1 in all modes */
	MC_ME.CCTL3.R = 0x00FE;
	/* Set Start address for core 1: Will reset and start */
	MC_ME.CADDR3.R = 0x1280000 | 0x1;
#endif
	MC_ME.MCTL.R = (mctl & 0xffff0000ul) | KEY_VALUE1;
	MC_ME.MCTL.R =  mctl; /* key value 2 always from MCTL */
#endif /* defined(DEBUG_SECONDARY_CORES) */
}


/*******************************************************************************
Function Name : Sysclk_Init
Engineer      : Martin Kovar
Date          : Jan-21-2016
Parameters    : NONE
Modifies      : NONE
Returns       : NONE
Notes         : Enable XOSC, PLL0, PLL1 and enter RUN0 with PLL1 as sys clock
                (600 MHz)
Issues        : NONE
*******************************************************************************/
void Sysclk_Init(void)
{
	MC_CGM.AC3_SC.B.SELCTL = 0x01;   //connect XOSC to the PLL0 input
	MC_CGM.AC4_SC.B.SELCTL = 0x01;	 //connect XOSC to the PLL1 input

	// Set PLL0 to 300 MHz with 40MHz XOSC reference
	// PREDIV =  1, MFD = 15, RFDPHI = 2, RFDPHI1 = 8
	PLLDIG.PLL0DV.R = 0x4002100F;

	MC_ME.RUN_MC[0].R = 0x00130070;	 // RUN0 cfg: IRCON,OSC0ON,PLL0ON,syclk=IRC

	// Mode Transition to enter RUN0 mode:
	MC_ME.MCTL.R = 0x40005AF0;		    // Enter RUN0 Mode & Key
	MC_ME.MCTL.R = 0x4000A50F;		    // Enter RUN0 Mode & Inverted Key
	while (MC_ME.GS.B.S_MTRANS) {};		// Wait for mode transition to complete
	while(MC_ME.GS.B.S_CURRENT_MODE != RUN1_MODE) {};

	// Set PLL1 to 600 MHz with 40MHz XOSC reference
	PLLDIG.PLL1DV.R = 0x0001001E;	     // MFD = 30, RFDPHI = 1

	MC_ME.RUN_PC[0].R = 0x000000FE;	// enable peripherals run in all modes
	MC_ME.RUN_MC[0].R = 0x001300F4; // RUN0 cfg: IRCON, OSC0ON, PLL1ON, syclk=PLL1

	MC_ME.PCTL15.B.RUN_CFG = 0; //configure PCTL15 register to 0

	/*! System clock divider ratios will change with next update.
	 *  Not required for Cut 1.*/
	MC_CGM.SC_DIV_RC.R = 0x00000001;
	/*! System clock divider ratios updated on writing MC_CGM.DIV_UPD_TRIG.
	 * Not required for Cut 1. */
	MC_CGM.DIV_UPD_TYPE.R = 0x80000000;

	// PBRIDGEA/PBRIDGEB_CLK at syst clk div by 12 ... (50 MHz)
	MC_CGM.SC_DC2.R = 0x800B0000;

	// SXBAR_CLK at syst clk div by 6 ... (100 MHz)
	MC_CGM.SC_DC1.R = 0x80050000;

	// FXBAR_CLK, BD_CLK, IOP_CLK at syst clk div by 3 ... (200 MHz)
	MC_CGM.SC_DC0.R = 0x80020000;

	// COMP/CHKR_CLK at syst clk div by 2 ... (300 MHz)
	MC_CGM.SC_DC3.R = 0x80010000;

	// CLKOUT at syst clk div by 11 ... (54.55 MHz)
	MC_CGM.SC_DC4.R = 0x800A0000;

	//! System clock divider ratio updates triggered.  Not required for Cut 1.
	MC_CGM.DIV_UPD_TRIG.R = 0xfeedface;
	//! Wait for System Clock Divider Update Status == 0. Not required for Cut 1.
	while (MC_CGM.DIV_UPD_STAT.B.SYS_UPD_STAT == 1)
	{

	}

	// Mode Transition to enter RUN0 mode:
	MC_ME.MCTL.R = 0x40005AF0;		    // Enter RUN0 Mode & Key
	MC_ME.MCTL.R = 0x4000A50F;		    // Enter RUN0 Mode & Inverted Key
	while (MC_ME.GS.B.S_MTRANS) {};		// Wait for mode transition to complete
	while(MC_ME.GS.B.S_CURRENT_MODE != RUN1_MODE)  // Verify RUN0 is the current mode
	{};
}


/*******************************************************************************
Function Name : InitPeriClkGen
Engineer      : Martin Kovar
Date          : Feb-9-2016
Parameters    :
Modifies      :
Returns       :
Notes         : - Enable auxiliary clocks for peripherals
Issues        :
*******************************************************************************/
static void InitPeriClkGen(void)
{
	MC_CGM.AC0_SC.R = 0x02000000;    // Select PLL0 for auxiliary clock 0
	MC_CGM.AC0_DC0.R = 0x80050000;    // PER_CLK : Enable aux clk 0 div by 4 … (75 MHz)
	MC_CGM.AC0_DC1.R = 0x80130000;   // SD_CLK : Enable aux clk 0 div by 20 … (15 MHz)
	MC_CGM.AC0_DC2.R = 0x80170000;   // SAR_CLK : Enable aux clk 0 div by 24 … (12.5 MHz)
	MC_CGM.AC0_DC3.R = 0x80020000;   // DSPI_CLK0 : Enable aux clk 0 div by 3 … (100 MHz)
	MC_CGM.AC0_DC4.R = 0x80020000;   // DSPI_CLK1, LIN_CLK : Enable aux clk 0 div by 3 … (100 MHz)
	MC_CGM.AC6_SC.R = 0x02000000;    // Select PLL0 for auxiliary clock 6
	MC_CGM.AC6_DC0.R = 0x80020000;   // SYSCLK0 : Enable aux clk 6 div by 3 … (100 MHz)
	MC_CGM.AC7_SC.R = 0x02000000;    // Select PLL0 for auxiliary clock 7
	MC_CGM.AC7_DC0.R = 0x80020000;   // SYSCLK1 : Enable aux clk 7 div by 3 … (100 MHz)
	MC_CGM.AC9_SC.R = 0x01000000;    // Select XOSC for auxiliary clock 9
	MC_CGM.AC9_DC0.R = 0x80000000;   // RTI_CLK : Enable aux clk 9 div by 1 … (40 MHz)
	MC_CGM.AC1_SC.R = 0x02000000;    // Select PLL0 for auxiliary clock 1
	MC_CGM.AC1_DC0.R = 0x80130000;   // LFAST_CLK : Enable aux clk 1 div by 20 … (15 MHz)
	MC_CGM.AC8_SC.R = 0x01000000;    // Select XOSC for auxiliary clock 8
	MC_CGM.AC8_DC0.R = 0x80000000;   // CAN_CLK : Enable aux clk 8 div by 1 … (40 MHz)
	MC_CGM.AC2_DC0.R = 0x80090000;   // FRAY_CLK : Enable aux clk 2 (PLL0) div by 10 … (30 MHz)
	MC_CGM.AC2_DC1.R = 0x80020000;   // SENT_CLK : Enable aux clk 2 (PLL0) div by 3 … (100 MHz)
	MC_CGM.AC10_SC.R = 0x01000000;   // Select XOSC for auxiliary clock 10
	MC_CGM.AC10_DC0.R = 0x80000000;  // FEC_REF_CLK : Enable aux clk 10 div by 1 … (40 MHz)
	MC_CGM.AC5_DC0.R = 0x00000000;   // PSI5_f189_CLK : aux clk 5 disabled
	MC_CGM.AC5_DC1.R = 0x00000000;   // PSI5_f125_CLK : aux clk 5 disabled
	MC_CGM.AC5_DC2.R = 0x00000000;   // PSI5_1us_CLK : aux clk 5 disabled
	MC_CGM.AC5_CDC0.R = 0x00000000;  // PSI5_S_TS_CLK : aux clk 5 disabled
	MC_CGM.AC5_CDC1.R = 0x00000000;  // PSI5_S_DDSR_CLK : aux clk 5 disabled
	MC_CGM.AC5_CDC2.R = 0x00000000;  // PSI5_S_WD_CLK : aux clk 5 disabled
	MC_CGM.AC5_CDC10.R = 0x00000000; // PSI5_S_DDSR0_CLK : aux clk 5 disabled
	MC_CGM.AC5_CDC11.R = 0x00000000; // PSI5_S_DDSR1_CLK : aux clk 5 disabled
	MC_CGM.AC5_CDC12.R = 0x00000000; // PSI5_S_DDSR2_CLK : aux clk 5 disabled
	MC_CGM.AC5_CDC13.R = 0x00000000; // PSI5_S_DDSR3_CLK : aux clk 5 disabled
	MC_CGM.AC5_CDC20.R = 0x00000000; // PSI5_S_WD_CLK0 : aux clk 5 disabled
	MC_CGM.AC5_CDC21.R = 0x00000000; // PSI5_S_WD_CLK1 : aux clk 5 disabled
	MC_CGM.AC5_CDC22.R = 0x00000000; // PSI5_S_WD_CLK2 : aux clk 5 disabled
	MC_CGM.AC5_CDC23.R = 0x00000000; // PSI5_S_WD_CLK3 : aux clk 5 disabled
}


/*******************************************************************************
Function Name : DisableWatchdog
Engineer      : Martin Kovar
Date          : Jan-21-2016
Parameters    :
Modifies      :
Returns       :
Notes         : disable SWT0 and SWT1
Issues        :
*******************************************************************************/
static void Disable_SWTs(void)
{

	SWT_0.SR.R = 0xC520;                    //clear soft lock bit 1/2
	SWT_0.SR.R = 0xD928;                    //clear soft lock bit 2/2
	SWT_0.CR.R = 0x00000000;                //disable SWT1

	SWT_1.SR.R = 0xC520;                    //clear soft lock bit 1/2
	SWT_1.SR.R = 0xD928;                    //clear soft lock bit 2/2
	SWT_1.CR.R = 0x00000000;                //disable SWT2
}


/*******************************************************************************
Function Name : GPIO_Init
Engineer      : Martin Kovar
Date          : Jan-21-2016
Parameters    :
Modifies      :
Returns       :
Notes         : Initialize GPIO for LED1
Issues        :
*******************************************************************************/
static void GPIO_Init(void)
{
	SIUL2.MSCR_IO[LED1_pin].R = 0x30000000 | 0x02000000 | 0x00; //PA[0] GPIO
	SIUL2.GPDO[LED1_pin].R = 1;    //LED 1 off
}

/*******************************************************************************
* Global function
*******************************************************************************/
int main(void)
{
	int counter = 0;

	HW_Init();

	while (1)
	{
		counter ++;
		if (counter == MAXCNT)
		{
			SIUL2.GPDO[LED1_pin].R = ~SIUL2.GPDO[LED1_pin].R ;   //pin toggle
			counter = 0;
		}

	}

	return 0;
}
