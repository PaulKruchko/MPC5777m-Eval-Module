/*
 * main implementation: use this 'C' sample to create your own application
 *
 */

#include "derivative.h" /* include peripheral declarations */

#define KEY_VALUE1 0x5AF0ul
#define KEY_VALUE2 0xA50Ful

extern void xcptn_xmpl(void);

void hw_init(void)
{
#if defined(DEBUG_SECONDARY_CORES)
	uint32_t mctl = MC_ME.MCTL.R;
#if defined(TURN_ON_CPU0)
	/* enable core 0 in all modes */
	MC_ME.CCTL1.R = 0x00FE;
	/* Set Start address for core 0: Will reset and start */
#if defined(START_FROM_FLASH)
    MC_ME.CADDR1.R = 0x1000000 | 0x1;
#else
    MC_ME.CADDR1.R = 0x40000000 | 0x1;
#endif /* defined(START_FROM_FLASH) */ 

#endif
#if defined(TURN_ON_CPU1)
	/* enable core 1 in all modes */
	MC_ME.CCTL3.R = 0x00FE;
	/* Set Start address for core 1: Will reset and start */
#if defined(START_FROM_FLASH)
    MC_ME.CADDR3.R = 0x1000000 | 0x1;
#else
    MC_ME.CADDR3.R = 0x40000000 | 0x1;
#endif /* defined(START_FROM_FLASH) */ 
    
#endif
	MC_ME.MCTL.R = (mctl & 0xffff0000ul) | KEY_VALUE1;
	MC_ME.MCTL.R =  mctl; /* key value 2 always from MCTL */
#endif /* defined(DEBUG_SECONDARY_CORES) */
}

int main(void)
{
	int counter = 0;
	
	xcptn_xmpl ();              /* Configure and Enable Interrupts */

	/* Loop forever */
	for(;;) {	   
	   	counter++;
	}
}
