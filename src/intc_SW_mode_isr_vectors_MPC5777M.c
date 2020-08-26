/*****************************************************************************/
/* FILE NAME: intc_SW_mode_isr_vectors_MPC5777M.c COPYRIGHT(c) Freescale 2013*/
/*                                                      All Rights Reserved  */
/* DESCRIPTION: MPC5777M ISR vectors for INTC in software vector mode        */
/*              Based on MPC5777M ref manual rev 2 Table 7-19.               */
/* USAGE:  For desired vector #, replace "dummy" with ISR name and declare   */
/*         your isr name extern like the example below:                      */
/*                       extern void MyPeripheralISR(void);                  */
/*                                                                           */
/*****************************************************************************/	
/* REV      AUTHOR        DATE        DESCRIPTION OF CHANGE                  */
/* ---   -----------    ----------    ---------------------                  */
/* 1.0	  S Mihalik     14 Oct 2013   Initial version                        */
/*****************************************************************************/
#include "typedefs.h"
/*========================================================================*/
/*		PROTOTYPES					                                 	  */
/*========================================================================*/
void dummy 						  (void);

/*========================================================================*/
/*	GLOBAL VARIABLES						                              */
/*========================================================================*/

const uint32_t __attribute__ ((section (".intc_vector_table"))) IntcIsrVectorTable[] = {

(uint32_t) &dummy, /* Vector #   0 Software setable flag 0 INTC_SSCIR0[CLR0] */
(uint32_t) &dummy, /* Vector #   1 Software setable flag 1 INTC_SSCIR0[CLR1] */
(uint32_t) &dummy, /* Vector #   2 Software setable flag 2 INTC_SSCIR0[CLR2] */
(uint32_t) &dummy, /* Vector #   3 Software setable flag 3 INTC_SSCIR0[CLR3] */
(uint32_t) &dummy, /* Vector #   4 Software setable flag 4 INTC_SSCIR0[CLR4] */
(uint32_t) &dummy, /* Vector #   5 Software setable flag 5 INTC_SSCIR0[CLR5] */
(uint32_t) &dummy, /* Vector #   6 Software setable flag 6 INTC_SSCIR0[CLR6] */
(uint32_t) &dummy, /* Vector #   7 Software setable flag 7 INTC_SSCIR0[CLR7] */
(uint32_t) &dummy, /* Vector #   8 Software setable flag 8 INTC_SSCIR0[CLR8] */
(uint32_t) &dummy, /* Vector #   9 Software setable flag 9 INTC_SSCIR0[CLR9] */
(uint32_t) &dummy, /* Vector #  10 Software setable flag 10 INTC_SSCIR0[CLR10] */
(uint32_t) &dummy, /* Vector #  11 Software setable flag 11 INTC_SSCIR0[CLR11] */
(uint32_t) &dummy, /* Vector #  12 Software setable flag 12 INTC_SSCIR0[CLR12] */
(uint32_t) &dummy, /* Vector #  13 Software setable flag 13 INTC_SSCIR0[CLR13] */
(uint32_t) &dummy, /* Vector #  14 Software setable flag 14 INTC_SSCIR0[CLR14] */
(uint32_t) &dummy, /* Vector #  15 Software setable flag 15 INTC_SSCIR0[CLR15] */
(uint32_t) &dummy, /* Vector #  16 Software setable flag 16 INTC_SSCIR0[CLR16] */
(uint32_t) &dummy, /* Vector #  17 Software setable flag 17 INTC_SSCIR0[CLR17] */
(uint32_t) &dummy, /* Vector #  18 Software setable flag 18 INTC_SSCIR0[CLR18] */
(uint32_t) &dummy, /* Vector #  19 Software setable flag 19 INTC_SSCIR0[CLR19] */
(uint32_t) &dummy, /* Vector #  20 Software setable flag 20 INTC_SSCIR0[CLR20] */
(uint32_t) &dummy, /* Vector #  21 Software setable flag 21 INTC_SSCIR0[CLR21] */
(uint32_t) &dummy, /* Vector #  22 Software setable flag 22 INTC_SSCIR0[CLR22] */
(uint32_t) &dummy, /* Vector #  23 Software setable flag 23 INTC_SSCIR0[CLR23] */
(uint32_t) &dummy, /* Vector #  24 Software setable flag 24 INTC_SSCIR0[CLR24] */
(uint32_t) &dummy, /* Vector #  25 Software setable flag 25 INTC_SSCIR0[CLR25] */
(uint32_t) &dummy, /* Vector #  26 Software setable flag 26 INTC_SSCIR0[CLR26] */
(uint32_t) &dummy, /* Vector #  27 Software setable flag 27 INTC_SSCIR0[CLR27] */
(uint32_t) &dummy, /* Vector #  28 Software setable flag 28 INTC_SSCIR0[CLR28] */
(uint32_t) &dummy, /* Vector #  29 Software setable flag 29 INTC_SSCIR0[CLR29] */
(uint32_t) &dummy, /* Vector #  30 Software setable flag 30 INTC_SSCIR0[CLR30] */
(uint32_t) &dummy, /* Vector #  31 Software setable flag 31 INTC_SSCIR0[CLR31] */
(uint32_t) &dummy, /* Vector #  32 Platform watchdog timer0 SWT_0_IR[TIF] */
(uint32_t) &dummy, /* Vector #  33 Platform watchdog timer1 SWT_1_IR[TIF] */
(uint32_t) &dummy, /* Vector #  34 Platform watchdog timer2 SWT_2_IR[TIF] */
(uint32_t) &dummy, /* Vector #  35 Platform watchdog timer3 SWT_3_IR[TIF] */
(uint32_t) &dummy, /* Vector #  36 Platform periodic timer 0_0 (STM) STM_0_CIR0[CIF] */
(uint32_t) &dummy, /* Vector #  37 Platform periodic timer 0_1 (STM) STM_0_CIR1[CIF] */
(uint32_t) &dummy, /* Vector #  38 Platform periodic timer 0_2 (STM) STM_0_CIR2[CIF] */
(uint32_t) &dummy, /* Vector #  39 Platform periodic timer 0_3 (STM) STM_0_CIR3[CIF] */
(uint32_t) &dummy, /* Vector #  40 Platform periodic timer 1_0 (STM) STM_1_CIR0[CIF] */
(uint32_t) &dummy, /* Vector #  41 Platform periodic timer 1_1 (STM) STM_1_CIR1[CIF] */
(uint32_t) &dummy, /* Vector #  42 Platform periodic timer 1_2 (STM) STM_1_CIR2[CIF] */
(uint32_t) &dummy, /* Vector #  43 Platform periodic timer 1_3 (STM) STM_1_CIR3[CIF] */
(uint32_t) &dummy, /* Vector #  44 Platform periodic timer 2_0 (STM) STM_2_CIR0[CIF] */
(uint32_t) &dummy, /* Vector #  45 Platform periodic timer 2_1 (STM) STM_2_CIR1[CIF] */
(uint32_t) &dummy, /* Vector #  46 Platform periodic timer 2_2 (STM) STM_2_CIR2[CIF] */
(uint32_t) &dummy, /* Vector #  47 Platform periodic timer 2_3 (STM) STM_2_CIR3[CIF] */
(uint32_t) &dummy, /* Vector #  48 */
(uint32_t) &dummy, /* Vector #  49 */
(uint32_t) &dummy, /* Vector #  50 */
(uint32_t) &dummy, /* Vector #  51 */
(uint32_t) &dummy, /* Vector #  52 eDMA Combined Error 127 - 0 eDMA Channel Error Flags */
(uint32_t) &dummy, /* Vector #  53 eDMA Channel 0 DMA_INTL[INT0] */
(uint32_t) &dummy, /* Vector #  54 eDMA Channel 1 DMA_INTL[INT1] */
(uint32_t) &dummy, /* Vector #  55 eDMA Channel 2 DMA_INTL[INT2] */
(uint32_t) &dummy, /* Vector #  56 eDMA Channel 3 DMA_INTL[INT3] */
(uint32_t) &dummy, /* Vector #  57 eDMA Channel 4 DMA_INTL[INT4] */
(uint32_t) &dummy, /* Vector #  58 eDMA Channel 5 DMA_INTL[INT5] */
(uint32_t) &dummy, /* Vector #  59 eDMA Channel 6 DMA_INTL[INT6] */
(uint32_t) &dummy, /* Vector #  60 eDMA Channel 7 DMA_INTL[INT7] */
(uint32_t) &dummy, /* Vector #  61 eDMA Channel 8 DMA_INTL[INT8] */
(uint32_t) &dummy, /* Vector #  62 eDMA Channel 9 DMA_INTL[INT9] */
(uint32_t) &dummy, /* Vector #  63 eDMA Channel 10 DMA_INTL[INT10] */
(uint32_t) &dummy, /* Vector #  64 eDMA Channel 11 DMA_INTL[INT11] */
(uint32_t) &dummy, /* Vector #  65 eDMA Channel 12 DMA_INTL[INT12] */
(uint32_t) &dummy, /* Vector #  66 eDMA Channel 13 DMA_INTL[INT13] */
(uint32_t) &dummy, /* Vector #  67 eDMA Channel 14 DMA_INTL[INT14] */
(uint32_t) &dummy, /* Vector #  68 eDMA Channel 15 DMA_INTL[INT15] */
(uint32_t) &dummy, /* Vector #  69 eDMA Channel 16 DMA_INTL[INT16] */
(uint32_t) &dummy, /* Vector #  70 eDMA Channel 17 DMA_INTL[INT17] */
(uint32_t) &dummy, /* Vector #  71 eDMA Channel 18 DMA_INTL[INT18] */
(uint32_t) &dummy, /* Vector #  72 eDMA Channel 19 DMA_INTL[INT19] */
(uint32_t) &dummy, /* Vector #  73 eDMA Channel 20 DMA_INTL[INT20] */
(uint32_t) &dummy, /* Vector #  74 eDMA Channel 21 DMA_INTL[INT21] */
(uint32_t) &dummy, /* Vector #  75 eDMA Channel 22 DMA_INTL[INT22] */
(uint32_t) &dummy, /* Vector #  76 eDMA Channel 23 DMA_INTL[INT23] */
(uint32_t) &dummy, /* Vector #  77 eDMA Channel 24 DMA_INTL[INT24] */
(uint32_t) &dummy, /* Vector #  78 eDMA Channel 25 DMA_INTL[INT25] */
(uint32_t) &dummy, /* Vector #  79 eDMA Channel 26 DMA_INTL[INT26] */
(uint32_t) &dummy, /* Vector #  80 eDMA Channel 27 DMA_INTL[INT27] */
(uint32_t) &dummy, /* Vector #  81 eDMA Channel 28 DMA_INTL[INT28] */
(uint32_t) &dummy, /* Vector #  82 eDMA Channel 29 DMA_INTL[INT29] */
(uint32_t) &dummy, /* Vector #  83 eDMA Channel 30 DMA_INTL[INT30] */
(uint32_t) &dummy, /* Vector #  84 eDMA Channel 31 DMA_INTL[INT31] */
(uint32_t) &dummy, /* Vector #  85 eDMA Channel 32 DMA_INTH[INT32] */
(uint32_t) &dummy, /* Vector #  86 eDMA Channel 33 DMA_INTH[INT33] */
(uint32_t) &dummy, /* Vector #  87 eDMA Channel 34 DMA_INTH[INT34] */
(uint32_t) &dummy, /* Vector #  88 eDMA Channel 35 DMA_INTH[INT35] */
(uint32_t) &dummy, /* Vector #  89 eDMA Channel 36 DMA_INTH[INT36] */
(uint32_t) &dummy, /* Vector #  90 eDMA Channel 37 DMA_INTH[INT37] */
(uint32_t) &dummy, /* Vector #  91 eDMA Channel 38 DMA_INTH[INT38] */
(uint32_t) &dummy, /* Vector #  92 eDMA Channel 39 DMA_INTH[INT39] */
(uint32_t) &dummy, /* Vector #  93 eDMA Channel 40 DMA_INTH[INT40] */
(uint32_t) &dummy, /* Vector #  94 eDMA Channel 41 DMA_INTH[INT41] */
(uint32_t) &dummy, /* Vector #  95 eDMA Channel 42 DMA_INTH[INT42] */
(uint32_t) &dummy, /* Vector #  96 eDMA Channel 43 DMA_INTH[INT43] */
(uint32_t) &dummy, /* Vector #  97 eDMA Channel 44 DMA_INTH[INT44] */
(uint32_t) &dummy, /* Vector #  98 eDMA Channel 45 DMA_INTH[INT45] */
(uint32_t) &dummy, /* Vector #  99 eDMA Channel 46 DMA_INTH[INT46] */
(uint32_t) &dummy, /* Vector # 100 eDMA Channel 47 DMA_INTH[INT47] */

(uint32_t) &dummy, /* Vector # 101 eDMA Channel 48 DMA_INTH[INT48] */
(uint32_t) &dummy, /* Vector # 102 eDMA Channel 49 DMA_INTH[INT49] */
(uint32_t) &dummy, /* Vector # 103 eDMA Channel 50 DMA_INTH[INT50] */
(uint32_t) &dummy, /* Vector # 104 eDMA Channel 51 DMA_INTH[INT51] */
(uint32_t) &dummy, /* Vector # 105 eDMA Channel 52 DMA_INTH[INT52] */
(uint32_t) &dummy, /* Vector # 106 eDMA Channel 53 DMA_INTH[INT53] */
(uint32_t) &dummy, /* Vector # 107 eDMA Channel 54 DMA_INTH[INT54] */
(uint32_t) &dummy, /* Vector # 108 eDMA Channel 55 DMA_INTH[INT55] */
(uint32_t) &dummy, /* Vector # 109 eDMA Channel 56 DMA_INTH[INT56] */
(uint32_t) &dummy, /* Vector # 110 eDMA Channel 57 DMA_INTH[INT57] */
(uint32_t) &dummy, /* Vector # 111 eDMA Channel 58 DMA_INTH[INT58] */
(uint32_t) &dummy, /* Vector # 112 eDMA Channel 59 DMA_INTH[INT59] */
(uint32_t) &dummy, /* Vector # 113 eDMA Channel 60 DMA_INTH[INT60] */
(uint32_t) &dummy, /* Vector # 114 eDMA Channel 61 DMA_INTH[INT61] */
(uint32_t) &dummy, /* Vector # 115 eDMA Channel 62 DMA_INTH[INT62] */
(uint32_t) &dummy, /* Vector # 116 eDMA Channel 63 DMA_INTH[INT63] */
(uint32_t) &dummy, /* Vector # 117 eDMA Channel 64 DMA_INTH[INT64] */
(uint32_t) &dummy, /* Vector # 118 eDMA Channel 65 DMA_INTH[INT65] */
(uint32_t) &dummy, /* Vector # 119 eDMA Channel 66 DMA_INTH[INT66] */
(uint32_t) &dummy, /* Vector # 120 eDMA Channel 67 DMA_INTH[INT67] */
(uint32_t) &dummy, /* Vector # 121 eDMA Channel 68 DMA_INTH[INT68] */
(uint32_t) &dummy, /* Vector # 122 eDMA Channel 69 DMA_INTH[INT69] */
(uint32_t) &dummy, /* Vector # 123 eDMA Channel 70 DMA_INTH[INT70] */
(uint32_t) &dummy, /* Vector # 124 eDMA Channel 71 DMA_INTH[INT71] */
(uint32_t) &dummy, /* Vector # 125 eDMA Channel 72 DMA_INTH[INT72] */
(uint32_t) &dummy, /* Vector # 126 eDMA Channel 73 DMA_INTH[INT73] */
(uint32_t) &dummy, /* Vector # 127 eDMA Channel 74 DMA_INTH[INT74] */
(uint32_t) &dummy, /* Vector # 128 eDMA Channel 75 DMA_INTH[INT75] */
(uint32_t) &dummy, /* Vector # 129 eDMA Channel 76 DMA_INTH[INT76] */
(uint32_t) &dummy, /* Vector # 130 eDMA Channel 77 DMA_INTH[INT77] */
(uint32_t) &dummy, /* Vector # 131 eDMA Channel 78 DMA_INTH[INT78] */
(uint32_t) &dummy, /* Vector # 132 eDMA Channel 79 DMA_INTH[INT79] */
(uint32_t) &dummy, /* Vector # 133 eDMA Channel 80 DMA_INTH[INT80] */
(uint32_t) &dummy, /* Vector # 134 eDMA Channel 81 DMA_INTH[INT81] */
(uint32_t) &dummy, /* Vector # 135 eDMA Channel 82 DMA_INTH[INT82] */
(uint32_t) &dummy, /* Vector # 136 eDMA Channel 83 DMA_INTH[INT83] */
(uint32_t) &dummy, /* Vector # 137 eDMA Channel 84 DMA_INTH[INT84] */
(uint32_t) &dummy, /* Vector # 138 eDMA Channel 85 DMA_INTH[INT85] */
(uint32_t) &dummy, /* Vector # 139 eDMA Channel 86 DMA_INTH[INT86] */
(uint32_t) &dummy, /* Vector # 140 eDMA Channel 87 DMA_INTH[INT87] */
(uint32_t) &dummy, /* Vector # 141 eDMA Channel 88 DMA_INTH[INT88] */
(uint32_t) &dummy, /* Vector # 142 eDMA Channel 89 DMA_INTH[INT89] */
(uint32_t) &dummy, /* Vector # 143 eDMA Channel 90 DMA_INTH[INT90] */
(uint32_t) &dummy, /* Vector # 144 eDMA Channel 91 DMA_INTH[INT91] */
(uint32_t) &dummy, /* Vector # 145 eDMA Channel 92 DMA_INTH[INT92] */
(uint32_t) &dummy, /* Vector # 146 eDMA Channel 93 DMA_INTH[INT93] */
(uint32_t) &dummy, /* Vector # 147 eDMA Channel 94 DMA_INTH[INT94] */
(uint32_t) &dummy, /* Vector # 148 eDMA Channel 95 DMA_INTH[INT95] */
(uint32_t) &dummy, /* Vector # 149 eDMA Channel 96 DMA_INTH[INT96] */
(uint32_t) &dummy, /* Vector # 150 eDMA Channel 97 DMA_INTH[INT97] */
(uint32_t) &dummy, /* Vector # 151 eDMA Channel 98 DMA_INTH[INT98] */
(uint32_t) &dummy, /* Vector # 152 eDMA Channel 99 DMA_INTH[INT99] */
(uint32_t) &dummy, /* Vector # 153 eDMA Channel 100 DMA_INTH[INT100] */
(uint32_t) &dummy, /* Vector # 154 eDMA Channel 101 DMA_INTH[INT101] */
(uint32_t) &dummy, /* Vector # 155 eDMA Channel 102 DMA_INTH[INT102] */
(uint32_t) &dummy, /* Vector # 156 eDMA Channel 103 DMA_INTH[INT103] */
(uint32_t) &dummy, /* Vector # 157 eDMA Channel 104 DMA_INTH[INT104] */
(uint32_t) &dummy, /* Vector # 158 eDMA Channel 105 DMA_INTH[INT105] */
(uint32_t) &dummy, /* Vector # 159 eDMA Channel 106 DMA_INTH[INT106] */
(uint32_t) &dummy, /* Vector # 160 eDMA Channel 107 DMA_INTH[INT107] */
(uint32_t) &dummy, /* Vector # 161 eDMA Channel 108 DMA_INTH[INT108] */
(uint32_t) &dummy, /* Vector # 162 eDMA Channel 109 DMA_INTH[INT109] */
(uint32_t) &dummy, /* Vector # 163 eDMA Channel 110 DMA_INTH[INT110] */
(uint32_t) &dummy, /* Vector # 164 eDMA Channel 111 DMA_INTH[INT111] */
(uint32_t) &dummy, /* Vector # 165 eDMA Channel 112 DMA_INTH[INT112] */
(uint32_t) &dummy, /* Vector # 166 eDMA Channel 113 DMA_INTH[INT113] */
(uint32_t) &dummy, /* Vector # 167 eDMA Channel 114 DMA_INTH[INT114] */
(uint32_t) &dummy, /* Vector # 168 eDMA Channel 115 DMA_INTH[INT115] */
(uint32_t) &dummy, /* Vector # 169 eDMA Channel 116 DMA_INTH[INT116] */
(uint32_t) &dummy, /* Vector # 170 eDMA Channel 117 DMA_INTH[INT117] */
(uint32_t) &dummy, /* Vector # 171 eDMA Channel 118 DMA_INTH[INT118] */
(uint32_t) &dummy, /* Vector # 172 eDMA Channel 119 DMA_INTH[INT119] */
(uint32_t) &dummy, /* Vector # 173 eDMA Channel 120 DMA_INTH[INT120] */
(uint32_t) &dummy, /* Vector # 174 eDMA Channel 121 DMA_INTH[INT121] */
(uint32_t) &dummy, /* Vector # 175 eDMA Channel 122 DMA_INTH[INT122] */
(uint32_t) &dummy, /* Vector # 176 eDMA Channel 123 DMA_INTH[INT123] */
(uint32_t) &dummy, /* Vector # 177 eDMA Channel 124 DMA_INTH[INT124] */
(uint32_t) &dummy, /* Vector # 178 eDMA Channel 125 DMA_INTH[INT125] */
(uint32_t) &dummy, /* Vector # 179 eDMA Channel 126 DMA_INTH[INT126] */
(uint32_t) &dummy, /* Vector # 180 eDMA Channel 127 DMA_INTH[INT127] */
(uint32_t) &dummy, /* Vector # 181 */
(uint32_t) &dummy, /* Vector # 182 */
(uint32_t) &dummy, /* Vector # 183 */
(uint32_t) &dummy, /* Vector # 184 */
(uint32_t) &dummy, /* Vector # 185 Flash controller Prog/Erase/Suspend IRQ_0 MCR[DONE] */
(uint32_t) &dummy, /* Vector # 186 */
(uint32_t) &dummy, /* Vector # 187 */
(uint32_t) &dummy, /* Vector # 188 */
(uint32_t) &dummy, /* Vector # 189 */
(uint32_t) &dummy, /* Vector # 190 */
(uint32_t) &dummy, /* Vector # 191 */
(uint32_t) &dummy, /* Vector # 192 */
(uint32_t) &dummy, /* Vector # 193 */
(uint32_t) &dummy, /* Vector # 194 */
(uint32_t) &dummy, /* Vector # 195 */
(uint32_t) &dummy, /* Vector # 196 */
(uint32_t) &dummy, /* Vector # 197 */
(uint32_t) &dummy, /* Vector # 198 */
(uint32_t) &dummy, /* Vector # 199 */
(uint32_t) &dummy, /* Vector # 200 */

(uint32_t) &dummy, /* Vector # 201 */
(uint32_t) &dummy, /* Vector # 202 */
(uint32_t) &dummy, /* Vector # 203 */
(uint32_t) &dummy, /* Vector # 204 */
(uint32_t) &dummy, /* Vector # 205 */
(uint32_t) &dummy, /* Vector # 206 */
(uint32_t) &dummy, /* Vector # 207 */
(uint32_t) &dummy, /* Vector # 208 */
(uint32_t) &dummy, /* Vector # 209 */
(uint32_t) &dummy, /* Vector # 210 */
(uint32_t) &dummy, /* Vector # 211 */
(uint32_t) &dummy, /* Vector # 212 */
(uint32_t) &dummy, /* Vector # 213 */
(uint32_t) &dummy, /* Vector # 214 */
(uint32_t) &dummy, /* Vector # 215 */
(uint32_t) &dummy, /* Vector # 216 */
(uint32_t) &dummy, /* Vector # 217 */
(uint32_t) &dummy, /* Vector # 218 Ethernet_0_0 EIR[TXF] */
(uint32_t) &dummy, /* Vector # 219 Ethernet_0_1 EIR[RXF] */
(uint32_t) &dummy, /* Vector # 220 Ethernet_0_2 EIR[HBERR] EIR[BABR] EIR[BABT] EIR[GRA] */
                   /*                           EIR[TXB] EIR[RXB] EIR[MII] EIR[EBERR] */
                   /*                           EIR[LC] EIR[RL] EIR[UN] */
(uint32_t) &dummy, /* Vector # 221 */
(uint32_t) &dummy, /* Vector # 222 */
(uint32_t) &dummy, /* Vector # 223 */
(uint32_t) &dummy, /* Vector # 224 */
(uint32_t) &dummy, /* Vector # 225 */
(uint32_t) &dummy, /* Vector # 226 Periodic Interrupt Timer (PIT0) PIT_0_TFLG0[TIF] */
(uint32_t) &dummy, /* Vector # 227 Periodic Interrupt Timer (PIT1) PIT_0_TFLG1[TIF] */
(uint32_t) &dummy, /* Vector # 228 Periodic Interrupt Timer (PIT2) PIT_0_TFLG2[TIF] */
(uint32_t) &dummy, /* Vector # 229 Periodic Interrupt Timer (PIT3) PIT_0_TFLG3[TIF] */
(uint32_t) &dummy, /* Vector # 230 Periodic Interrupt Timer (PIT4) PIT_0_TFLG4[TIF] */
(uint32_t) &dummy, /* Vector # 231 Periodic Interrupt Timer (PIT5) PIT_0_TFLG5[TIF] */
(uint32_t) &dummy, /* Vector # 232 Periodic Interrupt Timer (PIT6) PIT_0_TFLG6[TIF] */
(uint32_t) &dummy, /* Vector # 233 Periodic Interrupt Timer (PIT7) PIT_0_TFLG7[TIF] */
(uint32_t) &dummy, /* Vector # 234 */
(uint32_t) &dummy, /* Vector # 235 */
(uint32_t) &dummy, /* Vector # 236 */
(uint32_t) &dummy, /* Vector # 237 */
(uint32_t) &dummy, /* Vector # 238 */
(uint32_t) &dummy, /* Vector # 239 PIT_RTI PIT_0_RTI_TFLG[TIF] */
(uint32_t) &dummy, /* Vector # 240 PIT_64_Upper PIT_1_TFLG0[TIF] */
(uint32_t) &dummy, /* Vector # 241 PIT_64_Lower PIT_1_TFLG1[TIF] */
(uint32_t) &dummy, /* Vector # 242 XOSC counter XOSC */
(uint32_t) &dummy, /* Vector # 243 SIU External Interrupt_0 SIU External Interrupt_0 */
(uint32_t) &dummy, /* Vector # 244 SIU External Interrupt_1 SIU External Interrupt_1 */
(uint32_t) &dummy, /* Vector # 245 */
(uint32_t) &dummy, /* Vector # 246 */
(uint32_t) &dummy, /* Vector # 247 */
(uint32_t) &dummy, /* Vector # 248 */
(uint32_t) &dummy, /* Vector # 249 */
(uint32_t) &dummy, /* Vector # 250 */
(uint32_t) &dummy, /* Vector # 251 MC_ME 0 ME_IS[I_SAFE] */
(uint32_t) &dummy, /* Vector # 252 MC_ME 1 ME_IS[I_MTC] */
(uint32_t) &dummy, /* Vector # 253 MC_ME 2 ME_IS[I_IMODE] */
(uint32_t) &dummy, /* Vector # 254 MC_ME 3 ME_IS[I_ICONF] */
(uint32_t) &dummy, /* Vector # 255 MC_RGM 0 MC_RGM Functional and destructive reset alternate event interrupt */
(uint32_t) &dummy, /* Vector # 256 */
(uint32_t) &dummy, /* Vector # 257 */
(uint32_t) &dummy, /* Vector # 258 */
(uint32_t) &dummy, /* Vector # 259 DSPI0_0 DSPI_0_SR[TFUF] | DSPI_0_SR[RFOF] | DSPI_0_SR[TFIWF] */
(uint32_t) &dummy, /* Vector # 260 DSPI0_1 DSPI_0_SR[EOQF] */
(uint32_t) &dummy, /* Vector # 261 DSPI0_2 DSPI_0_SR[TFFF] */
(uint32_t) &dummy, /* Vector # 262 DSPI0_3 DSPI_0_SR[TCF] */
(uint32_t) &dummy, /* Vector # 263 DSPI0_4 DDSPI_0_SR[RFDF] */
(uint32_t) &dummy, /* Vector # 264 */
(uint32_t) &dummy, /* Vector # 265 */
(uint32_t) &dummy, /* Vector # 266 DSPI0_7 DSPI_0_SR[SPEF] */
(uint32_t) &dummy, /* Vector # 267 */
(uint32_t) &dummy, /* Vector # 268 DSPI1_0 DSPI_1_SR[TFUF] | DSPI_1_SR[RFOF] | */
                   /*              DSPI_1_SR[TFIWF] */
(uint32_t) &dummy, /* Vector # 269 DSPI1_1 DSPI_1_SR[EOQF] */
(uint32_t) &dummy, /* Vector # 270 DSPI1_2 DSPI_1_SR[TFFF] */
(uint32_t) &dummy, /* Vector # 271 DSPI1_3 DSPI_1_SR[TCF] */
(uint32_t) &dummy, /* Vector # 272 DSPI1_4 DSPI_1_SR[RFDF] */
(uint32_t) &dummy, /* Vector # 273 */
(uint32_t) &dummy, /* Vector # 274 */
(uint32_t) &dummy, /* Vector # 275 DSPI1_7 DSPI_1_SR[SPEF] */
(uint32_t) &dummy, /* Vector # 276 */
(uint32_t) &dummy, /* Vector # 277 DSPI2_0 DSPI_2_SR[TFUF] | DSPI_2_SR[RFOF]| */
                   /*              DSPI_2_SR[TFIWF] */
(uint32_t) &dummy, /* Vector # 278 DSPI2_1 DSPI_2_SR[EOQF] */
(uint32_t) &dummy, /* Vector # 279 DSPI2_2 DSPI_2_SR[TFFF] */
(uint32_t) &dummy, /* Vector # 280 DSPI2_3 DSPI_2_SR[TCF] */
(uint32_t) &dummy, /* Vector # 281 DSPI2_4 DSPI_2_SR[RFDF] */
(uint32_t) &dummy, /* Vector # 282 */
(uint32_t) &dummy, /* Vector # 283 */
(uint32_t) &dummy, /* Vector # 284 DSPI2_7 DSPI_2_SR[SPEF] */
(uint32_t) &dummy, /* Vector # 285 */
(uint32_t) &dummy, /* Vector # 286 DSPI3_0 DSPI_3_SR[TFUF] | DSPI_3_SR[RFOF]| */
                   /*              DSPI_3_SR[TFIWF] */
(uint32_t) &dummy, /* Vector # 287 DSPI3_1 DSPI_3_SR[EOQF] */
(uint32_t) &dummy, /* Vector # 288 DSPI3_2 DSPI_3_SR[TFFF] */
(uint32_t) &dummy, /* Vector # 289 DSPI3_3 DSPI_3_SR[TCF] */
(uint32_t) &dummy, /* Vector # 290 DSPI3_4 DSPI_3_SR[RFDF] */
(uint32_t) &dummy, /* Vector # 291 */
(uint32_t) &dummy, /* Vector # 292 */
(uint32_t) &dummy, /* Vector # 293 DSPI3_7 DSPI_3_SR[SPEF] */
(uint32_t) &dummy, /* Vector # 294 */
(uint32_t) &dummy, /* Vector # 295 DSPI4_0 DSPI_4_SR[TFUF] | DSPI_4_SR[RFOF]| */
                   /*              DSPI_4_SR[TFIWF] */
(uint32_t) &dummy, /* Vector # 296 DSPI4_1 DSPI_4_SR[EOQF] */
(uint32_t) &dummy, /* Vector # 297 DSPI4_2 DSPI_4_SR[TFFF] */
(uint32_t) &dummy, /* Vector # 298 DSPI4_3 DSPI_4_SR[TCF] */
(uint32_t) &dummy, /* Vector # 299 DSPI4_4 DSPI_4_SR[RFDF] */
(uint32_t) &dummy, /* Vector # 300 DSPI4_5 DSPI_4_SR[SPITCF] | */
                   /*              DSPI_4_SR[CMD_TCF] */

(uint32_t) &dummy, /* Vector # 301 DSPI4_6 DSPI_4_SR[DSITCF] | */
                   /*              DSPI_4_SR[CMDFFF] */
(uint32_t) &dummy, /* Vector # 302 DSPI4_7 DSPI_4_SR[SPEF] | DSPI_4_SR[DPEF] */
(uint32_t) &dummy, /* Vector # 303 DSPI4_8 DSPI_4_SR[DDIF] */
(uint32_t) &dummy, /* Vector # 304 DSPI5_0 DSPI_5_SR[TFUF] | DSPI_5_SR[RFOF]| */
                   /*              DSPI_5_SR[TFIWF] */
(uint32_t) &dummy, /* Vector # 305 DSPI5_1 DSPI_5_SR[EOQF] */
(uint32_t) &dummy, /* Vector # 306 DSPI5_2 DSPI_5_SR[TFFF] */
(uint32_t) &dummy, /* Vector # 307 DSPI5_3 DSPI_5_SR[TCF] */
(uint32_t) &dummy, /* Vector # 308 DSPI5_4 DSPI_5_SR[RFDF] */
(uint32_t) &dummy, /* Vector # 309 DSPI5_5 DSPI_5_SR[SPITCF] | DSPI_5_SR[CMD_TCF] */
(uint32_t) &dummy, /* Vector # 310 DSPI5_6 DSPI_5_SR[DSITCF] | DSPI_5_SR[CMDFFF] */
(uint32_t) &dummy, /* Vector # 311 DSPI5_7 DSPI_5_SR[SPEF] | DSPI_5_SR[DPEF] */
(uint32_t) &dummy, /* Vector # 312 DSPI5_8 DSPI_5_SR[DDIF] */
(uint32_t) &dummy, /* Vector # 313 DSPI6_0 DSPI_6_SR[TFUF] | DSPI_6_SR[RFOF]| */
                   /*              DSPI_6_SR[TFIWF] */
(uint32_t) &dummy, /* Vector # 314 DSPI6_1 DSPI_6_SR[EOQF] */
(uint32_t) &dummy, /* Vector # 315 DSPI6_2 DSPI_6_SR[TFFF] */
(uint32_t) &dummy, /* Vector # 316 DSPI6_3 DSPI_6_SR[TCF] */
(uint32_t) &dummy, /* Vector # 317 DSPI6_4 DSPI_6_SR[RFDF] */
(uint32_t) &dummy, /* Vector # 318 DSPI6_5 DSPI_6_SR[SPITCF] | DSPI_6_SR[CMD_TCF] */
(uint32_t) &dummy, /* Vector # 319 DSPI6_6 DSPI_6_SR[DSITCF] | DSPI_6_SR[CMDFFF] */
(uint32_t) &dummy, /* Vector # 320 DSPI6_7 DSPI_6_SR[SPEF] | DSPI_6_SR[DPEF] */
(uint32_t) &dummy, /* Vector # 321 DSPI6_8 DSPI_6_SR[DDIF] */
(uint32_t) &dummy, /* Vector # 322 */
(uint32_t) &dummy, /* Vector # 323 */
(uint32_t) &dummy, /* Vector # 324 */
(uint32_t) &dummy, /* Vector # 325 */
(uint32_t) &dummy, /* Vector # 326 */
(uint32_t) &dummy, /* Vector # 327 */
(uint32_t) &dummy, /* Vector # 328 */
(uint32_t) &dummy, /* Vector # 329 */
(uint32_t) &dummy, /* Vector # 330 */
(uint32_t) &dummy, /* Vector # 331 */
(uint32_t) &dummy, /* Vector # 332 */
(uint32_t) &dummy, /* Vector # 333 */
(uint32_t) &dummy, /* Vector # 334 */
(uint32_t) &dummy, /* Vector # 335 */
(uint32_t) &dummy, /* Vector # 336 */
(uint32_t) &dummy, /* Vector # 337 */
(uint32_t) &dummy, /* Vector # 338 */
(uint32_t) &dummy, /* Vector # 339 */
(uint32_t) &dummy, /* Vector # 340 */
(uint32_t) &dummy, /* Vector # 341 */
(uint32_t) &dummy, /* Vector # 342 */
(uint32_t) &dummy, /* Vector # 343 */
(uint32_t) &dummy, /* Vector # 344 */
(uint32_t) &dummy, /* Vector # 345 */
(uint32_t) &dummy, /* Vector # 346 */
(uint32_t) &dummy, /* Vector # 347 */
(uint32_t) &dummy, /* Vector # 348 */
(uint32_t) &dummy, /* Vector # 349 */
(uint32_t) &dummy, /* Vector # 350 */
(uint32_t) &dummy, /* Vector # 351 */
(uint32_t) &dummy, /* Vector # 352 */
(uint32_t) &dummy, /* Vector # 353 */
(uint32_t) &dummy, /* Vector # 354 */
(uint32_t) &dummy, /* Vector # 355 */
(uint32_t) &dummy, /* Vector # 356 */
(uint32_t) &dummy, /* Vector # 357 */
(uint32_t) &dummy, /* Vector # 358 */
(uint32_t) &dummy, /* Vector # 359 */
(uint32_t) &dummy, /* Vector # 360 */
(uint32_t) &dummy, /* Vector # 361 */
(uint32_t) &dummy, /* Vector # 362 */
(uint32_t) &dummy, /* Vector # 363 */
(uint32_t) &dummy, /* Vector # 364 */
(uint32_t) &dummy, /* Vector # 365 */
(uint32_t) &dummy, /* Vector # 366 */
(uint32_t) &dummy, /* Vector # 367 DSPI12_0 DSPI_12_SR[TFUF] | DSPI_12_SR[RFOF]| */
                   /*              DSPI_12_SR[TFIWF] */
(uint32_t) &dummy, /* Vector # 368 DSPI12_1 DSPI_12_SR[EOQF] */
(uint32_t) &dummy, /* Vector # 369 DSPI12_2 DSPI_12_SR[TFFF] */
(uint32_t) &dummy, /* Vector # 370 DSPI12_3 DSPI_12_SR[TCF] */
(uint32_t) &dummy, /* Vector # 371 DSPI12_4 DSPI_12_SR[RFDF] */
(uint32_t) &dummy, /* Vector # 372 */
(uint32_t) &dummy, /* Vector # 373 */
(uint32_t) &dummy, /* Vector # 374 DSPI12_7 DSPI_12_SR[SPEF] */
(uint32_t) &dummy, /* Vector # 375 */
(uint32_t) &dummy, /* Vector # 376 Linflex/eSCI0_0 LINFlex_0_RXI */
(uint32_t) &dummy, /* Vector # 377 Linflex/eSCI0_1 LINFlex_0_TXI */
(uint32_t) &dummy, /* Vector # 378 Linflex/eSCI0_2 LINFlex_0_ERR */
(uint32_t) &dummy, /* Vector # 379 */
(uint32_t) &dummy, /* Vector # 380 Linflex/eSCI1_0 LINFlex_1_RXI */
(uint32_t) &dummy, /* Vector # 381 Linflex/eSCI1_1 LINFlex_1_TXI */
(uint32_t) &dummy, /* Vector # 382 Linflex/eSCI1_2 LINFlex_1_ERR */
(uint32_t) &dummy, /* Vector # 383 */
(uint32_t) &dummy, /* Vector # 384 Linflex/eSCI2_0 LINFlex_2_RXI */
(uint32_t) &dummy, /* Vector # 385 Linflex/eSCI2_1 LINFlex_2_TXI */
(uint32_t) &dummy, /* Vector # 386 Linflex/eSCI2_2 LINFlex_2_ERR */
(uint32_t) &dummy, /* Vector # 387 */
(uint32_t) &dummy, /* Vector # 388 */
(uint32_t) &dummy, /* Vector # 389 */
(uint32_t) &dummy, /* Vector # 390 */
(uint32_t) &dummy, /* Vector # 391 */
(uint32_t) &dummy, /* Vector # 392 */
(uint32_t) &dummy, /* Vector # 393 */
(uint32_t) &dummy, /* Vector # 394 */
(uint32_t) &dummy, /* Vector # 395 */
(uint32_t) &dummy, /* Vector # 396 */
(uint32_t) &dummy, /* Vector # 397 */
(uint32_t) &dummy, /* Vector # 398 */
(uint32_t) &dummy, /* Vector # 399 */
(uint32_t) &dummy, /* Vector # 400 */

(uint32_t) &dummy, /* Vector # 401 */
(uint32_t) &dummy, /* Vector # 402 */
(uint32_t) &dummy, /* Vector # 403 */
(uint32_t) &dummy, /* Vector # 404 */
(uint32_t) &dummy, /* Vector # 405 */
(uint32_t) &dummy, /* Vector # 406 */
(uint32_t) &dummy, /* Vector # 407 */
(uint32_t) &dummy, /* Vector # 408 */
(uint32_t) &dummy, /* Vector # 409 */
(uint32_t) &dummy, /* Vector # 410 */
(uint32_t) &dummy, /* Vector # 411 */
(uint32_t) &dummy, /* Vector # 412 */
(uint32_t) &dummy, /* Vector # 413 */
(uint32_t) &dummy, /* Vector # 414 */
(uint32_t) &dummy, /* Vector # 415 */
(uint32_t) &dummy, /* Vector # 416 Linflex/eSCI16_0 LINFlex_16_RXI */
(uint32_t) &dummy, /* Vector # 417 Linflex/eSCI16_1 LINFlex_16_TXI */
(uint32_t) &dummy, /* Vector # 418 Linflex/eSCI16_2 LINFlex_16_ERR */
(uint32_t) &dummy, /* Vector # 419 */
(uint32_t) &dummy, /* Vector # 420 */
(uint32_t) &dummy, /* Vector # 421 */
(uint32_t) &dummy, /* Vector # 422 */
(uint32_t) &dummy, /* Vector # 423 */
(uint32_t) &dummy, /* Vector # 424 */
(uint32_t) &dummy, /* Vector # 425 */
(uint32_t) &dummy, /* Vector # 426 */
(uint32_t) &dummy, /* Vector # 427 */
(uint32_t) &dummy, /* Vector # 428 */
(uint32_t) &dummy, /* Vector # 429 */
(uint32_t) &dummy, /* Vector # 430 */
(uint32_t) &dummy, /* Vector # 431 */
(uint32_t) &dummy, /* Vector # 432 Linflex/eSCI14_0 LINFlex_14_RXI */
(uint32_t) &dummy, /* Vector # 433 Linflex/eSCI14_1 LINFlex_14_TXI */
(uint32_t) &dummy, /* Vector # 434 Linflex/eSCI14_2 LINFlex_14_ERR */
(uint32_t) &dummy, /* Vector # 435 */
(uint32_t) &dummy, /* Vector # 436 Linflex/eSCI15_0 LINFlex_15_RXI */
(uint32_t) &dummy, /* Vector # 437 Linflex/eSCI15_1 LINFlex_15_TXI */
(uint32_t) &dummy, /* Vector # 438 Linflex/eSCI15_2 LINFlex_15_ERR */
(uint32_t) &dummy, /* Vector # 439 */
(uint32_t) &dummy, /* Vector # 440 IIC_0_0 I2C0_SR[IBAL] | I2C0_SR[TCF] | */
                   /*              I2C0_SR[IAAS] */
(uint32_t) &dummy, /* Vector # 441 */
(uint32_t) &dummy, /* Vector # 442 IIC_1_0 I2C1_SR[IBAL] | I2C1_SR[TCF] | */
                   /*              I2C1_SR[IAAS] */
(uint32_t) &dummy, /* Vector # 443 */
(uint32_t) &dummy, /* Vector # 444 */
(uint32_t) &dummy, /* Vector # 445 */
(uint32_t) &dummy, /* Vector # 446 */
(uint32_t) &dummy, /* Vector # 447 */
(uint32_t) &dummy, /* Vector # 448 */
(uint32_t) &dummy, /* Vector # 449 */
(uint32_t) &dummy, /* Vector # 450 */
(uint32_t) &dummy, /* Vector # 451 */
(uint32_t) &dummy, /* Vector # 452 */
(uint32_t) &dummy, /* Vector # 453 FlexRay_0_0 FR_0_LRNEIF | DRNEIF */
(uint32_t) &dummy, /* Vector # 454 FlexRay_0_1 FR_0_LRCEIF | DRCEIF */
(uint32_t) &dummy, /* Vector # 455 FlexRay_0_2 FR_0_FNEAIF */
(uint32_t) &dummy, /* Vector # 456 FlexRay_0_3 FR_0_FNEBIF */
(uint32_t) &dummy, /* Vector # 457 FlexRay_0_4 FR_0_WUPIF */
(uint32_t) &dummy, /* Vector # 458 FlexRay_0_5 FR_0_PRIF */
(uint32_t) &dummy, /* Vector # 459 FlexRay_0_6 FR_0_CHIF */
(uint32_t) &dummy, /* Vector # 460 FlexRay_0_7 FR_0_TBIF */
(uint32_t) &dummy, /* Vector # 461 FlexRay_0_8 FR_0_RBIF */
(uint32_t) &dummy, /* Vector # 462 FlexRay_0_9 FR_0_MIF */
(uint32_t) &dummy, /* Vector # 463 FlexRay_0_10 FR_0_STPCLK */
(uint32_t) &dummy, /* Vector # 464 */
(uint32_t) &dummy, /* Vector # 465 FlexRay_1_0 FR_1_LRNEIF | DRNEIF */
(uint32_t) &dummy, /* Vector # 466 FlexRay_1_1 FR_1_LRCEIF | DRCEIF */
(uint32_t) &dummy, /* Vector # 467 FlexRay_1_2 FR_1_FNEAIF */
(uint32_t) &dummy, /* Vector # 468 FlexRay_1_3 FR_1_FNEBIF */
(uint32_t) &dummy, /* Vector # 469 FlexRay_1_4 FR_1_WUPIF */
(uint32_t) &dummy, /* Vector # 470 FlexRay_1_5 FR_1_PRIF */
(uint32_t) &dummy, /* Vector # 471 FlexRay_1_6 FR_1_CHIF */
(uint32_t) &dummy, /* Vector # 472 FlexRay_1_7 FR_1_TBIF */
(uint32_t) &dummy, /* Vector # 473 FlexRay_1_8 FR_1_RBIF */
(uint32_t) &dummy, /* Vector # 474 FlexRay_1_9 FR_1_MIF */
(uint32_t) &dummy, /* Vector # 475 FlexRay_1_10 FR_1_STPCLK */
(uint32_t) &dummy, /* Vector # 476 */
(uint32_t) &dummy, /* Vector # 477 Power Monitor Unit GR_S[VD15] | GR_S[VD14] | GR_S[VD13] | */
                   /*              GR_S[VD12] | GR_S[VD10] | GR_S[VD9] | */
                   /*              GR_S[VD7] | GR_S[VD4] | GR_S[VD3] */
(uint32_t) &dummy, /* Vector # 478 Power management Unit (temp sensor) EPR_TD[TEMP_3] | EPR_TD[TEMP_2] | */
                   /*              EPR_TD[TEMP_0] */
(uint32_t) &dummy, /* Vector # 479 */
(uint32_t) &dummy, /* Vector # 480 PLL_0_0 PLL0SR[LOLF] */
(uint32_t) &dummy, /* Vector # 481 */
(uint32_t) &dummy, /* Vector # 482 PLL_1_0 PLL1SR[LOLF] */
(uint32_t) &dummy, /* Vector # 483 */
(uint32_t) &dummy, /* Vector # 484 PLL_0_1 PLL0SR[EXTPDF] */
(uint32_t) &dummy, /* Vector # 485 PLL_1_1 PLL1SR[EXTPDF] */
(uint32_t) &dummy, /* Vector # 486 */
(uint32_t) &dummy, /* Vector # 487 */
(uint32_t) &dummy, /* Vector # 488 FCCU_0 FCCU_IRQ_STAT[ALRM_STAT] */
(uint32_t) &dummy, /* Vector # 489 FCCU_1 FCU_IRQ_STAT[CFG_TO_STAT] */
(uint32_t) &dummy, /* Vector # 490 FCCU_2 FCCU_SCFS[RCCS0] */
(uint32_t) &dummy, /* Vector # 491 FCCU_3 FCCU_SCFS[RCCS1] */
(uint32_t) &dummy, /* Vector # 492 */
(uint32_t) &dummy, /* Vector # 493 */
(uint32_t) &dummy, /* Vector # 494 STCU2_0 STCU_RUNSW[LBIE] */
(uint32_t) &dummy, /* Vector # 495 STCU2_1 STCU_RUNSW[MBIE] */
(uint32_t) &dummy, /* Vector # 496 Hardware Security Module 0 HSM2HTIE[0] */
(uint32_t) &dummy, /* Vector # 497 Hardware Security Module 1 HSM2HTIE[1] */
(uint32_t) &dummy, /* Vector # 498 Hardware Security Module 2 HSM2HTIE[2] */
(uint32_t) &dummy, /* Vector # 499 Hardware Security Module 3 HSM2HTIE[3] */
(uint32_t) &dummy, /* Vector # 500 Hardware Security Module 4 HSM2HTIE[4] */

(uint32_t) &dummy, /* Vector # 501 Hardware Security Module 5 HSM2HTIE[5] */
(uint32_t) &dummy, /* Vector # 502 Hardware Security Module 6 HSM2HTIE[6] */
(uint32_t) &dummy, /* Vector # 503 Hardware Security Module 7 HSM2HTIE[7] */
(uint32_t) &dummy, /* Vector # 504 Hardware Security Module 8 HSM2HTIE[8] */
(uint32_t) &dummy, /* Vector # 505 Hardware Security Module 9 HSM2HTIE[9] */
(uint32_t) &dummy, /* Vector # 506 Hardware Security Module 10 HSM2HTIE[10] */
(uint32_t) &dummy, /* Vector # 507 Hardware Security Module 11 HSM2HTIE[11] */
(uint32_t) &dummy, /* Vector # 508 Hardware Security Module 12 HSM2HTIE[12] */
(uint32_t) &dummy, /* Vector # 509 Hardware Security Module 13 HSM2HTIE[13] */
(uint32_t) &dummy, /* Vector # 510 Hardware Security Module 14 HSM2HTIE[14] */
(uint32_t) &dummy, /* Vector # 511 Hardware Security Module 15 HSM2HTIE[15] */
(uint32_t) &dummy, /* Vector # 512 Hardware Security Module 16 HSM2HTIE[16] */
(uint32_t) &dummy, /* Vector # 513 Hardware Security Module 17 HSM2HTIE[17] */
(uint32_t) &dummy, /* Vector # 514 Hardware Security Module 18 HSM2HTIE[18] */
(uint32_t) &dummy, /* Vector # 515 Hardware Security Module 19 HSM2HTIE[19] */
(uint32_t) &dummy, /* Vector # 516 Hardware Security Module 20 HSM2HTIE[20] */
(uint32_t) &dummy, /* Vector # 517 Hardware Security Module 21 HSM2HTIE[21] */
(uint32_t) &dummy, /* Vector # 518 Hardware Security Module 22 HSM2HTIE[22] */
(uint32_t) &dummy, /* Vector # 519 Hardware Security Module 23 HSM2HTIE[23] */
(uint32_t) &dummy, /* Vector # 520 Hardware Security Module 24 HSM2HTIE[24] */
(uint32_t) &dummy, /* Vector # 521 Hardware Security Module 25 HSM2HTIE[25] */
(uint32_t) &dummy, /* Vector # 522 Hardware Security Module 26 HSM2HTIE[26] */
(uint32_t) &dummy, /* Vector # 523 Hardware Security Module 27 HSM2HTIE[27] */
(uint32_t) &dummy, /* Vector # 524 Hardware Security Module 28 HSM2HTIE[28] */
(uint32_t) &dummy, /* Vector # 525 Hardware Security Module 29 HSM2HTIE[29] */
(uint32_t) &dummy, /* Vector # 526 Hardware Security Module 30 HSM2HTIE[30] */
(uint32_t) &dummy, /* Vector # 527 Hardware Security Module 31 HSM2HTIE[31] */
(uint32_t) &dummy, /* Vector # 528 SAR_ADC0 SAR_ADC0 */
(uint32_t) &dummy, /* Vector # 529 SAR_ADC1 SAR_ADC1 */
(uint32_t) &dummy, /* Vector # 530 SAR_ADC2 SAR_ADC2 */
(uint32_t) &dummy, /* Vector # 531 SAR_ADC3 SAR_ADC3 */
(uint32_t) &dummy, /* Vector # 532 SAR_ADC4 SAR_ADC4 */
(uint32_t) &dummy, /* Vector # 533 */
(uint32_t) &dummy, /* Vector # 534 SAR_ADC6 SAR_ADC6 */
(uint32_t) &dummy, /* Vector # 535 SAR_ADC7 SAR_ADC7 */
(uint32_t) &dummy, /* Vector # 536 SAR_ADC8 SAR_ADC8 */
(uint32_t) &dummy, /* Vector # 537 SAR_ADC9 SAR_ADC9 */
(uint32_t) &dummy, /* Vector # 538 SAR_ADC10 SAR_ADC10 */
(uint32_t) &dummy, /* Vector # 539 SAR_ADC11 SAR_ADC11 */
(uint32_t) &dummy, /* Vector # 540 */
(uint32_t) &dummy, /* Vector # 541 */
(uint32_t) &dummy, /* Vector # 542 */
(uint32_t) &dummy, /* Vector # 543 SAR_ADCB SAR_ADCB */
(uint32_t) &dummy, /* Vector # 544 SD_ADC0 SD_ADC0 */
(uint32_t) &dummy, /* Vector # 545 SD_ADC1 SD_ADC1 */
(uint32_t) &dummy, /* Vector # 546 SD_ADC2 SD_ADC2 */
(uint32_t) &dummy, /* Vector # 547 SD_ADC3 SD_ADC3 */
(uint32_t) &dummy, /* Vector # 548 SD_ADC4 SD_ADC4 */
(uint32_t) &dummy, /* Vector # 549 SD_ADC5 SD_ADC5 */
(uint32_t) &dummy, /* Vector # 550 SD_ADC6 SD_ADC6 */
(uint32_t) &dummy, /* Vector # 551 SD_ADC7 SD_ADC7 */
(uint32_t) &dummy, /* Vector # 552 SD_ADC8 SD_ADC8 */
(uint32_t) &dummy, /* Vector # 553 SD_ADC9 SD_ADC9 */
(uint32_t) &dummy, /* Vector # 554 */
(uint32_t) &dummy, /* Vector # 555 */
(uint32_t) &dummy, /* Vector # 556 */
(uint32_t) &dummy, /* Vector # 557 */
(uint32_t) &dummy, /* Vector # 558 SENT_COMBINED_FAST_0 SENT_0_FMSG_RDY[0] | */
                   /*              SENT_0_FMSG_RDY[1] | */
                   /*              SENT_0_FMSG_RDY[2] | */
                   /*              SENT_0_FMSG_RDY[3] | */
                   /*              SENT_0_FMSG_RDY[4] */
(uint32_t) &dummy, /* Vector # 559 SENT_COMBINED_SLOW_0 SENT_0_SMSG_RDY[0] | */
                   /*              SENT_0_SMSG_RDY[1] | */
                   /*              SENT_0_SMSG_RDY[2] | */
                   /*              SENT_0_SMSG_RDY[3] | */
                   /*              SENT_0_SMSG_RDY[4] */
(uint32_t) &dummy, /* Vector # 560 SENT_COMBINED_ERR_0 SENT_0_GBL_STATUS[FMDU] | */
                   /*              SENT_0_GBL_STATUS[SMDU] | */
                   /*              SENT_0_CHn_STATUS[4:7] | */
                   /*              SENT_0_CHn_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 561 SENT_COMBINED_FAST_1 SENT_1_FMSG_RDY[0] | */
                   /*              SENT_1_FMSG_RDY[1] | */
                   /*              SENT_1_FMSG_RDY[2] | */
                   /*              SENT_1_FMSG_RDY[3] | */
                   /*              SENT_1_FMSG_RDY[4] */
(uint32_t) &dummy, /* Vector # 562 SENT_COMBINED_SLOW_1 SENT_1_SMSG_RDY[0] | */
                   /*              SENT_1_SMSG_RDY[1] | */
                   /*              SENT_1_SMSG_RDY[2] | */
                   /*              SENT_1_SMSG_RDY[3] | */
                   /*              SENT_1_SMSG_RDY[4] */
(uint32_t) &dummy, /* Vector # 563 SENT_COMBINED_ERR_1 SENT_1_GBL_STATUS[FMDU] | */
                   /*              SENT_1_GBL_STATUS[SMDU] | */
                   /*              SENT_1_CHn_STATUS[4:7] | */
                   /*              SENT_1_CHn_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 564 SENT_0_CH0_FAST SENT_0_FMSG_RDY[0] */
(uint32_t) &dummy, /* Vector # 565 SENT_0_CH0_SLOW SENT_0_SMSG_RDY[0] */
(uint32_t) &dummy, /* Vector # 566 SENT_0_CH0_ERR SENT_0_CH0_STATUS[4:7] | */
                   /*              SENT_0_CH0_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 567 SENT_0_CH1_FAST SENT_0_FMSG_RDY[1] */
(uint32_t) &dummy, /* Vector # 568 SENT_0_CH1_SLOW SENT_0_SMSG_RDY[1] */
(uint32_t) &dummy, /* Vector # 569 SENT_0_CH1_ERR SENT_0_CH1_STATUS[4:7] | */
                   /*              SENT_0_CH1_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 570 SENT_0_CH2_FAST SENT_0_FMSG_RDY[2] */
(uint32_t) &dummy, /* Vector # 571 SENT_0_CH2_SLOW SENT_0_SMSG_RDY[2] */
(uint32_t) &dummy, /* Vector # 572 SENT_0_CH2_ERR SENT_0_CH2_STATUS[4:7] | */
                   /*              SENT_2_CH3_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 573 SENT_0_CH3_FAST SENT_0_FMSG_RDY[3] */
(uint32_t) &dummy, /* Vector # 574 SENT_0_CH3_SLOW SENT_0_SMSG_RDY[3] */
(uint32_t) &dummy, /* Vector # 575 SENT_0_CH3_ERR SENT_0_CH3_STATUS[4:7] | */
                   /*              SENT_0_CH3_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 576 SENT_0_CH4_FAST SENT_0_FMSG_RDY[4] */
(uint32_t) &dummy, /* Vector # 577 SENT_0_CH4_SLOW SENT_0_SMSG_RDY[4] */
(uint32_t) &dummy, /* Vector # 578 SENT_0_CH4_ERR SENT_0_CH4_STATUS[4:7] | */
                   /*              SENT_0_CH4_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 579 SENT_1_CH0_FAST SENT_1_FMSG_RDY[0] */
(uint32_t) &dummy, /* Vector # 580 SENT_1_CH0_SLOW SENT_1_SMSG_RDY[0] */
(uint32_t) &dummy, /* Vector # 581 SENT_1_CH0_ERR SENT_1_CH0_STATUS[4:7] | */
                   /*              SENT_1_CH0_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 582 SENT_1_CH1_FAST SENT_1_FMSG_RDY[1] */
(uint32_t) &dummy, /* Vector # 583 SENT_1_CH1_SLOW SENT_1_SMSG_RDY[1] */
(uint32_t) &dummy, /* Vector # 584 SENT_1_CH1_ERR SENT_1_CH1_STATUS[4:7] | */
                   /*              SENT_1_CH1_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 585 SENT_1_CH2_FAST SENT_1_FMSG_RDY[2] */
(uint32_t) &dummy, /* Vector # 586 SENT_1_CH2_SLOW SENT_1_SMSG_RDY[2] */
(uint32_t) &dummy, /* Vector # 587 SENT_1_CH2_ERR SENT_1_CH3_STATUS[4:7] | */
                   /*              SENT_1_CH3_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 588 SENT_1_CH3_FAST SENT_1_FMSG_RDY[3] */
(uint32_t) &dummy, /* Vector # 589 SENT_1_CH3_SLOW SENT_1_SMSG_RDY[3] */
(uint32_t) &dummy, /* Vector # 590 SENT_1_CH3_ERR SENT_1_CH3_STATUS[4:7] | */
                   /*              SENT_1_CH3_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 591 SENT_1_CH4_FAST SENT_1_FMSG_RDY[4] */
(uint32_t) &dummy, /* Vector # 592 SENT_1_CH4_SLOW SENT_1_SMSG_RDY[4] */
(uint32_t) &dummy, /* Vector # 593 SENT_1_CH4_ERR SENT_1_CH4_STATUS[4:7] | */
                   /*              SENT_1_CH4_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 594 SENT_0_CH5_FAST SENT_0_FMSG_RDY[5] */
(uint32_t) &dummy, /* Vector # 595 SENT_0_CH5_SLOW SENT_0_SMSG_RDY[5] */
(uint32_t) &dummy, /* Vector # 596 SENT_0_CH5_ERR SENT_0_CH5_STATUS[4:7] | */
                   /*              SENT_0_CH5_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 597 SENT_0_CH6_FAST SENT_0_FMSG_RDY[6] */
(uint32_t) &dummy, /* Vector # 598 SENT_0_CH6_SLOW SENT_0_SMSG_RDY[6] */
(uint32_t) &dummy, /* Vector # 599 SENT_0_CH6_ERR SENT_0_CH6_STATUS[4:7] | */
                   /*              SENT_0_CH6_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 600 SENT_0_CH7_FAST SENT_0_FMSG_RDY[7] */

(uint32_t) &dummy, /* Vector # 601 SENT_0_CH7_SLOW SENT_0_SMSG_RDY[7] */
(uint32_t) &dummy, /* Vector # 602 SENT_0_CH7_ERR SENT_0_CH7_STATUS[4:7] | */
                   /*              SENT_0_CH7_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 603 SENT_1_CH5_FAST SENT_1_FMSG_RDY[5] */
(uint32_t) &dummy, /* Vector # 604 SENT_1_CH5_SLOW SENT_1_SMSG_RDY[5] */
(uint32_t) &dummy, /* Vector # 605 SENT_1_CH5_ERR SENT_1_CH5_STATUS[4:7] | */
                   /*              SENT_1_CH5_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 606 SENT_1_CH6_FAST SENT_1_FMSG_RDY[6] */
(uint32_t) &dummy, /* Vector # 607 SENT_1_CH6_SLOW SENT_1_SMSG_RDY[6] */
(uint32_t) &dummy, /* Vector # 608 SENT_1_CH6_ERR SENT_1_CH6_STATUS[4:7] | */
                   /*              SENT_1_CH6_STATUS[9:15] */
(uint32_t) &dummy, /* Vector # 609 */
(uint32_t) &dummy, /* Vector # 610 */
(uint32_t) &dummy, /* Vector # 611 */
(uint32_t) &dummy, /* Vector # 612 PSI5_0_CH0_0 PSI5_0_CH_0_DSR[IS_DMA_TF_PM_DS] | PSI5_0_CH_0_DSR[IS_DMA_TF_SF] | */
                   /*              PSI5_0_CH_0_DSR[IS_DMA_PM_DS_FIFO_FULL] | */
                   /*              PSI5_0_CH_0_DSR[IS_DMA_SFUF] | */
                   /*              PSI5_0_CH_0_DSR[IS_DMA_PM_DS_UF] */
(uint32_t) &dummy, /* Vector # 613 PSI5_0_CH0_1 PSI5_0_CH_0_GISR[IS_CESM[6:1]] | */
                   /*              PSI5_0_CH_0_GISR[IS_STS] | */
                   /*              PSI5_0_CH_0_GISR[IS_DTS] | */
                   /*              PSI5_0_CH_0_GISR[[IS_DSROW] | */
                   /*              PSI5_0_CH_0_GISR[IS_BROW] | */
                   /*              PSI5_0_CH_0_GISR[[DSR_RDY] | */
                   /*              PSI5_0_CH_0_GISR[DBR_RDY] | */
                   /*              PSI5_0_CH_0_GISR[DPR_RDY] | */
                   /*              PSI5_0_CH_0_GISR[IS_OWSM[6:1]] | */
                   /*              PSI5_0_CH_0_GISR[IS_NVSM[6:1]] */
(uint32_t) &dummy, /* Vector # 614 PSI5_0_CH0_2 PSI5_0_CH_0_NDSR[NDS31] | */
                   /*              PSI5_0_CH_0_NDSR[NDS30] | … | */
                   /*              PSI5_0_CH_0_NDSR[NDS1] | */
                   /*              PSI5_0_CH_0_NDSR[NDS0] */
(uint32_t) &dummy, /* Vector # 615 PSI5_0_CH0_3 PSI5_0_CH_0_OWSR[NDS31] | */
                   /*              PSI5_0_CH_0_OWSR[NDS30] | … | */
                   /*              PSI5_0_CH_0_OWSR[NDS1] | */
                   /*              PSI5_0_CH_0_OWSR[NDS0] */
(uint32_t) &dummy, /* Vector # 616 PSI5_0_CH0_4 PSI5_0_CH_0_EISR[NDS31] | */
                   /*              PSI5_0_CH_0_EISR[NDS30] | … | */
                   /*              PSI5_0_CH_0_EISR[NDS1] | */
                   /*              PSI5_0_CH_0_EISR[NDS0] */
(uint32_t) &dummy, /* Vector # 617 PSI5_0_CH0_5 PSI5_0_CH_0_DSR[*] | */
                   /*              PSI5_0_CH_0_GISR[*] | */
                   /*              PSI5_0_CH_0_NDSR[31:0] | */
                   /*              PSI5_0_CH_0_OWSR[31:0] | */
                   /*              PSI5_0_CH_0_EISR[31:0] */
(uint32_t) &dummy, /* Vector # 618 PSI5_0_CH1_0 PSI5_0_CH_1_DSR[IS_DMA_TF_PM_DS] | PSI5_0_CH_1_DSR[IS_DMA_TF_SF] | */
                   /*              PSI5_0_CH_1_DSR[IS_DMA_PM_DS_FIFO_FULL] | */
                   /*              PSI5_0_CH_1_DSR[IS_DMA_SFUF] | */
                   /*              PSI5_0_CH_1_DSR[IS_DMA_PM_DS_UF] */
(uint32_t) &dummy, /* Vector # 619 PSI5_0_CH1_1 PSI5_0_CH_1_GISR[IS_CESM[6:1]] | */
                   /*              PSI5_0_CH_1_GISR[IS_STS] | */
                   /*              PSI5_0_CH_1_GISR[IS_DTS] | */
                   /*              PSI5_0_CH_1_GISR[[IS_DSROW] | */
                   /*              PSI5_0_CH_1_GISR[IS_BROW] | */
                   /*              PSI5_0_CH_1_GISR[[DSR_RDY] | */
                   /*              PSI5_0_CH_1_GISR[DBR_RDY] | */
                   /*              PSI5_0_CH_1_GISR[DPR_RDY] | */
                   /*              PSI5_0_CH_1_GISR[IS_OWSM[6:1]] | */
                   /*              PSI5_0_CH_1_GISR[IS_NVSM[6:1]] */
(uint32_t) &dummy, /* Vector # 620 PSI5_0_CH1_2 PSI5_0_CH_1_NDSR[NDS31] | */
                   /*              PSI5_0_CH_1_NDSR[NDS30] | … | */
                   /*              PSI5_0_CH_1_NDSR[NDS1] | */
                   /*              PSI5_0_CH_1_NDSR[NDS0] */
(uint32_t) &dummy, /* Vector # 621 PSI5_0_CH1_3 PSI5_0_CH_1_OWSR[NDS31] | */
                   /*              PSI5_0_CH_1_OWSR[NDS30] | … | */
                   /*              PSI5_0_CH_1_OWSR[NDS1] | */
                   /*              PSI5_0_CH_1_OWSR[NDS0] */
(uint32_t) &dummy, /* Vector # 622 PSI5_0_CH1_4 PSI5_0_CH_1_EISR[NDS31] | */
                   /*              PSI5_0_CH_1_EISR[NDS30] | … | */
                   /*              PSI5_0_CH_1_EISR[NDS1] | */
                   /*              PSI5_0_CH_1_EISR[NDS0] */
(uint32_t) &dummy, /* Vector # 623 PSI5_0_CH1_5 PSI5_0_CH_1_DSR[*] | */
                   /*              PSI5_0_CH_1_GISR[*] | */
                   /*              PSI5_0_CH_1_NDSR[31:0] | */
                   /*              PSI5_0_CH_1_OWSR[31:0] | */
                   /*              PSI5_0_CH_1_EISR[31:0] */
(uint32_t) &dummy, /* Vector # 624 PSI5_1_CH0_0 PSI5_1_CH_0_DSR[IS_DMA_TF_PM_DS] | PSI5_1_CH_0_DSR[IS_DMA_TF_SF] | */
                   /*              PSI5_1_CH_0_DSR[IS_DMA_PM_DS_FIFO_FULL] | */
                   /*              PSI5_1_CH_0_DSR[IS_DMA_SFUF] | */
                   /*              PSI5_1_CH_0_DSR[IS_DMA_PM_DS_UF] */
(uint32_t) &dummy, /* Vector # 625 PSI5_1_CH0_1 PSI5_1_CH_0_GISR[IS_CESM[6:1]] | */
                   /*              PSI5_1_CH_0_GISR[IS_STS] | */
                   /*              PSI5_1_CH_0_GISR[IS_DTS] | */
                   /*              PSI5_1_CH_0_GISR[[IS_DSROW] | */
                   /*              PSI5_1_CH_0_GISR[IS_BROW] | */
                   /*              PSI5_1_CH_0_GISR[[DSR_RDY] | */
                   /*              PSI5_1_CH_0_GISR[DBR_RDY] | */
                   /*              PSI5_1_CH_0_GISR[DPR_RDY] | */
                   /*              PSI5_1_CH_0_GISR[IS_OWSM[6:1]] | */
                   /*              PSI5_1_CH_0_GISR[IS_NVSM[6:1]] */
(uint32_t) &dummy, /* Vector # 626 PSI5_1_CH0_2 PSI5_1_CH_0_NDSR[NDS31] | */
                   /*              PSI5_1_CH_0_NDSR[NDS30] | … | */
                   /*              PSI5_1_CH_0_NDSR[NDS1] | */
                   /*              PSI5_1_CH_0_NDSR[NDS0] */
(uint32_t) &dummy, /* Vector # 627 PSI5_1_CH0_3 PSI5_1_CH_0_OWSR[NDS31] | */
                   /*              PSI5_1_CH_0_OWSR[NDS30] | … | */
                   /*              PSI5_1_CH_0_OWSR[NDS1] | */
                   /*              PSI5_1_CH_0_OWSR[NDS0] */
(uint32_t) &dummy, /* Vector # 628 PSI5_1_CH0_4 PSI5_1_CH_0_EISR[NDS31] | */
                   /*              PSI5_1_CH_0_EISR[NDS30] | … | */
                   /*              PSI5_1_CH_0_EISR[NDS1] | */
                   /*              PSI5_1_CH_0_EISR[NDS0] */
(uint32_t) &dummy, /* Vector # 629 PSI5_1_CH0_5 PSI5_1_CH_0_DSR[*] | */
                   /*              PSI5_1_CH_0_GISR[*] | */
                   /*              PSI5_1_CH_0_NDSR[31:0] | */
                   /*              PSI5_1_CH_0_OWSR[31:0] | */
                   /*              PSI5_1_CH_0_EISR[31:0] */
(uint32_t) &dummy, /* Vector # 630 PSI5_0_CH2_0 PSI5_0_CH_2_DSR[IS_DMA_TF_PM_DS] | PSI5_0_CH_2_DSR[IS_DMA_TF_SF] | */
                   /*              PSI5_0_CH_2_DSR[IS_DMA_PM_DS_FIFO_FULL] | */
                   /*              PSI5_0_CH_2_DSR[IS_DMA_SFUF] | */
                   /*              PSI5_0_CH_2_DSR[IS_DMA_PM_DS_UF] */
(uint32_t) &dummy, /* Vector # 631 PSI5_0_CH2_1 PSI5_0_CH_2_GISR[IS_CESM[6:1]] | */
                   /*              PSI5_0_CH_2_GISR[IS_STS] | */
                   /*              PSI5_0_CH_2_GISR[IS_DTS] | */
                   /*              PSI5_0_CH_2_GISR[[IS_DSROW] | */
                   /*              PSI5_0_CH_2_GISR[IS_BROW] | */
                   /*              PSI5_0_CH_2_GISR[[DSR_RDY] | */
                   /*              PSI5_0_CH_2_GISR[DBR_RDY] | */
                   /*              PSI5_0_CH_2_GISR[DPR_RDY] | */
                   /*              PSI5_0_CH_2_GISR[IS_OWSM[6:1]] | */
                   /*              PSI5_0_CH_2_GISR[IS_NVSM[6:1]] */
(uint32_t) &dummy, /* Vector # 632 PSI5_0_CH2_2 PSI5_0_CH_2_NDSR[NDS31] | */
                   /*              PSI5_0_CH_2_NDSR[NDS30] | … | */
                   /*              PSI5_0_CH_2_NDSR[NDS1] | */
                   /*              PSI5_0_CH_2_NDSR[NDS0] */
(uint32_t) &dummy, /* Vector # 633 PSI5_0_CH2_3 PSI5_0_CH_2_OWSR[NDS31] | */
                   /*              PSI5_0_CH_2_OWSR[NDS30] | … | */
                   /*              PSI5_0_CH_2_OWSR[NDS1] | */
                   /*              PSI5_0_CH_2_OWSR[NDS0] */
(uint32_t) &dummy, /* Vector # 634 PSI5_0_CH2_4 PSI5_0_CH_2_EISR[NDS31] | */
                   /*              PSI5_0_CH_2_EISR[NDS30] | … | */
                   /*              PSI5_0_CH_2_EISR[NDS1] | */
                   /*              PSI5_0_CH_2_EISR[NDS0] */
(uint32_t) &dummy, /* Vector # 635 PSI5_0_CH2_5 PSI5_0_CH_2_DSR[*] | */
                   /*              PSI5_0_CH_2_GISR[*] | */
                   /*              PSI5_0_CH_2_NDSR[31:0] | */
                   /*              PSI5_0_CH_2_OWSR[31:0] | */
                   /*              PSI5_0_CH_2_EISR[31:0] */
(uint32_t) &dummy, /* Vector # 636 PSI5_1_CH1_0 PSI5_1_CH_1_DSR[IS_DMA_TF_PM_DS] | PSI5_1_CH_1_DSR[IS_DMA_TF_SF] | */
                   /*              PSI5_1_CH_1_DSR[IS_DMA_PM_DS_FIFO_FULL] | */
                   /*              PSI5_1_CH_1_DSR[IS_DMA_SFUF] | */
                   /*              PSI5_1_CH_1_DSR[IS_DMA_PM_DS_UF] */
(uint32_t) &dummy, /* Vector # 637 PSI5_1_CH1_1 PSI5_1_CH_1_GISR[IS_CESM[6:1]] | */
                   /*              PSI5_1_CH_1_GISR[IS_STS] | */
                   /*              PSI5_1_CH_1_GISR[IS_DTS] | */
                   /*              PSI5_1_CH_1_GISR[[IS_DSROW] | */
                   /*              PSI5_1_CH_1_GISR[IS_BROW] | */
                   /*              PSI5_1_CH_1_GISR[[DSR_RDY] | */
                   /*              PSI5_1_CH_1_GISR[DBR_RDY] | */
                   /*              PSI5_1_CH_1_GISR[DPR_RDY] | */
                   /*              PSI5_1_CH_1_GISR[IS_OWSM[6:1]] | */
                   /*              PSI5_1_CH_1_GISR[IS_NVSM[6:1]] */
(uint32_t) &dummy, /* Vector # 638 PSI5_1_CH1_2 PSI5_1_CH_1_NDSR[NDS31] | */
                   /*              PSI5_1_CH_1_NDSR[NDS30] | … | */
                   /*              PSI5_1_CH_1_NDSR[NDS1] | */
                   /*              PSI5_1_CH_1_NDSR[NDS0] */
(uint32_t) &dummy, /* Vector # 639 PSI5_1_CH1_3 PSI5_1_CH_1_OWSR[NDS31] | */
                   /*              PSI5_1_CH_1_OWSR[NDS30] | … | */
                   /*              PSI5_1_CH_1_OWSR[NDS1] | */
                   /*              PSI5_1_CH_1_OWSR[NDS0] */
(uint32_t) &dummy, /* Vector # 640 PSI5_1_CH1_4 PSI5_1_CH_1_EISR[NDS31] | */
                   /*              PSI5_1_CH_1_EISR[NDS30] | … | */
                   /*              PSI5_1_CH_1_EISR[NDS1] | */
                   /*              PSI5_1_CH_1_EISR[NDS0] */
(uint32_t) &dummy, /* Vector # 641 PSI5_1_CH1_5 PSI5_1_CH_1_DSR[*] | */
                   /*              PSI5_1_CH_1_GISR[*] | */
                   /*              PSI5_1_CH_1_NDSR[31:0] | */
                   /*              PSI5_1_CH_1_OWSR[31:0] | */
                   /*              PSI5_1_CH_1_EISR[31:0] */
(uint32_t) &dummy, /* Vector # 642 */
(uint32_t) &dummy, /* Vector # 643 */
(uint32_t) &dummy, /* Vector # 644 */
(uint32_t) &dummy, /* Vector # 645 */
(uint32_t) &dummy, /* Vector # 646 */
(uint32_t) &dummy, /* Vector # 647 */
(uint32_t) &dummy, /* Vector # 648 */
(uint32_t) &dummy, /* Vector # 649 */
(uint32_t) &dummy, /* Vector # 650 */
(uint32_t) &dummy, /* Vector # 651 */
(uint32_t) &dummy, /* Vector # 652 */
(uint32_t) &dummy, /* Vector # 653 */
(uint32_t) &dummy, /* Vector # 654 SIPI_0 SIPI_ERR[TOEn] | SIPI_ERR[TIDEn] | */
                   /*              SIPI_ERR[ACKEn] */
(uint32_t) &dummy, /* Vector # 655 SIPI_1 SIPI_SR[GCRCE) */
(uint32_t) &dummy, /* Vector # 656 SIPI_2 SIPI_CSR0[RAR] | SIPI_CSR0[ACKR] */
(uint32_t) &dummy, /* Vector # 657 SIPI_3 SIPI_CSR1[RAR] | SIPI_CSR1[ACKR] */
(uint32_t) &dummy, /* Vector # 658 SIPI_4 SIPI_CSR2[RAR] | SIPI_CSR2[ACKR] */
(uint32_t) &dummy, /* Vector # 659 SIPI_5 SIPI_CSR3[RAR] | SIPI_CSR3[ACKR] */
(uint32_t) &dummy, /* Vector # 660 SIPI_6 SIPI_SR[TE0] | SIPI_SR[TE1] | */
                   /*              SIPI_SR[TE2] |SIPI_SR[TE3] | */
                   /*              SIPI_SR[MCR] */
(uint32_t) &dummy, /* Vector # 661 LFAST0_0 LFAST_0_TISR[TXPNGF] | */
                   /*              LFAST_0_TISR[TXUNSF] | */
                   /*              LFAST_0_TISR[TXICLCF] | */
                   /*              LFAST_0_TISR[TXDTF] */
(uint32_t) &dummy, /* Vector # 662 LFAST0_1 LFAST_0_TISR[TXIEF] | */
                   /*              LFAST_0_TISR[TXOVF] */
(uint32_t) &dummy, /* Vector # 663 LFAST0_2 LFAST_0_RISR[RXCTSF] | */
                   /*              LFAST_0_RISR[RXDF] | */
                   /*              LFAST_0_RISR[RXUNSF] */
(uint32_t) &dummy, /* Vector # 664 LFAST0_3 LFAST_0_RISR[RXUOF] | */
                   /*              LFAST_0_RISR[RXMNF] | */
                   /*              LFAST_0_RISR[RXMXF] | */
                   /*              LFAST_0_RISR[RXUFF] | */
                   /*              LFAST_0_RISR[RXOFF] | */
                   /*              LFAST_0_RISR[RXSZF] | */
                   /*              LFAST_0_RISR[RXICF] | */
                   /*              LFAST_0_RISR[RXLCEF] */
(uint32_t) &dummy, /* Vector # 665 LFAST0_4 LFAST_0_RIISR[ICPFF] | */
                   /*              LFAST_0_RIISR[ICPSF] | */
                   /*              LFAST_0_RIISR[ICPRF] | */
                   /*              LFAST_0_RIISR[ICTOF] | */
                   /*              LFAST_0_RIISR[ICLPF] | */
                   /*              LFAST_0_RIISR[ICCTF] | */
                   /*              LFAST_0_RIISR[ICTDF] | */
                   /*              LFAST_0_RIISR[ICTEF] | */
                   /*              LFAST_0_RIISR[ICRFF] | */
                   /*              LFAST_0_RIISR[ICRSF] | */
                   /*              LFAST_0_RIISR[ICTFF] | */
                   /*              LFAST_0_RIISR[ICTSF] | */
                   /*              LFAST_0_RIISR[ICPOFF] | */
                   /*              LFAST_0_RIISR[ICPONF] */
(uint32_t) &dummy, /* Vector # 666 */
(uint32_t) &dummy, /* Vector # 667 */
(uint32_t) &dummy, /* Vector # 668 */
(uint32_t) &dummy, /* Vector # 669 */
(uint32_t) &dummy, /* Vector # 670 */
(uint32_t) &dummy, /* Vector # 671 */
(uint32_t) &dummy, /* Vector # 672 */
(uint32_t) &dummy, /* Vector # 673 */
(uint32_t) &dummy, /* Vector # 674 JTAGM JTAGM_SR[SPU_INT] | JTAGM_SR[Idle] */
(uint32_t) &dummy, /* Vector # 675 JDC JDC_MSR[JIN_INT] | */
                   /*              JDC_MSR[JOUT_INT] */
(uint32_t) &dummy, /* Vector # 676 */
(uint32_t) &dummy, /* Vector # 677 M_TTCAN0_0 M_TTCAN_0 interrupt line0 */
(uint32_t) &dummy, /* Vector # 678 M_TTCAN0_1 M_TTCAN_0 interrupt line1 */
(uint32_t) &dummy, /* Vector # 679 M_TTCAN0_2 M_TTCAN_0 Register Time Mark interrupt */
(uint32_t) &dummy, /* Vector # 680 */
(uint32_t) &dummy, /* Vector # 681 */
(uint32_t) &dummy, /* Vector # 682 */
(uint32_t) &dummy, /* Vector # 683 */
(uint32_t) &dummy, /* Vector # 684 */
(uint32_t) &dummy, /* Vector # 685 */
(uint32_t) &dummy, /* Vector # 686 */
(uint32_t) &dummy, /* Vector # 687 */
(uint32_t) &dummy, /* Vector # 688 M_CAN1_0 m_can1_int0 */
(uint32_t) &dummy, /* Vector # 689 M_CAN1_1 m_can1_int1 */
(uint32_t) &dummy, /* Vector # 690 M_CAN2_0 m_can2_int0 */
(uint32_t) &dummy, /* Vector # 691 M_CAN2_1 m_can2_int1 */
(uint32_t) &dummy, /* Vector # 692 M_CAN3_0 m_can3_int0 */
(uint32_t) &dummy, /* Vector # 693 M_CAN3_1 m_can3_int1 */
(uint32_t) &dummy, /* Vector # 694 M_CAN4_0 m_can4_int0 */
(uint32_t) &dummy, /* Vector # 695 M_CAN4_1 m_can4_int1 */
(uint32_t) &dummy, /* Vector # 696 */
(uint32_t) &dummy, /* Vector # 697 */
(uint32_t) &dummy, /* Vector # 698 */
(uint32_t) &dummy, /* Vector # 699 */
(uint32_t) &dummy, /* Vector # 700 */

(uint32_t) &dummy, /* Vector # 701 */
(uint32_t) &dummy, /* Vector # 702 */
(uint32_t) &dummy, /* Vector # 703 */
(uint32_t) &dummy, /* Vector # 704 */
(uint32_t) &dummy, /* Vector # 705 */
(uint32_t) &dummy, /* Vector # 706 GTM_AEI_IRQ AEI gtm_icm.gtm_aei_irq aei */
(uint32_t) &dummy, /* Vector # 707 GTM_ARU_IRQ[0] gtm_icm.gtm_aru_irq[0] */
(uint32_t) &dummy, /* Vector # 708 GTM_ARU_IRQ[1] gtm_icm.gtm_aru_irq[1] */
(uint32_t) &dummy, /* Vector # 709 GTM_ARU_IRQ[2] gtm_icm.gtm_aru_irq[2] */
(uint32_t) &dummy, /* Vector # 710 GTM_BRC_IRQ gtm_icm.gtm_brc_irq */
(uint32_t) &dummy, /* Vector # 711 GTM_CMP_IRQ gtm_icm.gtm_cmp_irq */
(uint32_t) &dummy, /* Vector # 712 GTM_SPE0_IRQ gtm_icm.gtm_spe0_irq */
(uint32_t) &dummy, /* Vector # 713 GTM_SPE1_IRQ gtm_icm.gtm_spe1_irq */
(uint32_t) &dummy, /* Vector # 714 GTM_PSM0_IRQ[0] gtm_icm.gtm_psm0_irq[0] */
(uint32_t) &dummy, /* Vector # 715 GTM_PSM0_IRQ[1] gtm_icm.gtm_psm0_irq[1] */
(uint32_t) &dummy, /* Vector # 716 GTM_PSM0_IRQ[2] gtm_icm.gtm_psm0_irq[2] */
(uint32_t) &dummy, /* Vector # 717 GTM_PSM0_IRQ[3] gtm_icm.gtm_psm0_irq[3] */
(uint32_t) &dummy, /* Vector # 718 GTM_PSM0_IRQ[4] gtm_icm.gtm_psm0_irq[4] */
(uint32_t) &dummy, /* Vector # 719 GTM_PSM0_IRQ[5] gtm_icm.gtm_psm0_irq[5] */
(uint32_t) &dummy, /* Vector # 720 GTM_PSM0_IRQ[6] gtm_icm.gtm_psm0_irq[6] */
(uint32_t) &dummy, /* Vector # 721 GTM_PSM0_IRQ[7] gtm_icm.gtm_psm0_irq[7] */
(uint32_t) &dummy, /* Vector # 722 GTM_DPLL_IRQ[0] gtm_icm.gtm_dpll_irq[0] */
(uint32_t) &dummy, /* Vector # 723 GTM_DPLL_IRQ[1] gtm_icm.gtm_dpll_irq[1] */
(uint32_t) &dummy, /* Vector # 724 GTM_DPLL_IRQ[2] gtm_icm.gtm_dpll_irq[2] */
(uint32_t) &dummy, /* Vector # 725 GTM_DPLL_IRQ[3] gtm_icm.gtm_dpll_irq[3] */
(uint32_t) &dummy, /* Vector # 726 GTM_DPLL_IRQ[4] gtm_icm.gtm_dpll_irq[4] */
(uint32_t) &dummy, /* Vector # 727 GTM_DPLL_IRQ[5] gtm_icm.gtm_dpll_irq[5] */
(uint32_t) &dummy, /* Vector # 728 GTM_DPLL_IRQ[6] gtm_icm.gtm_dpll_irq[6] */
(uint32_t) &dummy, /* Vector # 729 GTM_DPLL_IRQ[7] gtm_icm.gtm_dpll_irq[7] */
(uint32_t) &dummy, /* Vector # 730 GTM_DPLL_IRQ[8] gtm_icm.gtm_dpll_irq[8] */
(uint32_t) &dummy, /* Vector # 731 GTM_DPLL_IRQ[9] gtm_icm.gtm_dpll_irq[9] */
(uint32_t) &dummy, /* Vector # 732 GTM_DPLL_IRQ[10] gtm_icm.gtm_dpll_irq[10] */
(uint32_t) &dummy, /* Vector # 733 GTM_DPLL_IRQ[11] gtm_icm.gtm_dpll_irq[11] */
(uint32_t) &dummy, /* Vector # 734 GTM_DPLL_IRQ[12] gtm_icm.gtm_dpll_irq[12] */
(uint32_t) &dummy, /* Vector # 735 GTM_DPLL_IRQ[13] gtm_icm.gtm_dpll_irq[13] */
(uint32_t) &dummy, /* Vector # 736 GTM_DPLL_IRQ[14] gtm_icm.gtm_dpll_irq[14] */
(uint32_t) &dummy, /* Vector # 737 GTM_DPLL_IRQ[15] gtm_icm.gtm_dpll_irq[15] */
(uint32_t) &dummy, /* Vector # 738 GTM_DPLL_IRQ[16] gtm_icm.gtm_dpll_irq[16] */
(uint32_t) &dummy, /* Vector # 739 GTM_DPLL_IRQ[17] gtm_icm.gtm_dpll_irq[17] */
(uint32_t) &dummy, /* Vector # 740 GTM_DPLL_IRQ[18] gtm_icm.gtm_dpll_irq[18] */
(uint32_t) &dummy, /* Vector # 741 GTM_DPLL_IRQ[19] gtm_icm.gtm_dpll_irq[19] */
(uint32_t) &dummy, /* Vector # 742 GTM_DPLL_IRQ[20] gtm_icm.gtm_dpll_irq[20] */
(uint32_t) &dummy, /* Vector # 743 GTM_DPLL_IRQ[21] gtm_icm.gtm_dpll_irq[21] */
(uint32_t) &dummy, /* Vector # 744 GTM_DPLL_IRQ[22] gtm_icm.gtm_dpll_irq[22] */
(uint32_t) &dummy, /* Vector # 745 GTM_DPLL_IRQ[23] gtm_icm.gtm_dpll_irq[23] */
(uint32_t) &dummy, /* Vector # 746 GTM_DPLL_IRQ[24] gtm_icm.gtm_dpll_irq[24] */
(uint32_t) &dummy, /* Vector # 747 GTM_DPLL_IRQ[25] gtm_icm.gtm_dpll_irq[25] */
(uint32_t) &dummy, /* Vector # 748 GTM_DPLL_IRQ[26] gtm_icm.gtm_dpll_irq[26] */
(uint32_t) &dummy, /* Vector # 749 GTM_TIM0_IRQ[0] gtm_icm.gtm_tim0_irq[0] */
(uint32_t) &dummy, /* Vector # 750 GTM_TIM0_IRQ[1] gtm_icm.gtm_tim0_irq[1] */
(uint32_t) &dummy, /* Vector # 751 GTM_TIM0_IRQ[2] gtm_icm.gtm_tim0_irq[2] */
(uint32_t) &dummy, /* Vector # 752 GTM_TIM0_IRQ[3] gtm_icm.gtm_tim0_irq[3] */
(uint32_t) &dummy, /* Vector # 753 GTM_TIM0_IRQ[4] gtm_icm.gtm_tim0_irq[4] */
(uint32_t) &dummy, /* Vector # 754 GTM_TIM0_IRQ[5] gtm_icm.gtm_tim0_irq[5] */
(uint32_t) &dummy, /* Vector # 755 GTM_TIM0_IRQ[6] gtm_icm.gtm_tim0_irq[6] */
(uint32_t) &dummy, /* Vector # 756 GTM_TIM0_IRQ[7] gtm_icm.gtm_tim0_irq[7] */
(uint32_t) &dummy, /* Vector # 757 GTM_TIM1_IRQ[0] gtm_icm.gtm_tim1_irq[0] */
(uint32_t) &dummy, /* Vector # 758 GTM_TIM1_IRQ[1] gtm_icm.gtm_tim1_irq[1] */
(uint32_t) &dummy, /* Vector # 759 GTM_TIM1_IRQ[2] gtm_icm.gtm_tim1_irq[2] */
(uint32_t) &dummy, /* Vector # 760 GTM_TIM1_IRQ[3] gtm_icm.gtm_tim1_irq[3] */
(uint32_t) &dummy, /* Vector # 761 GTM_TIM1_IRQ[4] gtm_icm.gtm_tim1_irq[4] */
(uint32_t) &dummy, /* Vector # 762 GTM_TIM1_IRQ[5] gtm_icm.gtm_tim1_irq[5] */
(uint32_t) &dummy, /* Vector # 763 GTM_TIM1_IRQ[6] gtm_icm.gtm_tim1_irq[6] */
(uint32_t) &dummy, /* Vector # 764 GTM_TIM1_IRQ[7] gtm_icm.gtm_tim1_irq[7] */
(uint32_t) &dummy, /* Vector # 765 GTM_TIM2_IRQ[0] gtm_icm.gtm_tim2_irq[0] */
(uint32_t) &dummy, /* Vector # 766 GTM_TIM2_IRQ[1] gtm_icm.gtm_tim2_irq[1] */
(uint32_t) &dummy, /* Vector # 767 GTM_TIM2_IRQ[2] gtm_icm.gtm_tim2_irq[2] */
(uint32_t) &dummy, /* Vector # 768 GTM_TIM2_IRQ[3] gtm_icm.gtm_tim2_irq[3] */
(uint32_t) &dummy, /* Vector # 769 GTM_TIM2_IRQ[4] gtm_icm.gtm_tim2_irq[4] */
(uint32_t) &dummy, /* Vector # 770 GTM_TIM2_IRQ[5] gtm_icm.gtm_tim2_irq[5] */
(uint32_t) &dummy, /* Vector # 771 GTM_TIM2_IRQ[6] gtm_icm.gtm_tim2_irq[6] */
(uint32_t) &dummy, /* Vector # 772 GTM_TIM2_IRQ[7] gtm_icm.gtm_tim2_irq[7] */
(uint32_t) &dummy, /* Vector # 773 GTM_TIM3_IRQ[0] gtm_icm.gtm_tim3_irq[0] */
(uint32_t) &dummy, /* Vector # 774 GTM_TIM3_IRQ[1] gtm_icm.gtm_tim3_irq[1] */
(uint32_t) &dummy, /* Vector # 775 GTM_TIM3_IRQ[2] gtm_icm.gtm_tim3_irq[2] */
(uint32_t) &dummy, /* Vector # 776 GTM_TIM3_IRQ[3] gtm_icm.gtm_tim3_irq[3] */
(uint32_t) &dummy, /* Vector # 777 GTM_TIM3_IRQ[4] gtm_icm.gtm_tim3_irq[4] */
(uint32_t) &dummy, /* Vector # 778 GTM_TIM3_IRQ[5] gtm_icm.gtm_tim3_irq[5] */
(uint32_t) &dummy, /* Vector # 779 GTM_TIM3_IRQ[6] gtm_icm.gtm_tim3_irq[6] */
(uint32_t) &dummy, /* Vector # 780 GTM_TIM3_IRQ[7] gtm_icm.gtm_tim3_irq[7] */
(uint32_t) &dummy, /* Vector # 781 GTM_MCS0_IRQ[0] gtm_icm.gtm_mcs0_irq[0] */
(uint32_t) &dummy, /* Vector # 782 GTM_MCS0_IRQ[1] gtm_icm.gtm_mcs0_irq[1] */
(uint32_t) &dummy, /* Vector # 783 GTM_MCS0_IRQ[2] gtm_icm.gtm_mcs0_irq[2] */
(uint32_t) &dummy, /* Vector # 784 GTM_MCS0_IRQ[3] gtm_icm.gtm_mcs0_irq[3] */
(uint32_t) &dummy, /* Vector # 785 GTM_MCS0_IRQ[4] gtm_icm.gtm_mcs0_irq[4] */
(uint32_t) &dummy, /* Vector # 786 GTM_MCS0_IRQ[5] gtm_icm.gtm_mcs0_irq[5] */
(uint32_t) &dummy, /* Vector # 787 GTM_MCS0_IRQ[6] gtm_icm.gtm_mcs0_irq[6] */
(uint32_t) &dummy, /* Vector # 788 GTM_MCS0_IRQ[7] gtm_icm.gtm_mcs0_irq[7] */
(uint32_t) &dummy, /* Vector # 789 GTM_MCS1_IRQ[0] gtm_icm.gtm_mcs1_irq[0] */
(uint32_t) &dummy, /* Vector # 790 GTM_MCS1_IRQ[1] gtm_icm.gtm_mcs1_irq[1] */
(uint32_t) &dummy, /* Vector # 791 GTM_MCS1_IRQ[2] gtm_icm.gtm_mcs1_irq[2] */
(uint32_t) &dummy, /* Vector # 792 GTM_MCS1_IRQ[3] gtm_icm.gtm_mcs1_irq[3] */
(uint32_t) &dummy, /* Vector # 793 GTM_MCS1_IRQ[4] gtm_icm.gtm_mcs1_irq[4] */
(uint32_t) &dummy, /* Vector # 794 GTM_MCS1_IRQ[5] gtm_icm.gtm_mcs1_irq[5] */
(uint32_t) &dummy, /* Vector # 795 GTM_MCS1_IRQ[6] gtm_icm.gtm_mcs1_irq[6] */
(uint32_t) &dummy, /* Vector # 796 GTM_MCS1_IRQ[7] gtm_icm.gtm_mcs1_irq[7] */
(uint32_t) &dummy, /* Vector # 797 GTM_MCS2_IRQ[0] gtm_icm.gtm_mcs2_irq[0] */
(uint32_t) &dummy, /* Vector # 798 GTM_MCS2_IRQ[1] gtm_icm.gtm_mcs2_irq[1] */
(uint32_t) &dummy, /* Vector # 799 GTM_MCS2_IRQ[2] gtm_icm.gtm_mcs2_irq[2] */
(uint32_t) &dummy, /* Vector # 800 GTM_MCS2_IRQ[3] gtm_icm.gtm_mcs2_irq[3] */

(uint32_t) &dummy, /* Vector # 801 GTM_MCS2_IRQ[4] gtm_icm.gtm_mcs2_irq[4] */
(uint32_t) &dummy, /* Vector # 802 GTM_MCS2_IRQ[5] gtm_icm.gtm_mcs2_irq[5] */
(uint32_t) &dummy, /* Vector # 803 GTM_MCS2_IRQ[6] gtm_icm.gtm_mcs2_irq[6] */
(uint32_t) &dummy, /* Vector # 804 GTM_MCS2_IRQ[7] gtm_icm.gtm_mcs2_irq[7] */
(uint32_t) &dummy, /* Vector # 805 GTM_MCS3_IRQ[0] gtm_icm.gtm_mcs3_irq[0] */
(uint32_t) &dummy, /* Vector # 806 GTM_MCS3_IRQ[1] gtm_icm.gtm_mcs3_irq[1] */
(uint32_t) &dummy, /* Vector # 807 GTM_MCS3_IRQ[2] gtm_icm.gtm_mcs3_irq[2] */
(uint32_t) &dummy, /* Vector # 808 GTM_MCS3_IRQ[3] gtm_icm.gtm_mcs3_irq[3] */
(uint32_t) &dummy, /* Vector # 809 GTM_MCS3_IRQ[4] gtm_icm.gtm_mcs3_irq[4] */
(uint32_t) &dummy, /* Vector # 810 GTM_MCS3_IRQ[5] gtm_icm.gtm_mcs3_irq[5] */
(uint32_t) &dummy, /* Vector # 811 GTM_MCS3_IRQ[6] gtm_icm.gtm_mcs3_irq[6] */
(uint32_t) &dummy, /* Vector # 812 GTM_MCS3_IRQ[7] gtm_icm.gtm_mcs3_irq[7] */
(uint32_t) &dummy, /* Vector # 813 GTM_TOM0_IRQ[0] gtm_icm.gtm_tom0_irq[0] */
(uint32_t) &dummy, /* Vector # 814 GTM_TOM0_IRQ[1] gtm_icm.gtm_tom0_irq[1] */
(uint32_t) &dummy, /* Vector # 815 GTM_TOM0_IRQ[2] gtm_icm.gtm_tom0_irq[2] */
(uint32_t) &dummy, /* Vector # 816 GTM_TOM0_IRQ[3] gtm_icm.gtm_tom0_irq[3] */
(uint32_t) &dummy, /* Vector # 817 GTM_TOM0_IRQ[4] gtm_icm.gtm_tom0_irq[4] */
(uint32_t) &dummy, /* Vector # 818 GTM_TOM0_IRQ[5] gtm_icm.gtm_tom0_irq[5] */
(uint32_t) &dummy, /* Vector # 819 GTM_TOM0_IRQ[6] gtm_icm.gtm_tom0_irq[6] */
(uint32_t) &dummy, /* Vector # 820 GTM_TOM0_IRQ[7] gtm_icm.gtm_tom0_irq[7] */
(uint32_t) &dummy, /* Vector # 821 GTM_TOM1_IRQ[0] gtm_icm.gtm_tom1_irq[0] */
(uint32_t) &dummy, /* Vector # 822 GTM_TOM1_IRQ[1] gtm_icm.gtm_tom1_irq[1] */
(uint32_t) &dummy, /* Vector # 823 GTM_TOM1_IRQ[2] gtm_icm.gtm_tom1_irq[2] */
(uint32_t) &dummy, /* Vector # 824 GTM_TOM1_IRQ[3] gtm_icm.gtm_tom1_irq[3] */
(uint32_t) &dummy, /* Vector # 825 GTM_TOM1_IRQ[4] gtm_icm.gtm_tom1_irq[4] */
(uint32_t) &dummy, /* Vector # 826 GTM_TOM1_IRQ[5] gtm_icm.gtm_tom1_irq[5] */
(uint32_t) &dummy, /* Vector # 827 GTM_TOM1_IRQ[6] gtm_icm.gtm_tom1_irq[6] */
(uint32_t) &dummy, /* Vector # 828 GTM_TOM1_IRQ[7] gtm_icm.gtm_tom1_irq[7] */
(uint32_t) &dummy, /* Vector # 829 GTM_TOM2_IRQ[0] gtm_icm.gtm_tom2_irq[0] */
(uint32_t) &dummy, /* Vector # 830 GTM_TOM2_IRQ[1] gtm_icm.gtm_tom2_irq[1] */
(uint32_t) &dummy, /* Vector # 831 GTM_TOM2_IRQ[2] gtm_icm.gtm_tom2_irq[2] */
(uint32_t) &dummy, /* Vector # 832 GTM_TOM2_IRQ[3] gtm_icm.gtm_tom2_irq[3] */
(uint32_t) &dummy, /* Vector # 833 GTM_TOM2_IRQ[4] gtm_icm.gtm_tom2_irq[4] */
(uint32_t) &dummy, /* Vector # 834 GTM_TOM2_IRQ[5] gtm_icm.gtm_tom2_irq[5] */
(uint32_t) &dummy, /* Vector # 835 GTM_TOM2_IRQ[6] gtm_icm.gtm_tom2_irq[6] */
(uint32_t) &dummy, /* Vector # 836 GTM_TOM2_IRQ[7] gtm_icm.gtm_tom2_irq[7] */
(uint32_t) &dummy, /* Vector # 837 GTM_ATOM0_IRQ[0] gtm_icm.gtm_atom0_irq[0] */
(uint32_t) &dummy, /* Vector # 838 GTM_ATOM0_IRQ[1] gtm_icm.gtm_atom0_irq[1] */
(uint32_t) &dummy, /* Vector # 839 GTM_ATOM0_IRQ[2] gtm_icm.gtm_atom0_irq[2] */
(uint32_t) &dummy, /* Vector # 840 GTM_ATOM0_IRQ[3] gtm_icm.gtm_atom0_irq[3] */
(uint32_t) &dummy, /* Vector # 841 GTM_ATOM1_IRQ[0] gtm_icm.gtm_atom1_irq[0] */
(uint32_t) &dummy, /* Vector # 842 GTM_ATOM1_IRQ[1] gtm_icm.gtm_atom1_irq[1] */
(uint32_t) &dummy, /* Vector # 843 GTM_ATOM1_IRQ[2] gtm_icm.gtm_atom1_irq[2] */
(uint32_t) &dummy, /* Vector # 844 GTM_ATOM1_IRQ[3] gtm_icm.gtm_atom1_irq[3] */
(uint32_t) &dummy, /* Vector # 845 GTM_ATOM2_IRQ[0] gtm_icm.gtm_atom2_irq[0] */
(uint32_t) &dummy, /* Vector # 846 GTM_ATOM2_IRQ[1] gtm_icm.gtm_atom2_irq[1] */
(uint32_t) &dummy, /* Vector # 847 GTM_ATOM2_IRQ[2] gtm_icm.gtm_atom2_irq[2] */
(uint32_t) &dummy, /* Vector # 848 GTM_ATOM2_IRQ[3] gtm_icm.gtm_atom2_irq[3] */
(uint32_t) &dummy, /* Vector # 849 GTM_ATOM3_IRQ[0] gtm_icm.gtm_atom3_irq[0] */
(uint32_t) &dummy, /* Vector # 850 GTM_ATOM3_IRQ[1] gtm_icm.gtm_atom3_irq[1] */
(uint32_t) &dummy, /* Vector # 851 GTM_ATOM3_IRQ[2] gtm_icm.gtm_atom3_irq[2] */
(uint32_t) &dummy, /* Vector # 852 GTM_ATOM3_IRQ[3] gtm_icm.gtm_atom3_irq[3] */
(uint32_t) &dummy, /* Vector # 853 GTM_ATOM4_IRQ[0] gtm_icm.gtm_atom4_irq[0] */
(uint32_t) &dummy, /* Vector # 854 GTM_ATOM4_IRQ[1] gtm_icm.gtm_atom4_irq[1] */
(uint32_t) &dummy, /* Vector # 855 GTM_ATOM4_IRQ[2] gtm_icm.gtm_atom4_irq[2] */
(uint32_t) &dummy, /* Vector # 856 GTM_ATOM4_IRQ[3] gtm_icm.gtm_atom4_irq[3] */
(uint32_t) &dummy, /* Vector # 857 GTM_SPE2_IRQ gtm_icm.gtm_spe2_irq */
(uint32_t) &dummy, /* Vector # 858 GTM_SPE3_IRQ gtm_icm.gtm_spe3_irq */
(uint32_t) &dummy, /* Vector # 859 GTM_PSM1_IRQ[0] gtm_icm.gtm_psm1_irq[0] */
(uint32_t) &dummy, /* Vector # 860 GTM_PSM1_IRQ[1] gtm_icm.gtm_psm1_irq[1] */
(uint32_t) &dummy, /* Vector # 861 GTM_PSM1_IRQ[2] gtm_icm.gtm_psm1_irq[2] */
(uint32_t) &dummy, /* Vector # 862 GTM_PSM1_IRQ[3] gtm_icm.gtm_psm1_irq[3] */
(uint32_t) &dummy, /* Vector # 863 GTM_PSM1_IRQ[4] gtm_icm.gtm_psm1_irq[4] */
(uint32_t) &dummy, /* Vector # 864 GTM_PSM1_IRQ[5] gtm_icm.gtm_psm1_irq[5] */
(uint32_t) &dummy, /* Vector # 865 GTM_PSM1_IRQ[6] gtm_icm.gtm_psm1_irq[6] */
(uint32_t) &dummy, /* Vector # 866 GTM_PSM1_IRQ[7] gtm_icm.gtm_psm1_irq[7] */
(uint32_t) &dummy, /* Vector # 867 GTM_TIM4_IRQ[0] gtm_icm.gtm_tim4_irq[0] */
(uint32_t) &dummy, /* Vector # 868 GTM_TIM4_IRQ[1] gtm_icm.gtm_tim4_irq[1] */
(uint32_t) &dummy, /* Vector # 869 GTM_TIM4_IRQ[2] gtm_icm.gtm_tim4_irq[2] */
(uint32_t) &dummy, /* Vector # 870 GTM_TIM4_IRQ[3] gtm_icm.gtm_tim4_irq[3] */
(uint32_t) &dummy, /* Vector # 871 GTM_TIM4_IRQ[4] gtm_icm.gtm_tim4_irq[4] */
(uint32_t) &dummy, /* Vector # 872 GTM_TIM4_IRQ[5] gtm_icm.gtm_tim4_irq[5] */
(uint32_t) &dummy, /* Vector # 873 GTM_TIM4_IRQ[6] gtm_icm.gtm_tim4_irq[6] */
(uint32_t) &dummy, /* Vector # 874 GTM_TIM4_IRQ[7] gtm_icm.gtm_tim4_irq[7] */
(uint32_t) &dummy, /* Vector # 875 GTM_TIM5_IRQ[0] gtm_icm.gtm_tim5_irq[0] */
(uint32_t) &dummy, /* Vector # 876 GTM_TIM5_IRQ[1] gtm_icm.gtm_tim5_irq[1] */
(uint32_t) &dummy, /* Vector # 877 GTM_TIM5_IRQ[2] gtm_icm.gtm_tim5_irq[2] */
(uint32_t) &dummy, /* Vector # 878 GTM_TIM5_IRQ[3] gtm_icm.gtm_tim5_irq[3] */
(uint32_t) &dummy, /* Vector # 879 GTM_TIM5_IRQ[4] gtm_icm.gtm_tim5_irq[4] */
(uint32_t) &dummy, /* Vector # 880 GTM_TIM5_IRQ[5] gtm_icm.gtm_tim5_irq[5] */
(uint32_t) &dummy, /* Vector # 881 GTM_TIM5_IRQ[6] gtm_icm.gtm_tim5_irq[6] */
(uint32_t) &dummy, /* Vector # 882 GTM_TIM5_IRQ[7] gtm_icm.gtm_tim5_irq[7] */
(uint32_t) &dummy, /* Vector # 883 GTM_MCS4_IRQ[0] gtm_icm.gtm_mcs4_irq[0] */
(uint32_t) &dummy, /* Vector # 884 GTM_MCS4_IRQ[1] gtm_icm.gtm_mcs4_irq[1] */
(uint32_t) &dummy, /* Vector # 885 GTM_MCS4_IRQ[2] gtm_icm.gtm_mcs4_irq[2] */
(uint32_t) &dummy, /* Vector # 886 GTM_MCS4_IRQ[3] gtm_icm.gtm_mcs4_irq[3] */
(uint32_t) &dummy, /* Vector # 887 GTM_MCS4_IRQ[4] gtm_icm.gtm_mcs4_irq[4] */
(uint32_t) &dummy, /* Vector # 888 GTM_MCS4_IRQ[5] gtm_icm.gtm_mcs4_irq[5] */
(uint32_t) &dummy, /* Vector # 889 GTM_MCS4_IRQ[6] gtm_icm.gtm_mcs4_irq[6] */
(uint32_t) &dummy, /* Vector # 890 GTM_MCS4_IRQ[7] gtm_icm.gtm_mcs4_irq[7] */
(uint32_t) &dummy, /* Vector # 891 GTM_MCS5_IRQ[0] gtm_icm.gtm_mcs5_irq[0] */
(uint32_t) &dummy, /* Vector # 892 GTM_MCS5_IRQ[1] gtm_icm.gtm_mcs5_irq[1] */
(uint32_t) &dummy, /* Vector # 893 GTM_MCS5_IRQ[2] gtm_icm.gtm_mcs5_irq[2] */
(uint32_t) &dummy, /* Vector # 894 GTM_MCS5_IRQ[3] gtm_icm.gtm_mcs5_irq[3] */
(uint32_t) &dummy, /* Vector # 895 GTM_MCS5_IRQ[4] gtm_icm.gtm_mcs5_irq[4] */
(uint32_t) &dummy, /* Vector # 896 GTM_MCS5_IRQ[5] gtm_icm.gtm_mcs5_irq[5] */
(uint32_t) &dummy, /* Vector # 897 GTM_MCS5_IRQ[6] gtm_icm.gtm_mcs5_irq[6] */
(uint32_t) &dummy, /* Vector # 898 GTM_MCS5_IRQ[7] gtm_icm.gtm_mcs5_irq[7] */
(uint32_t) &dummy, /* Vector # 899 GTM_TOM3_IRQ[0] gtm_icm.gtm_tom3_irq[0] */
(uint32_t) &dummy, /* Vector # 900 GTM_TOM3_IRQ[1] gtm_icm.gtm_tom3_irq[1] */

(uint32_t) &dummy, /* Vector # 901 GTM_TOM3_IRQ[2] gtm_icm.gtm_tom3_irq[2] */
(uint32_t) &dummy, /* Vector # 902 GTM_TOM3_IRQ[3] gtm_icm.gtm_tom3_irq[3] */
(uint32_t) &dummy, /* Vector # 903 GTM_TOM3_IRQ[4] gtm_icm.gtm_tom3_irq[4] */
(uint32_t) &dummy, /* Vector # 904 GTM_TOM3_IRQ[5] gtm_icm.gtm_tom3_irq[5] */
(uint32_t) &dummy, /* Vector # 905 GTM_TOM3_IRQ[6] gtm_icm.gtm_tom3_irq[6] */
(uint32_t) &dummy, /* Vector # 906 GTM_TOM3_IRQ[7] gtm_icm.gtm_tom3_irq[7] */
(uint32_t) &dummy, /* Vector # 907 GTM_TOM4_IRQ[0] gtm_icm.gtm_tom4_irq[0] */
(uint32_t) &dummy, /* Vector # 908 GTM_TOM4_IRQ[1] gtm_icm.gtm_tom4_irq[1] */
(uint32_t) &dummy, /* Vector # 909 GTM_TOM4_IRQ[2] gtm_icm.gtm_tom4_irq[2] */
(uint32_t) &dummy, /* Vector # 910 GTM_TOM4_IRQ[3] gtm_icm.gtm_tom4_irq[3] */
(uint32_t) &dummy, /* Vector # 911 GTM_TOM4_IRQ[4] gtm_icm.gtm_tom4_irq[4] */
(uint32_t) &dummy, /* Vector # 912 GTM_TOM4_IRQ[5] gtm_icm.gtm_tom4_irq[5] */
(uint32_t) &dummy, /* Vector # 913 GTM_TOM4_IRQ[6] gtm_icm.gtm_tom4_irq[6] */
(uint32_t) &dummy, /* Vector # 914 GTM_TOM4_IRQ[7] gtm_icm.gtm_tom4_irq[7] */
(uint32_t) &dummy, /* Vector # 915 GTM_ATOM5_IRQ[0] gtm_icm.gtm_atom5_irq[0] */
(uint32_t) &dummy, /* Vector # 916 GTM_ATOM5_IRQ[1] gtm_icm.gtm_atom5_irq[1] */
(uint32_t) &dummy, /* Vector # 917 GTM_ATOM5_IRQ[2] gtm_icm.gtm_atom5_irq[2] */
(uint32_t) &dummy, /* Vector # 918 GTM_ATOM5_IRQ[3] gtm_icm.gtm_atom5_irq[3] */
(uint32_t) &dummy, /* Vector # 919 GTM_ATOM6_IRQ[0] gtm_icm.gtm_atom6_irq[0] */
(uint32_t) &dummy, /* Vector # 920 GTM_ATOM6_IRQ[1] gtm_icm.gtm_atom6_irq[1] */
(uint32_t) &dummy, /* Vector # 921 GTM_ATOM6_IRQ[2] gtm_icm.gtm_atom6_irq[2] */
(uint32_t) &dummy, /* Vector # 922 GTM_ATOM6_IRQ[3] gtm_icm.gtm_atom6_irq[3] */
(uint32_t) &dummy, /* Vector # 923 GTM_ATOM7_IRQ[0] gtm_icm.gtm_atom7_irq[0] */
(uint32_t) &dummy, /* Vector # 924 GTM_ATOM7_IRQ[1] gtm_icm.gtm_atom7_irq[1] */
(uint32_t) &dummy, /* Vector # 925 GTM_ATOM7_IRQ[2] gtm_icm.gtm_atom7_irq[2] */
(uint32_t) &dummy, /* Vector # 926 GTM_ATOM7_IRQ[3] gtm_icm.gtm_atom7_irq[3] */
(uint32_t) &dummy, /* Vector # 927 GTM_ATOM8_IRQ[0] gtm_icm.gtm_atom8_irq[0] */
(uint32_t) &dummy, /* Vector # 928 GTM_ATOM8_IRQ[1] gtm_icm.gtm_atom8_irq[1] */
(uint32_t) &dummy, /* Vector # 929 GTM_ATOM8_IRQ[2] gtm_icm.gtm_atom8_irq[2] */
(uint32_t) &dummy, /* Vector # 930 GTM_ATOM8_IRQ[3] gtm_icm.gtm_atom8_irq[3] */
(uint32_t) &dummy, /* Vector # 931 GTM_ERR_IRQ gtm_err_irq */
(uint32_t) &dummy, /* Vector # 932 */
(uint32_t) &dummy, /* Vector # 933 */
(uint32_t) &dummy, /* Vector # 934 */
(uint32_t) &dummy, /* Vector # 935 */
(uint32_t) &dummy, /* Vector # 936 */
(uint32_t) &dummy, /* Vector # 937 */
(uint32_t) &dummy, /* Vector # 938 */
(uint32_t) &dummy, /* Vector # 939 */
(uint32_t) &dummy, /* Vector # 940 */
(uint32_t) &dummy, /* Vector # 941 */
(uint32_t) &dummy, /* Vector # 942 */
(uint32_t) &dummy, /* Vector # 943 */
(uint32_t) &dummy, /* Vector # 944 */
(uint32_t) &dummy, /* Vector # 945 */
(uint32_t) &dummy, /* Vector # 946 PS_SR_IRQ[0] PS_MBOX_SR_IRQ[0] */
                   /*              PS_ERR_SR_IRQ[0] */
(uint32_t) &dummy, /* Vector # 947 PS_SR_IRQ[1] PS_MBOX_SR_IRQ[1] */
                   /*              PS_ERR_SR_IRQ[1] */
(uint32_t) &dummy, /* Vector # 948 PS_SR_IRQ[2] PS_MBOX_SR_IRQ[2] */
                   /*              PS_ERR_SR_IRQ[2] */
(uint32_t) &dummy, /* Vector # 949 PS_SR_IRQ[3] PS_MBOX_SR_IRQ[3] */
                   /*              PS_ERR_SR_IRQ[3] */
(uint32_t) &dummy, /* Vector # 950 PS_SR_IRQ[4] PS_MBOX_SR_IRQ[4] */
                   /*              PS_ERR_SR_IRQ[4] */
(uint32_t) &dummy, /* Vector # 951 PS_SR_IRQ[5] PS_MBOX_SR_IRQ[5] */
                   /*              PS_ERR_SR_IRQ[5] */
(uint32_t) &dummy, /* Vector # 952 PS_SR_IRQ[6] PS_MBOX_SR_IRQ[6] */
                   /*              PS_ERR_SR_IRQ[6] */
(uint32_t) &dummy, /* Vector # 953 PS_SR_IRQ[7] PS_MBOX_SR_IRQ[7] */
                   /*              PS_ERR_SR_IRQ[7] */
(uint32_t) &dummy, /* Vector # 954 PSI5_E2SSR[1] PSI5_E2SSR[1] */
(uint32_t) &dummy, /* Vector # 955 PSI5_E2SSR[2] PSI5_E2SSR[2] */
(uint32_t) &dummy, /* Vector # 956 PSI5_E2SSR[3] PSI5_E2SSR[3] */
(uint32_t) &dummy, /* Vector # 957 PSI5_E2SSR[4] PSI5_E2SSR[4] */
(uint32_t) &dummy, /* Vector # 958 PSI5_E2SSR[5] PSI5_E2SSR[5] */
(uint32_t) &dummy, /* Vector # 959 PSI5_E2SSR[6] PSI5_E2SSR[6] */
(uint32_t) &dummy, /* Vector # 960 PSI5_E2SSR[7] PSI5_E2SSR[7] */
(uint32_t) &dummy, /* Vector # 961 PS_GLSR PS_GLSR */

};


void dummy (void) {   /* Dummy ISR vector to trap undefined ISRs */
    while (1) {};  /* Wait forever or for watchdog timeout */
}

