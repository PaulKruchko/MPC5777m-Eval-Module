/*
 * main implementation: use this 'C' sample to create your own application
 *
 */

#include "derivative.h" /* include peripheral declarations */


/*******************************************************************************
* Constants and macros
*******************************************************************************/
#define LED2_pin 1
#define MAXCNT 5000000

/*******************************************************************************
* Function prototypes
*******************************************************************************/
extern void xcptn_xmpl(void);
static void GPIO_Init(void);
static void HW_Init(void);

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
	GPIO_Init();
}

/*******************************************************************************
Function Name : GPIO_Init
Engineer      : Martin Kovar
Date          : Jan-21-2016
Parameters    :
Modifies      :
Returns       :
Notes         : Initialize GPIO for LED2
Issues        :
*******************************************************************************/
static void GPIO_Init(void)
{
	SIUL2.MSCR_IO[LED2_pin].R = 0x30000000 | 0x02000000 | 0x00; //PA[5] GPIO
	SIUL2.GPDO[LED2_pin].R = 1;    //LED 2 on
}

/*******************************************************************************
* Global function
*******************************************************************************/

int main(void)
{
	int counter = 0;
	HW_Init();

	while(1)
	{
		counter ++;
		if (counter == MAXCNT)
		{
			SIUL2.GPDO[LED2_pin].R = ~SIUL2.GPDO[LED2_pin].R ;   //pin toggle
			counter = 0;
		}
	}

	return 0;
}
