/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws.
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2018, 2024 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : r_smc_intprg.c
* Version          : 1.5.0
* Device(s)        : R7F702301BEBBA
* Description      : None
***********************************************************************************************************************/
/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/

/***********************************************************************************************************************
Direct Vector Method
***********************************************************************************************************************/
void snooze(void);
#pragma inline_asm snooze
void snooze(void)
{
    snooze
}

void unused_isr(void)
{
/* Start user code for unused isr. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/* Enter infinity loop, because interrupt not handled */
    while (1)
    {
        snooze();
    }
}

/* IPIR CH0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint0(enable=false, channel=0, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint0(void)
{
    unused_isr();
}

/* IPIR CH1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint1(enable=false, channel=1, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint1(void)
{
    unused_isr();
}

/* IPIR CH2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint2(enable=false, channel=2, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint2(void)
{
    unused_isr();
}

/* IPIR CH3 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint3(enable=false, channel=3, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint3(void)
{
    unused_isr();
}

/* BROADCAST NOTIFICATION 0 */
#if defined (__CCRH__)
#pragma interrupt eiint4(enable=false, channel=4, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint4(void)
{
    unused_isr();
}

/* BROADCAST NOTIFICATION 1 */
#if defined (__CCRH__)
#pragma interrupt eiint5(enable=false, channel=5, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint5(void)
{
    unused_isr();
}

/* BROADCAST NOTIFICATION 2 */
#if defined (__CCRH__)
#pragma interrupt eiint6(enable=false, channel=6, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint6(void)
{
    unused_isr();
}

/* BROADCAST NOTIFICATION 3 */
#if defined (__CCRH__)
#pragma interrupt eiint7(enable=false, channel=7, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint7(void)
{
    unused_isr();
}

/* ECM MASKABLE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint8(enable=false, channel=8, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint8(void)
{
    unused_isr();
}

/* DCLS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint9(enable=false, channel=9, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint9(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint10(enable=false, channel=10, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint10(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint11(enable=false, channel=11, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint11(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 4 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint12(enable=false, channel=12, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint12(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 6 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint13(enable=false, channel=13, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint13(void)
{
    unused_isr();
}

/* SOFTWARE INTERRUPT 0 */
#if defined (__CCRH__)
#pragma interrupt eiint14(enable=false, channel=14, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint14(void)
{
    unused_isr();
}

/* SOFTWARE INTERRUPT 1 */
#if defined (__CCRH__)
#pragma interrupt eiint15(enable=false, channel=15, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint15(void)
{
    unused_isr();
}

/* SOFTWARE INTERRUPT 2 */
#if defined (__CCRH__)
#pragma interrupt eiint16(enable=false, channel=16, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint16(void)
{
    unused_isr();
}

/* SOFTWARE INTERRUPT 3 */
#if defined (__CCRH__)
#pragma interrupt eiint17(enable=false, channel=17, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint17(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint18(enable=false, channel=18, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint18(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint19(enable=false, channel=19, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint19(void)
{
    unused_isr();
}

/* SINGLE INTERRUPT REQUEST FROM ICUP TO CPU */
#if defined (__CCRH__)
#pragma interrupt eiint20(enable=false, channel=20, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint20(void)
{
    unused_isr();
}

/* INTERRUPT REQUEST FROM ICUP TO CPU */
#if defined (__CCRH__)
#pragma interrupt eiint21(enable=false, channel=21, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint21(void)
{
    unused_isr();
}

/* WDTB0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint22_0(enable=false, channel=22, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint22_0(void)
{
    unused_isr();
}

/* WDTB1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint22_1(enable=false, channel=22, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint22_1(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 8 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint23(enable=false, channel=23, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint23(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 10 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint24(enable=false, channel=24, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint24(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 12 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint25(enable=false, channel=25, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint25(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 14 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint26(enable=false, channel=26, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint26(void)
{
    unused_isr();
}

/* TAPA0 PEAK INTERRUPT 0 */
#if defined (__CCRH__)
#pragma interrupt eiint27(enable=false, channel=27, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint27(void)
{
    unused_isr();
}

/* TAPA0 VALLEY INTERRUPT 0 */
#if defined (__CCRH__)
#pragma interrupt eiint28(enable=false, channel=28, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint28(void)
{
    unused_isr();
}

/* SDMAC0 ADDRESS ERROR OR SDMAC1 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint29(enable=false, channel=29, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint29(void)
{
    unused_isr();
}

/* DTS TRANSFER ERROR */
#if defined (__CCRH__)
#pragma interrupt eiint30(enable=false, channel=30, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint30(void)
{
    unused_isr();
}

/* TPTM0 TIMING PROTECTION VIOLATION */
#if defined (__CCRH__)
#pragma interrupt eiint31_0(enable=false, channel=31, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint31_0(void)
{
    unused_isr();
}

/* TPTM1 TIMING PROTECTION VIOLATION */
#if defined (__CCRH__)
#pragma interrupt eiint31_1(enable=false, channel=31, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint31_1(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint32(enable=false, channel=32, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint32(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint33(enable=false, channel=33, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint33(void)
{
    unused_isr();
}

/* FPSYS0 FLASH SEQUENCER PROCESSING END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint34(enable=false, channel=34, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint34(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint35(enable=false, channel=35, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint35(void)
{
    unused_isr();
}

/* FPSYS1 FLASH SEQUENCER PROCESSING END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint36(enable=false, channel=36, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint36(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint37(enable=false, channel=37, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint37(void)
{
    unused_isr();
}

/* FPSYS2 FLASH SEQUENCER PROCESSING END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint38(enable=false, channel=38, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint38(void)
{
    unused_isr();
}

/* DTS CH31_0 TRANSFER END */
#if defined (__CCRH__)
#pragma interrupt eiint39(enable=false, channel=39, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint39(void)
{
    unused_isr();
}

/* DTS CH63_32 TRANSFER END */
#if defined (__CCRH__)
#pragma interrupt eiint40(enable=false, channel=40, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint40(void)
{
    unused_isr();
}

/* DTS CH95_64 TRANSFER END */
#if defined (__CCRH__)
#pragma interrupt eiint41(enable=false, channel=41, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint41(void)
{
    unused_isr();
}

/* DTS CH127_96 TRANSFER END */
#if defined (__CCRH__)
#pragma interrupt eiint42(enable=false, channel=42, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint42(void)
{
    unused_isr();
}

/* DTS CH31_0 TRANSFER COUNT MATCH */
#if defined (__CCRH__)
#pragma interrupt eiint43(enable=false, channel=43, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint43(void)
{
    unused_isr();
}

/* DTS CH63_32 TRANSFER COUNT MATCH */
#if defined (__CCRH__)
#pragma interrupt eiint44(enable=false, channel=44, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint44(void)
{
    unused_isr();
}

/* DTS CH95_64 TRANSFER COUNT MATCH */
#if defined (__CCRH__)
#pragma interrupt eiint45(enable=false, channel=45, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint45(void)
{
    unused_isr();
}

/* DTS CH127_96 TRANSFER COUNT MATCH */
#if defined (__CCRH__)
#pragma interrupt eiint46(enable=false, channel=46, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint46(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 0 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 0 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 0 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint47(enable=false, channel=47, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint47(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 1 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 1 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 1 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint48(enable=false, channel=48, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint48(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 2 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 2 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 2 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint49(enable=false, channel=49, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint49(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 3 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 3 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 3 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint50(enable=false, channel=50, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint50(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 4 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 4 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 4 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint51(enable=false, channel=51, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint51(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 5 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 5 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 5 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint52(enable=false, channel=52, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint52(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 6 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 6 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 6 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint53(enable=false, channel=53, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint53(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 7 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 7 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 7 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint54(enable=false, channel=54, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint54(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 8 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 8 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 8 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint55(enable=false, channel=55, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint55(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 9 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 9 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 9 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint56(enable=false, channel=56, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint56(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 10 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 10 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 10 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint57(enable=false, channel=57, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint57(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 11 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 11 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 11 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint58(enable=false, channel=58, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint58(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 12 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 12 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 12 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint59(enable=false, channel=59, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint59(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 13 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 13 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 13 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint60(enable=false, channel=60, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint60(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 14 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 14 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 14 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint61(enable=false, channel=61, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint61(void)
{
    unused_isr();
}

/* SDMAC0 CHANNEL 15 TRANSFER END INTERRUPT OR SDMAC0 CHANNEL 15 DESCRIPTOR STEP END INTERRUPT OR SDMAC0 CHANNEL 15 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint62(enable=false, channel=62, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint62(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 0 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 0 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 0 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint63(enable=false, channel=63, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint63(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 1 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 1 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 1 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint64(enable=false, channel=64, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint64(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 2 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 2 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 2 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint65(enable=false, channel=65, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint65(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 3 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 3 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 3 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint66(enable=false, channel=66, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint66(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 4 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 4 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 4 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint67(enable=false, channel=67, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint67(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 5 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 5 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 5 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint68(enable=false, channel=68, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint68(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 6 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 6 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 6 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint69(enable=false, channel=69, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint69(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 7 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 7 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 7 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint70(enable=false, channel=70, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint70(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 8 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 8 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 8 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint71(enable=false, channel=71, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint71(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 9 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 9 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 9 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint72(enable=false, channel=72, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint72(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 10 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 10 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 10 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint73(enable=false, channel=73, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint73(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 11 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 11 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 11 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint74(enable=false, channel=74, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint74(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 12 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 12 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 12 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint75(enable=false, channel=75, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint75(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 13 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 13 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 13 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint76(enable=false, channel=76, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint76(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 14 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 14 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 14 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint77(enable=false, channel=77, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint77(void)
{
    unused_isr();
}

/* SDMAC1 CHANNEL 15 TRANSFER END INTERRUPT OR SDMAC1 CHANNEL 15 DESCRIPTOR STEP END INTERRUPT OR SDMAC1 CHANNEL 15 ADDRESS ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint78(enable=false, channel=78, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint78(void)
{
    unused_isr();
}

/* TIM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint79(enable=false, channel=79, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint79(void)
{
    unused_isr();
}

/* TIM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint80(enable=false, channel=80, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint80(void)
{
    unused_isr();
}

/* TIM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint81(enable=false, channel=81, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint81(void)
{
    unused_isr();
}

/* TIM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint82(enable=false, channel=82, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint82(void)
{
    unused_isr();
}

/* TIM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint83(enable=false, channel=83, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint83(void)
{
    unused_isr();
}

/* TIM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint84(enable=false, channel=84, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint84(void)
{
    unused_isr();
}

/* TIM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint85(enable=false, channel=85, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint85(void)
{
    unused_isr();
}

/* TIM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint86(enable=false, channel=86, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint86(void)
{
    unused_isr();
}

/* TIM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint87(enable=false, channel=87, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint87(void)
{
    unused_isr();
}

/* TIM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint88(enable=false, channel=88, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint88(void)
{
    unused_isr();
}

/* TIM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint89(enable=false, channel=89, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint89(void)
{
    unused_isr();
}

/* TIM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint90(enable=false, channel=90, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint90(void)
{
    unused_isr();
}

/* TIM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint91(enable=false, channel=91, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint91(void)
{
    unused_isr();
}

/* TIM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint92(enable=false, channel=92, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint92(void)
{
    unused_isr();
}

/* TIM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint93(enable=false, channel=93, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint93(void)
{
    unused_isr();
}

/* TIM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint94(enable=false, channel=94, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint94(void)
{
    unused_isr();
}

/* TIM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint95(enable=false, channel=95, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint95(void)
{
    unused_isr();
}

/* TIM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint96(enable=false, channel=96, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint96(void)
{
    unused_isr();
}

/* TIM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint97(enable=false, channel=97, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint97(void)
{
    unused_isr();
}

/* TIM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint98(enable=false, channel=98, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint98(void)
{
    unused_isr();
}

/* TIM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint99(enable=false, channel=99, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint99(void)
{
    unused_isr();
}

/* TIM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint100(enable=false, channel=100, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint100(void)
{
    unused_isr();
}

/* TIM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint101(enable=false, channel=101, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint101(void)
{
    unused_isr();
}

/* TIM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint102(enable=false, channel=102, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint102(void)
{
    unused_isr();
}

/* TIM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint103(enable=false, channel=103, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint103(void)
{
    unused_isr();
}

/* TIM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint104(enable=false, channel=104, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint104(void)
{
    unused_isr();
}

/* TIM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint105(enable=false, channel=105, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint105(void)
{
    unused_isr();
}

/* TIM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint106(enable=false, channel=106, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint106(void)
{
    unused_isr();
}

/* TIM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint107(enable=false, channel=107, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint107(void)
{
    unused_isr();
}

/* TIM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint108(enable=false, channel=108, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint108(void)
{
    unused_isr();
}

/* TIM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint109(enable=false, channel=109, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint109(void)
{
    unused_isr();
}

/* TIM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint110(enable=false, channel=110, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint110(void)
{
    unused_isr();
}

/* MCS0 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint111(enable=false, channel=111, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint111(void)
{
    unused_isr();
}

/* MCS0 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint112(enable=false, channel=112, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint112(void)
{
    unused_isr();
}

/* MCS0 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint113(enable=false, channel=113, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint113(void)
{
    unused_isr();
}

/* MCS0 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint114(enable=false, channel=114, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint114(void)
{
    unused_isr();
}

/* MCS0 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint115(enable=false, channel=115, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint115(void)
{
    unused_isr();
}

/* MCS0 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint116(enable=false, channel=116, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint116(void)
{
    unused_isr();
}

/* MCS0 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint117(enable=false, channel=117, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint117(void)
{
    unused_isr();
}

/* MCS0 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint118(enable=false, channel=118, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint118(void)
{
    unused_isr();
}

/* MCS1 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint119(enable=false, channel=119, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint119(void)
{
    unused_isr();
}

/* MCS1 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint120(enable=false, channel=120, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint120(void)
{
    unused_isr();
}

/* MCS1 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint121(enable=false, channel=121, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint121(void)
{
    unused_isr();
}

/* MCS1 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint122(enable=false, channel=122, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint122(void)
{
    unused_isr();
}

/* MCS1 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint123(enable=false, channel=123, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint123(void)
{
    unused_isr();
}

/* MCS1 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint124(enable=false, channel=124, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint124(void)
{
    unused_isr();
}

/* MCS1 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint125(enable=false, channel=125, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint125(void)
{
    unused_isr();
}

/* MCS1 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint126(enable=false, channel=126, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint126(void)
{
    unused_isr();
}

/* MCS2 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint127(enable=false, channel=127, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint127(void)
{
    unused_isr();
}

/* MCS2 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint128(enable=false, channel=128, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint128(void)
{
    unused_isr();
}

/* MCS2 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint129(enable=false, channel=129, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint129(void)
{
    unused_isr();
}

/* MCS2 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint130(enable=false, channel=130, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint130(void)
{
    unused_isr();
}

/* MCS2 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint131(enable=false, channel=131, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint131(void)
{
    unused_isr();
}

/* MCS2 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint132(enable=false, channel=132, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint132(void)
{
    unused_isr();
}

/* MCS2 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint133(enable=false, channel=133, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint133(void)
{
    unused_isr();
}

/* MCS2 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint134(enable=false, channel=134, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint134(void)
{
    unused_isr();
}

/* MCS3 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint135(enable=false, channel=135, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint135(void)
{
    unused_isr();
}

/* MCS3 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint136(enable=false, channel=136, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint136(void)
{
    unused_isr();
}

/* MCS3 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint137(enable=false, channel=137, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint137(void)
{
    unused_isr();
}

/* MCS3 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint138(enable=false, channel=138, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint138(void)
{
    unused_isr();
}

/* MCS3 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint139(enable=false, channel=139, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint139(void)
{
    unused_isr();
}

/* MCS3 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint140(enable=false, channel=140, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint140(void)
{
    unused_isr();
}

/* MCS3 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint141(enable=false, channel=141, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint141(void)
{
    unused_isr();
}

/* MCS3 INTERRUPT FOR CHANNEL */
#if defined (__CCRH__)
#pragma interrupt eiint142(enable=false, channel=142, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint142(void)
{
    unused_isr();
}

/* ATOM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint143(enable=false, channel=143, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint143(void)
{
    unused_isr();
}

/* ATOM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint144(enable=false, channel=144, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint144(void)
{
    unused_isr();
}

/* ATOM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint145(enable=false, channel=145, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint145(void)
{
    unused_isr();
}

/* ATOM0 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint146(enable=false, channel=146, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint146(void)
{
    unused_isr();
}

/* ATOM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint147(enable=false, channel=147, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint147(void)
{
    unused_isr();
}

/* ATOM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint148(enable=false, channel=148, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint148(void)
{
    unused_isr();
}

/* ATOM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint149(enable=false, channel=149, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint149(void)
{
    unused_isr();
}

/* ATOM1 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint150(enable=false, channel=150, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint150(void)
{
    unused_isr();
}

/* ATOM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint151(enable=false, channel=151, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint151(void)
{
    unused_isr();
}

/* ATOM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint152(enable=false, channel=152, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint152(void)
{
    unused_isr();
}

/* ATOM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint153(enable=false, channel=153, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint153(void)
{
    unused_isr();
}

/* ATOM2 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint154(enable=false, channel=154, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint154(void)
{
    unused_isr();
}

/* ATOM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint155(enable=false, channel=155, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint155(void)
{
    unused_isr();
}

/* ATOM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint156(enable=false, channel=156, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint156(void)
{
    unused_isr();
}

/* ATOM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint157(enable=false, channel=157, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint157(void)
{
    unused_isr();
}

/* ATOM3 SHARED INTERRUPTS */
#if defined (__CCRH__)
#pragma interrupt eiint158(enable=false, channel=158, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint158(void)
{
    unused_isr();
}

/* AEI SHARED INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint159(enable=false, channel=159, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint159(void)
{
    unused_isr();
}

/* ARU_NEW_DATA0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint160(enable=false, channel=160, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint160(void)
{
    unused_isr();
}

/* ARU_NEW_DATA1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint161(enable=false, channel=161, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint161(void)
{
    unused_isr();
}

/* ARU_ACC_ACK INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint162(enable=false, channel=162, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint162(void)
{
    unused_isr();
}

/* CMP SHARED INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint163(enable=false, channel=163, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint163(void)
{
    unused_isr();
}

/* GTM ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint164(enable=false, channel=164, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint164(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 0 OR TSG30 PERIOD INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint165(enable=false, channel=165, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint165(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 1 */
#if defined (__CCRH__)
#pragma interrupt eiint166(enable=false, channel=166, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint166(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 2 */
#if defined (__CCRH__)
#pragma interrupt eiint167(enable=false, channel=167, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint167(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 3 */
#if defined (__CCRH__)
#pragma interrupt eiint168(enable=false, channel=168, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint168(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 4 */
#if defined (__CCRH__)
#pragma interrupt eiint169(enable=false, channel=169, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint169(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 5 */
#if defined (__CCRH__)
#pragma interrupt eiint170(enable=false, channel=170, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint170(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 6 */
#if defined (__CCRH__)
#pragma interrupt eiint171(enable=false, channel=171, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint171(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 7 */
#if defined (__CCRH__)
#pragma interrupt eiint172(enable=false, channel=172, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint172(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 8 */
#if defined (__CCRH__)
#pragma interrupt eiint173(enable=false, channel=173, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint173(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 9 */
#if defined (__CCRH__)
#pragma interrupt eiint174(enable=false, channel=174, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint174(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 10 */
#if defined (__CCRH__)
#pragma interrupt eiint175(enable=false, channel=175, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint175(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 11 */
#if defined (__CCRH__)
#pragma interrupt eiint176(enable=false, channel=176, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint176(void)
{
    unused_isr();
}

/* TSG30 COMPARE MATCH INTERRUPT 12 */
#if defined (__CCRH__)
#pragma interrupt eiint177(enable=false, channel=177, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint177(void)
{
    unused_isr();
}

/* TSG30 PEAK INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint178(enable=false, channel=178, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint178(void)
{
    unused_isr();
}

/* TSG30 VALLEY INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint179(enable=false, channel=179, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint179(void)
{
    unused_isr();
}

/* TSG30 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint180(enable=false, channel=180, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint180(void)
{
    unused_isr();
}

/* TSG30 WARNING INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint181(enable=false, channel=181, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint181(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 0  OR TSG31 PERIOD INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint182(enable=false, channel=182, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint182(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 1 */
#if defined (__CCRH__)
#pragma interrupt eiint183(enable=false, channel=183, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint183(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 2 */
#if defined (__CCRH__)
#pragma interrupt eiint184(enable=false, channel=184, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint184(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 3 */
#if defined (__CCRH__)
#pragma interrupt eiint185(enable=false, channel=185, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint185(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 4 */
#if defined (__CCRH__)
#pragma interrupt eiint186(enable=false, channel=186, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint186(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 5 */
#if defined (__CCRH__)
#pragma interrupt eiint187(enable=false, channel=187, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint187(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 6 */
#if defined (__CCRH__)
#pragma interrupt eiint188(enable=false, channel=188, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint188(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 7 */
#if defined (__CCRH__)
#pragma interrupt eiint189(enable=false, channel=189, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint189(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 8 */
#if defined (__CCRH__)
#pragma interrupt eiint190(enable=false, channel=190, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint190(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 9 */
#if defined (__CCRH__)
#pragma interrupt eiint191(enable=false, channel=191, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint191(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 10 */
#if defined (__CCRH__)
#pragma interrupt eiint192(enable=false, channel=192, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint192(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 11 */
#if defined (__CCRH__)
#pragma interrupt eiint193(enable=false, channel=193, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint193(void)
{
    unused_isr();
}

/* TSG31 COMPARE MATCH INTERRUPT 12 */
#if defined (__CCRH__)
#pragma interrupt eiint194(enable=false, channel=194, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint194(void)
{
    unused_isr();
}

/* TSG31 PEAK INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint195(enable=false, channel=195, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint195(void)
{
    unused_isr();
}

/* TSG31 VALLEY INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint196(enable=false, channel=196, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint196(void)
{
    unused_isr();
}

/* TSG31 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint197(enable=false, channel=197, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint197(void)
{
    unused_isr();
}

/* TSG31 WARNING INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint198(enable=false, channel=198, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint198(void)
{
    unused_isr();
}

/* OSTM0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint199(enable=false, channel=199, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint199(void)
{
    unused_isr();
}

/* OSTM1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint200(enable=false, channel=200, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint200(void)
{
    unused_isr();
}

/* OSTM2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint201(enable=false, channel=201, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint201(void)
{
    unused_isr();
}

/* OSTM3 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint202(enable=false, channel=202, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint202(void)
{
    unused_isr();
}

/* OSTM4 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint203(enable=false, channel=203, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint203(void)
{
    unused_isr();
}

/* OSTM5 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint204(enable=false, channel=204, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint204(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint205(enable=false, channel=205, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint205(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint206(enable=false, channel=206, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint206(void)
{
    unused_isr();
}

/* OSTM8 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint207(enable=false, channel=207, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint207(void)
{
    unused_isr();
}

/* OSTM9 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint208(enable=false, channel=208, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint208(void)
{
    unused_isr();
}

/* TPTM UP TIMER INTERRUPT FOR PE0 WITH COMPARISON VALUE 0 */
#if defined (__CCRH__)
#pragma interrupt eiint209(enable=false, channel=209, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint209(void)
{
    unused_isr();
}

/* TPTM UP TIMER INTERRUPT FOR PE0 WITH COMPARISON VALUE 1 */
#if defined (__CCRH__)
#pragma interrupt eiint210(enable=false, channel=210, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint210(void)
{
    unused_isr();
}

/* TPTM UP TIMER INTERRUPT FOR PE0 WITH COMPARISON VALUE 2 */
#if defined (__CCRH__)
#pragma interrupt eiint211(enable=false, channel=211, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint211(void)
{
    unused_isr();
}

/* TPTM UP TIMER INTERRUPT FOR PE0 WITH COMPARISON VALUE 3 */
#if defined (__CCRH__)
#pragma interrupt eiint212(enable=false, channel=212, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint212(void)
{
    unused_isr();
}

/* TPTM UP TIMER INTERRUPT FOR PE1 WITH COMPARISON VALUE 0 */
#if defined (__CCRH__)
#pragma interrupt eiint213(enable=false, channel=213, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint213(void)
{
    unused_isr();
}

/* TPTM UP TIMER INTERRUPT FOR PE1 WITH COMPARISON VALUE 1 */
#if defined (__CCRH__)
#pragma interrupt eiint214(enable=false, channel=214, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint214(void)
{
    unused_isr();
}

/* TPTM UP TIMER INTERRUPT FOR PE1 WITH COMPARISON VALUE 2 */
#if defined (__CCRH__)
#pragma interrupt eiint215(enable=false, channel=215, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint215(void)
{
    unused_isr();
}

/* TPTM UP TIMER INTERRUPT FOR PE1 WITH COMPARISON VALUE 3 */
#if defined (__CCRH__)
#pragma interrupt eiint216(enable=false, channel=216, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint216(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint217(enable=false, channel=217, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint217(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint218(enable=false, channel=218, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint218(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint219(enable=false, channel=219, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint219(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint220(enable=false, channel=220, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint220(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint221(enable=false, channel=221, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint221(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint222(enable=false, channel=222, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint222(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint223(enable=false, channel=223, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint223(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint224(enable=false, channel=224, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint224(void)
{
    unused_isr();
}

/* ADCJ0 SECONDARY VOLTAGE MONITOR ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint225(enable=false, channel=225, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint225(void)
{
    unused_isr();
}

/* ADCJ0 A/D ERROR INTERRUPT UPPER/ LOWER LIMIT ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint226(enable=false, channel=226, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint226(void)
{
    unused_isr();
}

/* ADCJ0 SCAN GROUP 0  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint227(enable=false, channel=227, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint227(void)
{
    unused_isr();
}

/* ADCJ0 SCAN GROUP 1  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint228(enable=false, channel=228, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint228(void)
{
    unused_isr();
}

/* ADCJ0 SCAN GROUP 2  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint229(enable=false, channel=229, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint229(void)
{
    unused_isr();
}

/* ADCJ0 SCAN GROUP 3  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint230(enable=false, channel=230, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint230(void)
{
    unused_isr();
}

/* ADCJ0 SCAN GROUP 4  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint231(enable=false, channel=231, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint231(void)
{
    unused_isr();
}

/* ADCJ1 A/D ERROR INTERRUPT UPPER/ LOWER LIMIT ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint232(enable=false, channel=232, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint232(void)
{
    unused_isr();
}

/* ADCJ1 SCAN GROUP 0  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint233(enable=false, channel=233, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint233(void)
{
    unused_isr();
}

/* ADCJ1 SCAN GROUP 1  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint234(enable=false, channel=234, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint234(void)
{
    unused_isr();
}

/* ADCJ1 SCAN GROUP 2  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint235(enable=false, channel=235, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint235(void)
{
    unused_isr();
}

/* ADCJ1 SCAN GROUP 3  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint236(enable=false, channel=236, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint236(void)
{
    unused_isr();
}

/* ADCJ1 SCAN GROUP 4  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint237(enable=false, channel=237, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint237(void)
{
    unused_isr();
}

/* ADCJ2 A/D ERROR INTERRUPT UPPER/ LOWER LIMIT ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint238(enable=false, channel=238, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint238(void)
{
    unused_isr();
}

/* ADCJ2 SCAN GROUP 0  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint239(enable=false, channel=239, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint239(void)
{
    unused_isr();
}

/* ADCJ2 SCAN GROUP 1  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint240(enable=false, channel=240, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint240(void)
{
    unused_isr();
}

/* ADCJ2 SCAN GROUP 2  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint241(enable=false, channel=241, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint241(void)
{
    unused_isr();
}

/* ADCJ2 SCAN GROUP 3  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint242(enable=false, channel=242, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint242(void)
{
    unused_isr();
}

/* ADCJ2 SCAN GROUP 4  END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint243(enable=false, channel=243, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint243(void)
{
    unused_isr();
}

/* MSPI0 TRANSMIT STATUS INTERRUPT FOR CHANNEL 0 */
#if defined (__CCRH__)
#pragma interrupt eiint244(enable=false, channel=244, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint244(void)
{
    unused_isr();
}

/* MSPI0 RECEIVE STATUS INTERRUPT FOR CHANNEL 0 */
#if defined (__CCRH__)
#pragma interrupt eiint245(enable=false, channel=245, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint245(void)
{
    unused_isr();
}

/* MSPI0 TRANSMIT STATUS INTERRUPT FOR CHANNEL 1 */
#if defined (__CCRH__)
#pragma interrupt eiint246(enable=false, channel=246, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint246(void)
{
    unused_isr();
}

/* MSPI0 RECEIVE STATUS INTERRUPT FOR CHANNEL 1 */
#if defined (__CCRH__)
#pragma interrupt eiint247(enable=false, channel=247, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint247(void)
{
    unused_isr();
}

/* MSPI0 TRANSMIT STATUS INTERRUPT FOR CHANNEL 2 */
#if defined (__CCRH__)
#pragma interrupt eiint248(enable=false, channel=248, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint248(void)
{
    unused_isr();
}

/* MSPI0 RECEIVE STATUS INTERRUPT FOR CHANNEL 2 */
#if defined (__CCRH__)
#pragma interrupt eiint249(enable=false, channel=249, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint249(void)
{
    unused_isr();
}

/* MSPI0 CHANNEL SELECTABLE TRANSMIT STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint250(enable=false, channel=250, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint250(void)
{
    unused_isr();
}

/* MSPI0 CHANNEL SELECTABLE RECEIVE STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint251(enable=false, channel=251, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint251(void)
{
    unused_isr();
}

/* MSPI0 CHANNEL SELECTABLE FRAME COUNT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint252(enable=false, channel=252, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint252(void)
{
    unused_isr();
}

/* MSPI0 CHANNEL SELECTABLE ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint253(enable=false, channel=253, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint253(void)
{
    unused_isr();
}

/* MSPI1 TRANSMIT STATUS INTERRUPT FOR CHANNEL 0 */
#if defined (__CCRH__)
#pragma interrupt eiint254(enable=false, channel=254, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint254(void)
{
    unused_isr();
}

/* MSPI1 RECEIVE STATUS INTERRUPT FOR CHANNEL 0 */
#if defined (__CCRH__)
#pragma interrupt eiint255(enable=false, channel=255, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint255(void)
{
    unused_isr();
}

/* MSPI1 TRANSMIT STATUS INTERRUPT FOR CHANNEL 1 */
#if defined (__CCRH__)
#pragma interrupt eiint256(enable=false, channel=256, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint256(void)
{
    unused_isr();
}

/* MSPI1 RECEIVE STATUS INTERRUPT FOR CHANNEL 1 */
#if defined (__CCRH__)
#pragma interrupt eiint257(enable=false, channel=257, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint257(void)
{
    unused_isr();
}

/* MSPI1 TRANSMIT STATUS INTERRUPT FOR CHANNEL 2 */
#if defined (__CCRH__)
#pragma interrupt eiint258(enable=false, channel=258, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint258(void)
{
    unused_isr();
}

/* MSPI1 RECEIVE STATUS INTERRUPT FOR CHANNEL 2 */
#if defined (__CCRH__)
#pragma interrupt eiint259(enable=false, channel=259, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint259(void)
{
    unused_isr();
}

/* MSPI1 CHANNEL SELECTABLE TRANSMIT STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint260(enable=false, channel=260, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint260(void)
{
    unused_isr();
}

/* MSPI1 CHANNEL SELECTABLE RECEIVE STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint261(enable=false, channel=261, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint261(void)
{
    unused_isr();
}

/* MSPI1 CHANNEL SELECTABLE FRAME COUNT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint262(enable=false, channel=262, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint262(void)
{
    unused_isr();
}

/* MSPI1 CHANNEL SELECTABLE ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint263(enable=false, channel=263, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint263(void)
{
    unused_isr();
}

/* MSPI2 CHANNEL SELECTABLE TRANSMIT STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint264(enable=false, channel=264, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint264(void)
{
    unused_isr();
}

/* MSPI2 CHANNEL SELECTABLE RECEIVE STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint265(enable=false, channel=265, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint265(void)
{
    unused_isr();
}

/* MSPI2 CHANNEL SELECTABLE FRAME COUNT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint266(enable=false, channel=266, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint266(void)
{
    unused_isr();
}

/* MSPI2 CHANNEL SELECTABLE ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint267(enable=false, channel=267, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint267(void)
{
    unused_isr();
}

/* MSPI3 CHANNEL SELECTABLE TRANSMIT STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint268(enable=false, channel=268, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint268(void)
{
    unused_isr();
}

/* MSPI3 CHANNEL SELECTABLE RECEIVE STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint269(enable=false, channel=269, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint269(void)
{
    unused_isr();
}

/* MSPI3 CHANNEL SELECTABLE FRAME COUNT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint270(enable=false, channel=270, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint270(void)
{
    unused_isr();
}

/* MSPI3 CHANNEL SELECTABLE ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint271(enable=false, channel=271, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint271(void)
{
    unused_isr();
}

/* MSPI4 CHANNEL SELECTABLE TRANSMIT STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint272(enable=false, channel=272, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint272(void)
{
    unused_isr();
}

/* MSPI4 CHANNEL SELECTABLE RECEIVE STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint273(enable=false, channel=273, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint273(void)
{
    unused_isr();
}

/* MSPI4 CHANNEL SELECTABLE FRAME COUNT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint274(enable=false, channel=274, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint274(void)
{
    unused_isr();
}

/* MSPI4 CHANNEL SELECTABLE ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint275(enable=false, channel=275, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint275(void)
{
    unused_isr();
}

/* MSPI5 CHANNEL SELECTABLE TRANSMIT STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint276(enable=false, channel=276, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint276(void)
{
    unused_isr();
}

/* MSPI5 CHANNEL SELECTABLE RECEIVE STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint277(enable=false, channel=277, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint277(void)
{
    unused_isr();
}

/* MSPI5 CHANNEL SELECTABLE FRAME COUNT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint278(enable=false, channel=278, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint278(void)
{
    unused_isr();
}

/* MSPI5 CHANNEL SELECTABLE ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint279(enable=false, channel=279, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint279(void)
{
    unused_isr();
}

/* MSPI6 CHANNEL SELECTABLE TRANSMIT STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint280(enable=false, channel=280, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint280(void)
{
    unused_isr();
}

/* MSPI6 CHANNEL SELECTABLE RECEIVE STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint281(enable=false, channel=281, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint281(void)
{
    unused_isr();
}

/* MSPI6 CHANNEL SELECTABLE FRAME COUNT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint282(enable=false, channel=282, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint282(void)
{
    unused_isr();
}

/* MSPI6 CHANNEL SELECTABLE ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint283(enable=false, channel=283, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint283(void)
{
    unused_isr();
}

/* MSPI7 CHANNEL SELECTABLE TRANSMIT STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint284(enable=false, channel=284, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint284(void)
{
    unused_isr();
}

/* MSPI7 CHANNEL SELECTABLE RECEIVE STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint285(enable=false, channel=285, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint285(void)
{
    unused_isr();
}

/* MSPI7 CHANNEL SELECTABLE FRAME COUNT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint286(enable=false, channel=286, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint286(void)
{
    unused_isr();
}

/* MSPI7 CHANNEL SELECTABLE ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint287(enable=false, channel=287, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint287(void)
{
    unused_isr();
}

/* MSPI8 CHANNEL SELECTABLE TRANSMIT STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint288(enable=false, channel=288, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint288(void)
{
    unused_isr();
}

/* MSPI8 CHANNEL SELECTABLE RECEIVE STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint289(enable=false, channel=289, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint289(void)
{
    unused_isr();
}

/* MSPI8 CHANNEL SELECTABLE FRAME COUNT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint290(enable=false, channel=290, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint290(void)
{
    unused_isr();
}

/* MSPI8 CHANNEL SELECTABLE ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint291(enable=false, channel=291, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint291(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint292(enable=false, channel=292, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint292(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint293(enable=false, channel=293, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint293(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint294(enable=false, channel=294, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint294(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint295(enable=false, channel=295, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint295(void)
{
    unused_isr();
}

/* RSCAN0 CAN GLOBAL ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint296(enable=false, channel=296, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint296(void)
{
    unused_isr();
}

/* RSCAN0 CAN RECEIVE FIFO INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint297(enable=false, channel=297, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint297(void)
{
    unused_isr();
}

/* CAN0 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint298(enable=false, channel=298, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint298(void)
{
    unused_isr();
}

/* CAN0 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint299(enable=false, channel=299, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint299(void)
{
    unused_isr();
}

/* CAN0 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint300(enable=false, channel=300, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint300(void)
{
    unused_isr();
}

/* CAN1 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint301(enable=false, channel=301, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint301(void)
{
    unused_isr();
}

/* CAN1 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint302(enable=false, channel=302, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint302(void)
{
    unused_isr();
}

/* CAN1 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint303(enable=false, channel=303, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint303(void)
{
    unused_isr();
}

/* CAN2 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint304(enable=false, channel=304, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint304(void)
{
    unused_isr();
}

/* CAN2 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint305(enable=false, channel=305, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint305(void)
{
    unused_isr();
}

/* CAN2 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint306(enable=false, channel=306, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint306(void)
{
    unused_isr();
}

/* CAN3 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint307(enable=false, channel=307, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint307(void)
{
    unused_isr();
}

/* CAN3 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint308(enable=false, channel=308, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint308(void)
{
    unused_isr();
}

/* CAN3 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint309(enable=false, channel=309, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint309(void)
{
    unused_isr();
}

/* CAN4 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint310(enable=false, channel=310, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint310(void)
{
    unused_isr();
}

/* CAN4 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint311(enable=false, channel=311, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint311(void)
{
    unused_isr();
}

/* CAN4 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint312(enable=false, channel=312, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint312(void)
{
    unused_isr();
}

/* CAN5 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint313(enable=false, channel=313, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint313(void)
{
    unused_isr();
}

/* CAN5 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint314(enable=false, channel=314, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint314(void)
{
    unused_isr();
}

/* CAN5 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint315(enable=false, channel=315, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint315(void)
{
    unused_isr();
}

/* CAN6 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint316(enable=false, channel=316, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint316(void)
{
    unused_isr();
}

/* CAN6 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint317(enable=false, channel=317, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint317(void)
{
    unused_isr();
}

/* CAN6 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint318(enable=false, channel=318, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint318(void)
{
    unused_isr();
}

/* CAN7 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint319(enable=false, channel=319, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint319(void)
{
    unused_isr();
}

/* CAN7 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint320(enable=false, channel=320, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint320(void)
{
    unused_isr();
}

/* CAN7 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint321(enable=false, channel=321, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint321(void)
{
    unused_isr();
}

/* RSCAN1 CAN GLOBAL ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint322(enable=false, channel=322, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint322(void)
{
    unused_isr();
}

/* RSCAN1 CAN RECEIVE FIFO INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint323(enable=false, channel=323, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint323(void)
{
    unused_isr();
}

/* CAN8 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint324(enable=false, channel=324, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint324(void)
{
    unused_isr();
}

/* CAN8 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint325(enable=false, channel=325, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint325(void)
{
    unused_isr();
}

/* CAN8 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint326(enable=false, channel=326, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint326(void)
{
    unused_isr();
}

/* CAN9 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint327(enable=false, channel=327, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint327(void)
{
    unused_isr();
}

/* CAN9 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint328(enable=false, channel=328, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint328(void)
{
    unused_isr();
}

/* CAN9 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint329(enable=false, channel=329, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint329(void)
{
    unused_isr();
}

/* CAN10 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint330(enable=false, channel=330, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint330(void)
{
    unused_isr();
}

/* CAN10 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint331(enable=false, channel=331, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint331(void)
{
    unused_isr();
}

/* CAN10 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint332(enable=false, channel=332, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint332(void)
{
    unused_isr();
}

/* CAN11 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint333(enable=false, channel=333, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint333(void)
{
    unused_isr();
}

/* CAN11 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint334(enable=false, channel=334, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint334(void)
{
    unused_isr();
}

/* CAN11 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint335(enable=false, channel=335, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint335(void)
{
    unused_isr();
}

/* CAN12 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint336(enable=false, channel=336, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint336(void)
{
    unused_isr();
}

/* CAN12 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint337(enable=false, channel=337, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint337(void)
{
    unused_isr();
}

/* CAN12 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint338(enable=false, channel=338, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint338(void)
{
    unused_isr();
}

/* CAN13 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint339(enable=false, channel=339, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint339(void)
{
    unused_isr();
}

/* CAN13 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint340(enable=false, channel=340, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint340(void)
{
    unused_isr();
}

/* CAN13 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint341(enable=false, channel=341, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint341(void)
{
    unused_isr();
}

/* CAN14 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint342(enable=false, channel=342, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint342(void)
{
    unused_isr();
}

/* CAN14 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint343(enable=false, channel=343, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint343(void)
{
    unused_isr();
}

/* CAN14 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint344(enable=false, channel=344, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint344(void)
{
    unused_isr();
}

/* CAN15 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint345(enable=false, channel=345, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint345(void)
{
    unused_isr();
}

/* CAN15 TRANSMIT/RECEIVE FIFO RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint346(enable=false, channel=346, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint346(void)
{
    unused_isr();
}

/* CAN15 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint347(enable=false, channel=347, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint347(void)
{
    unused_isr();
}

/* SCI30 RECEIVE ERROR */
#if defined (__CCRH__)
#pragma interrupt eiint348(enable=false, channel=348, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint348(void)
{
    unused_isr();
}

/* SCI30 RECEIVE DATA FULL */
#if defined (__CCRH__)
#pragma interrupt eiint349(enable=false, channel=349, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint349(void)
{
    unused_isr();
}

/* SCI30 TRANSMIT DATA EMPTY */
#if defined (__CCRH__)
#pragma interrupt eiint350(enable=false, channel=350, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint350(void)
{
    unused_isr();
}

/* SCI30 END OF TRANSMISSION */
#if defined (__CCRH__)
#pragma interrupt eiint351(enable=false, channel=351, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint351(void)
{
    unused_isr();
}

/* SCI31 RECEIVE ERROR */
#if defined (__CCRH__)
#pragma interrupt eiint352(enable=false, channel=352, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint352(void)
{
    unused_isr();
}

/* SCI31 RECEIVE DATA FULL */
#if defined (__CCRH__)
#pragma interrupt eiint353(enable=false, channel=353, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint353(void)
{
    unused_isr();
}

/* SCI31 TRANSMIT DATA EMPTY */
#if defined (__CCRH__)
#pragma interrupt eiint354(enable=false, channel=354, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint354(void)
{
    unused_isr();
}

/* SCI31 END OF TRANSMISSION */
#if defined (__CCRH__)
#pragma interrupt eiint355(enable=false, channel=355, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint355(void)
{
    unused_isr();
}

/* SCI32 RECEIVE ERROR */
#if defined (__CCRH__)
#pragma interrupt eiint356(enable=false, channel=356, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint356(void)
{
    unused_isr();
}

/* SCI32 RECEIVE DATA FULL */
#if defined (__CCRH__)
#pragma interrupt eiint357(enable=false, channel=357, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint357(void)
{
    unused_isr();
}

/* SCI32 TRANSMIT DATA EMPTY */
#if defined (__CCRH__)
#pragma interrupt eiint358(enable=false, channel=358, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint358(void)
{
    unused_isr();
}

/* SCI32 END OF TRANSMISSION */
#if defined (__CCRH__)
#pragma interrupt eiint359(enable=false, channel=359, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint359(void)
{
    unused_isr();
}

/* TAUJ0 CHANNEL 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint360(enable=false, channel=360, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint360(void)
{
    unused_isr();
}

/* TAUJ0 CHANNEL 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint361(enable=false, channel=361, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint361(void)
{
    unused_isr();
}

/* TAUJ0 CHANNEL 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint362(enable=false, channel=362, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint362(void)
{
    unused_isr();
}

/* TAUJ0 CHANNEL 3 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint363(enable=false, channel=363, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint363(void)
{
    unused_isr();
}

/* TAUJ1 CHANNEL 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint364(enable=false, channel=364, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint364(void)
{
    unused_isr();
}

/* TAUJ1 CHANNEL 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint365(enable=false, channel=365, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint365(void)
{
    unused_isr();
}

/* TAUJ1 CHANNEL 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint366(enable=false, channel=366, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint366(void)
{
    unused_isr();
}

/* TAUJ1 CHANNEL 3 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint367(enable=false, channel=367, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint367(void)
{
    unused_isr();
}

/* TAUJ2 CHANNEL 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint368(enable=false, channel=368, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint368(void)
{
    unused_isr();
}

/* TAUJ2 CHANNEL 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint369(enable=false, channel=369, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint369(void)
{
    unused_isr();
}

/* TAUJ2 CHANNEL 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint370(enable=false, channel=370, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint370(void)
{
    unused_isr();
}

/* TAUJ2 CHANNEL 3 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint371(enable=false, channel=371, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint371(void)
{
    unused_isr();
}

/* TAUJ3 CHANNEL 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint372(enable=false, channel=372, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint372(void)
{
    unused_isr();
}

/* TAUJ3 CHANNEL 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint373(enable=false, channel=373, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint373(void)
{
    unused_isr();
}

/* TAUJ3 CHANNEL 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint374(enable=false, channel=374, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint374(void)
{
    unused_isr();
}

/* TAUJ3 CHANNEL 3 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint375(enable=false, channel=375, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint375(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint376(enable=false, channel=376, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint376(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 3 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint377(enable=false, channel=377, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint377(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 5 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint378(enable=false, channel=378, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint378(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 7 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint379(enable=false, channel=379, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint379(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 9 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint380(enable=false, channel=380, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint380(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 11 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint381(enable=false, channel=381, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint381(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 13 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint382(enable=false, channel=382, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint382(void)
{
    unused_isr();
}

/* TAUD0 CHANNEL 15 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint383(enable=false, channel=383, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint383(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint384(enable=false, channel=384, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint384(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint385(enable=false, channel=385, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint385(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint386(enable=false, channel=386, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint386(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 3 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint387(enable=false, channel=387, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint387(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 4 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint388(enable=false, channel=388, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint388(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 5 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint389(enable=false, channel=389, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint389(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 6 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint390(enable=false, channel=390, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint390(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 7 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint391(enable=false, channel=391, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint391(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 8 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint392(enable=false, channel=392, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint392(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 9 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint393(enable=false, channel=393, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint393(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 10 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint394(enable=false, channel=394, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint394(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 11 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint395(enable=false, channel=395, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint395(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 12 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint396(enable=false, channel=396, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint396(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 13 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint397(enable=false, channel=397, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint397(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 14 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint398(enable=false, channel=398, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint398(void)
{
    unused_isr();
}

/* TAUD1 CHANNEL 15 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint399(enable=false, channel=399, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint399(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint400(enable=false, channel=400, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint400(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint401(enable=false, channel=401, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint401(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint402(enable=false, channel=402, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint402(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 3 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint403(enable=false, channel=403, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint403(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 4 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint404(enable=false, channel=404, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint404(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 5 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint405(enable=false, channel=405, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint405(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 6 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint406(enable=false, channel=406, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint406(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 7 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint407(enable=false, channel=407, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint407(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 8 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint408(enable=false, channel=408, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint408(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 9 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint409(enable=false, channel=409, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint409(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 10 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint410(enable=false, channel=410, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint410(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 11 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint411(enable=false, channel=411, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint411(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 12 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint412(enable=false, channel=412, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint412(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 13 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint413(enable=false, channel=413, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint413(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 14 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint414(enable=false, channel=414, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint414(void)
{
    unused_isr();
}

/* TAUD2 CHANNEL 15 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint415(enable=false, channel=415, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint415(void)
{
    unused_isr();
}

/* RLIN30 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint416(enable=false, channel=416, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint416(void)
{
    unused_isr();
}

/* RLIN30 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint417(enable=false, channel=417, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint417(void)
{
    unused_isr();
}

/* RLIN30 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint418(enable=false, channel=418, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint418(void)
{
    unused_isr();
}

/* RLIN30 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint419(enable=false, channel=419, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint419(void)
{
    unused_isr();
}

/* RLIN31 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint420(enable=false, channel=420, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint420(void)
{
    unused_isr();
}

/* RLIN31 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint421(enable=false, channel=421, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint421(void)
{
    unused_isr();
}

/* RLIN31 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint422(enable=false, channel=422, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint422(void)
{
    unused_isr();
}

/* RLIN31 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint423(enable=false, channel=423, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint423(void)
{
    unused_isr();
}

/* RLIN32 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint424(enable=false, channel=424, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint424(void)
{
    unused_isr();
}

/* RLIN32 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint425(enable=false, channel=425, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint425(void)
{
    unused_isr();
}

/* RLIN32 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint426(enable=false, channel=426, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint426(void)
{
    unused_isr();
}

/* RLIN32 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint427(enable=false, channel=427, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint427(void)
{
    unused_isr();
}

/* RLIN33 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint428(enable=false, channel=428, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint428(void)
{
    unused_isr();
}

/* RLIN33 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint429(enable=false, channel=429, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint429(void)
{
    unused_isr();
}

/* RLIN33 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint430(enable=false, channel=430, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint430(void)
{
    unused_isr();
}

/* RLIN33 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint431(enable=false, channel=431, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint431(void)
{
    unused_isr();
}

/* RLIN34 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint432(enable=false, channel=432, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint432(void)
{
    unused_isr();
}

/* RLIN34 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint433(enable=false, channel=433, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint433(void)
{
    unused_isr();
}

/* RLIN34 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint434(enable=false, channel=434, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint434(void)
{
    unused_isr();
}

/* RLIN34 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint435(enable=false, channel=435, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint435(void)
{
    unused_isr();
}

/* RLIN35 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint436(enable=false, channel=436, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint436(void)
{
    unused_isr();
}

/* RLIN35 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint437(enable=false, channel=437, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint437(void)
{
    unused_isr();
}

/* RLIN35 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint438(enable=false, channel=438, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint438(void)
{
    unused_isr();
}

/* RLIN35 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint439(enable=false, channel=439, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint439(void)
{
    unused_isr();
}

/* RLIN36 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint440(enable=false, channel=440, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint440(void)
{
    unused_isr();
}

/* RLIN36 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint441(enable=false, channel=441, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint441(void)
{
    unused_isr();
}

/* RLIN36 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint442(enable=false, channel=442, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint442(void)
{
    unused_isr();
}

/* RLIN36 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint443(enable=false, channel=443, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint443(void)
{
    unused_isr();
}

/* RLIN37 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint444(enable=false, channel=444, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint444(void)
{
    unused_isr();
}

/* RLIN37 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint445(enable=false, channel=445, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint445(void)
{
    unused_isr();
}

/* RLIN37 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint446(enable=false, channel=446, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint446(void)
{
    unused_isr();
}

/* RLIN37 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint447(enable=false, channel=447, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint447(void)
{
    unused_isr();
}

/* RLIN38 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint448(enable=false, channel=448, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint448(void)
{
    unused_isr();
}

/* RLIN38 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint449(enable=false, channel=449, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint449(void)
{
    unused_isr();
}

/* RLIN38 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint450(enable=false, channel=450, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint450(void)
{
    unused_isr();
}

/* RLIN38 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint451(enable=false, channel=451, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint451(void)
{
    unused_isr();
}

/* RLIN39 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint452(enable=false, channel=452, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint452(void)
{
    unused_isr();
}

/* RLIN39 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint453(enable=false, channel=453, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint453(void)
{
    unused_isr();
}

/* RLIN39 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint454(enable=false, channel=454, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint454(void)
{
    unused_isr();
}

/* RLIN39 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint455(enable=false, channel=455, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint455(void)
{
    unused_isr();
}

/* RLIN310 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint456(enable=false, channel=456, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint456(void)
{
    unused_isr();
}

/* RLIN310 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint457(enable=false, channel=457, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint457(void)
{
    unused_isr();
}

/* RLIN310 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint458(enable=false, channel=458, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint458(void)
{
    unused_isr();
}

/* RLIN310 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint459(enable=false, channel=459, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint459(void)
{
    unused_isr();
}

/* RLIN311 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint460(enable=false, channel=460, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint460(void)
{
    unused_isr();
}

/* RLIN311 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint461(enable=false, channel=461, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint461(void)
{
    unused_isr();
}

/* RLIN311 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint462(enable=false, channel=462, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint462(void)
{
    unused_isr();
}

/* RLIN311 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint463(enable=false, channel=463, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint463(void)
{
    unused_isr();
}

/* RLIN312 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint464(enable=false, channel=464, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint464(void)
{
    unused_isr();
}

/* RLIN312 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint465(enable=false, channel=465, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint465(void)
{
    unused_isr();
}

/* RLIN312 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint466(enable=false, channel=466, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint466(void)
{
    unused_isr();
}

/* RLIN312 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint467(enable=false, channel=467, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint467(void)
{
    unused_isr();
}

/* RLIN313 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint468(enable=false, channel=468, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint468(void)
{
    unused_isr();
}

/* RLIN313 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint469(enable=false, channel=469, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint469(void)
{
    unused_isr();
}

/* RLIN313 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint470(enable=false, channel=470, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint470(void)
{
    unused_isr();
}

/* RLIN313 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint471(enable=false, channel=471, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint471(void)
{
    unused_isr();
}

/* RLIN314 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint472(enable=false, channel=472, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint472(void)
{
    unused_isr();
}

/* RLIN314 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint473(enable=false, channel=473, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint473(void)
{
    unused_isr();
}

/* RLIN314 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint474(enable=false, channel=474, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint474(void)
{
    unused_isr();
}

/* RLIN314 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint475(enable=false, channel=475, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint475(void)
{
    unused_isr();
}

/* RLIN315 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint476(enable=false, channel=476, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint476(void)
{
    unused_isr();
}

/* RLIN315 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint477(enable=false, channel=477, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint477(void)
{
    unused_isr();
}

/* RLIN315 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint478(enable=false, channel=478, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint478(void)
{
    unused_isr();
}

/* RLIN315 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint479(enable=false, channel=479, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint479(void)
{
    unused_isr();
}

/* RLIN316 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint480(enable=false, channel=480, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint480(void)
{
    unused_isr();
}

/* RLIN316 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint481(enable=false, channel=481, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint481(void)
{
    unused_isr();
}

/* RLIN316 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint482(enable=false, channel=482, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint482(void)
{
    unused_isr();
}

/* RLIN316 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint483(enable=false, channel=483, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint483(void)
{
    unused_isr();
}

/* RLIN317 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint484(enable=false, channel=484, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint484(void)
{
    unused_isr();
}

/* RLIN317 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint485(enable=false, channel=485, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint485(void)
{
    unused_isr();
}

/* RLIN317 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint486(enable=false, channel=486, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint486(void)
{
    unused_isr();
}

/* RLIN317 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint487(enable=false, channel=487, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint487(void)
{
    unused_isr();
}

/* RLIN318 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint488(enable=false, channel=488, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint488(void)
{
    unused_isr();
}

/* RLIN318 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint489(enable=false, channel=489, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint489(void)
{
    unused_isr();
}

/* RLIN318 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint490(enable=false, channel=490, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint490(void)
{
    unused_isr();
}

/* RLIN318 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint491(enable=false, channel=491, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint491(void)
{
    unused_isr();
}

/* RLIN319 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint492(enable=false, channel=492, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint492(void)
{
    unused_isr();
}

/* RLIN319 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint493(enable=false, channel=493, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint493(void)
{
    unused_isr();
}

/* RLIN319 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint494(enable=false, channel=494, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint494(void)
{
    unused_isr();
}

/* RLIN319 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint495(enable=false, channel=495, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint495(void)
{
    unused_isr();
}

/* RLIN320 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint496(enable=false, channel=496, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint496(void)
{
    unused_isr();
}

/* RLIN320 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint497(enable=false, channel=497, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint497(void)
{
    unused_isr();
}

/* RLIN320 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint498(enable=false, channel=498, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint498(void)
{
    unused_isr();
}

/* RLIN320 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint499(enable=false, channel=499, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint499(void)
{
    unused_isr();
}

/* RLIN321 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint500(enable=false, channel=500, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint500(void)
{
    unused_isr();
}

/* RLIN321 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint501(enable=false, channel=501, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint501(void)
{
    unused_isr();
}

/* RLIN321 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint502(enable=false, channel=502, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint502(void)
{
    unused_isr();
}

/* RLIN321 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint503(enable=false, channel=503, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint503(void)
{
    unused_isr();
}

/* RLIN320 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint504(enable=false, channel=504, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint504(void)
{
    unused_isr();
}

/* RLIN320 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint505(enable=false, channel=505, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint505(void)
{
    unused_isr();
}

/* RLIN320 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint506(enable=false, channel=506, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint506(void)
{
    unused_isr();
}

/* RLIN320 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint507(enable=false, channel=507, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint507(void)
{
    unused_isr();
}

/* RLIN323 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint508(enable=false, channel=508, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint508(void)
{
    unused_isr();
}

/* RLIN323 TRANSMIT INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint509(enable=false, channel=509, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint509(void)
{
    unused_isr();
}

/* RLIN323 RECEIVE COMPLETION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint510(enable=false, channel=510, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint510(void)
{
    unused_isr();
}

/* RLIN323 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint511(enable=false, channel=511, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint511(void)
{
    unused_isr();
}

/* RSENT0 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint512(enable=false, channel=512, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint512(void)
{
    unused_isr();
}

/* RSENT0 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint513(enable=false, channel=513, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint513(void)
{
    unused_isr();
}

/* RSENT1 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint514(enable=false, channel=514, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint514(void)
{
    unused_isr();
}

/* RSENT1 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint515(enable=false, channel=515, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint515(void)
{
    unused_isr();
}

/* RSENT2 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint516(enable=false, channel=516, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint516(void)
{
    unused_isr();
}

/* RSENT2 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint517(enable=false, channel=517, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint517(void)
{
    unused_isr();
}

/* RSENT3 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint518(enable=false, channel=518, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint518(void)
{
    unused_isr();
}

/* RSENT3 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint519(enable=false, channel=519, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint519(void)
{
    unused_isr();
}

/* RSENT4 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint520(enable=false, channel=520, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint520(void)
{
    unused_isr();
}

/* RSENT4 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint521(enable=false, channel=521, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint521(void)
{
    unused_isr();
}

/* RSENT5 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint522(enable=false, channel=522, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint522(void)
{
    unused_isr();
}

/* RSENT5 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint523(enable=false, channel=523, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint523(void)
{
    unused_isr();
}

/* RSENT6 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint524(enable=false, channel=524, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint524(void)
{
    unused_isr();
}

/* RSENT6 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint525(enable=false, channel=525, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint525(void)
{
    unused_isr();
}

/* RSENT7 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint526(enable=false, channel=526, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint526(void)
{
    unused_isr();
}

/* RSENT7 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint527(enable=false, channel=527, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint527(void)
{
    unused_isr();
}

/* TPBA0 PERIOD MATCH DETECTION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint528(enable=false, channel=528, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint528(void)
{
    unused_isr();
}

/* TPBA0 DUTY MATCH DETECTION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint529(enable=false, channel=529, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint529(void)
{
    unused_isr();
}

/* TPBA0 PATTERN NUMBER MATCHING DETECTION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint530(enable=false, channel=530, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint530(void)
{
    unused_isr();
}

/* TPBA1 PERIOD MATCH DETECTION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint531(enable=false, channel=531, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint531(void)
{
    unused_isr();
}

/* TPBA1 DUTY MATCH DETECTION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint532(enable=false, channel=532, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint532(void)
{
    unused_isr();
}

/* TPBA1 PATTERN NUMBER MATCHING DETECTION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint533(enable=false, channel=533, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint533(void)
{
    unused_isr();
}

/* ENCA0 OVERFLOW INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint534(enable=false, channel=534, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint534(void)
{
    unused_isr();
}

/* ENCA0 UNDERFLOW INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint535(enable=false, channel=535, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint535(void)
{
    unused_isr();
}

/* ENCA0 CAPTURE/COMPARE MATCH INTERRUPT 0 */
#if defined (__CCRH__)
#pragma interrupt eiint536(enable=false, channel=536, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint536(void)
{
    unused_isr();
}

/* ENCA0 CAPTURE/COMPARE MATCH INTERRUPT 1 */
#if defined (__CCRH__)
#pragma interrupt eiint537(enable=false, channel=537, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint537(void)
{
    unused_isr();
}

/* ENCA0 ENCODER CLEAR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint538(enable=false, channel=538, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint538(void)
{
    unused_isr();
}

/* ENCA1 OVERFLOW INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint539(enable=false, channel=539, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint539(void)
{
    unused_isr();
}

/* ENCA1 UNDERFLOW INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint540(enable=false, channel=540, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint540(void)
{
    unused_isr();
}

/* ENCA1 CAPTURE/COMPARE MATCH INTERRUPT 0 */
#if defined (__CCRH__)
#pragma interrupt eiint541(enable=false, channel=541, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint541(void)
{
    unused_isr();
}

/* ENCA1 CAPTURE/COMPARE MATCH INTERRUPT 1 */
#if defined (__CCRH__)
#pragma interrupt eiint542(enable=false, channel=542, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint542(void)
{
    unused_isr();
}

/* ENCA1 ENCODER CLEAR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint543(enable=false, channel=543, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint543(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 0 */
#if defined (__CCRH__)
#pragma interrupt eiint544(enable=false, channel=544, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint544(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 1 */
#if defined (__CCRH__)
#pragma interrupt eiint545(enable=false, channel=545, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint545(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 2 */
#if defined (__CCRH__)
#pragma interrupt eiint546(enable=false, channel=546, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint546(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 3 */
#if defined (__CCRH__)
#pragma interrupt eiint547(enable=false, channel=547, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint547(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 4 */
#if defined (__CCRH__)
#pragma interrupt eiint548(enable=false, channel=548, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint548(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 5 */
#if defined (__CCRH__)
#pragma interrupt eiint549(enable=false, channel=549, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint549(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 6 */
#if defined (__CCRH__)
#pragma interrupt eiint550(enable=false, channel=550, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint550(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 7 */
#if defined (__CCRH__)
#pragma interrupt eiint551(enable=false, channel=551, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint551(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 8 */
#if defined (__CCRH__)
#pragma interrupt eiint552(enable=false, channel=552, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint552(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 9 */
#if defined (__CCRH__)
#pragma interrupt eiint553(enable=false, channel=553, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint553(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 10 */
#if defined (__CCRH__)
#pragma interrupt eiint554(enable=false, channel=554, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint554(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 11 */
#if defined (__CCRH__)
#pragma interrupt eiint555(enable=false, channel=555, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint555(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 12 */
#if defined (__CCRH__)
#pragma interrupt eiint556(enable=false, channel=556, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint556(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 13 */
#if defined (__CCRH__)
#pragma interrupt eiint557(enable=false, channel=557, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint557(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 14 */
#if defined (__CCRH__)
#pragma interrupt eiint558(enable=false, channel=558, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint558(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 15 */
#if defined (__CCRH__)
#pragma interrupt eiint559(enable=false, channel=559, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint559(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 16 */
#if defined (__CCRH__)
#pragma interrupt eiint560(enable=false, channel=560, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint560(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 17 */
#if defined (__CCRH__)
#pragma interrupt eiint561(enable=false, channel=561, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint561(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 18 */
#if defined (__CCRH__)
#pragma interrupt eiint562(enable=false, channel=562, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint562(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 19 */
#if defined (__CCRH__)
#pragma interrupt eiint563(enable=false, channel=563, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint563(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 20 */
#if defined (__CCRH__)
#pragma interrupt eiint564(enable=false, channel=564, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint564(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 21 */
#if defined (__CCRH__)
#pragma interrupt eiint565(enable=false, channel=565, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint565(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 22 */
#if defined (__CCRH__)
#pragma interrupt eiint566(enable=false, channel=566, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint566(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 23 */
#if defined (__CCRH__)
#pragma interrupt eiint567(enable=false, channel=567, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint567(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 24 */
#if defined (__CCRH__)
#pragma interrupt eiint568(enable=false, channel=568, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint568(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 25 */
#if defined (__CCRH__)
#pragma interrupt eiint569(enable=false, channel=569, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint569(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 26 */
#if defined (__CCRH__)
#pragma interrupt eiint570(enable=false, channel=570, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint570(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 27 */
#if defined (__CCRH__)
#pragma interrupt eiint571(enable=false, channel=571, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint571(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 28 */
#if defined (__CCRH__)
#pragma interrupt eiint572(enable=false, channel=572, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint572(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 29 */
#if defined (__CCRH__)
#pragma interrupt eiint573(enable=false, channel=573, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint573(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 30 */
#if defined (__CCRH__)
#pragma interrupt eiint574(enable=false, channel=574, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint574(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 31 */
#if defined (__CCRH__)
#pragma interrupt eiint575(enable=false, channel=575, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint575(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 32 */
#if defined (__CCRH__)
#pragma interrupt eiint576(enable=false, channel=576, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint576(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 33 */
#if defined (__CCRH__)
#pragma interrupt eiint577(enable=false, channel=577, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint577(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 34 */
#if defined (__CCRH__)
#pragma interrupt eiint578(enable=false, channel=578, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint578(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 35 */
#if defined (__CCRH__)
#pragma interrupt eiint579(enable=false, channel=579, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint579(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 36 */
#if defined (__CCRH__)
#pragma interrupt eiint580(enable=false, channel=580, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint580(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 37 */
#if defined (__CCRH__)
#pragma interrupt eiint581(enable=false, channel=581, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint581(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 38 */
#if defined (__CCRH__)
#pragma interrupt eiint582(enable=false, channel=582, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint582(void)
{
    unused_isr();
}

/* EXTERNAL INTERRUPT 39 */
#if defined (__CCRH__)
#pragma interrupt eiint583(enable=false, channel=583, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint583(void)
{
    unused_isr();
}

/* PSI5S0 COMMUNICATION INTERRUPT FOR CH0 */
#if defined (__CCRH__)
#pragma interrupt eiint584(enable=false, channel=584, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint584(void)
{
    unused_isr();
}

/* PSI5S0 COMMUNICATION INTERRUPT FOR CH1 */
#if defined (__CCRH__)
#pragma interrupt eiint585(enable=false, channel=585, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint585(void)
{
    unused_isr();
}

/* PSI5S0 COMMUNICATION INTERRUPT FOR CH2 */
#if defined (__CCRH__)
#pragma interrupt eiint586(enable=false, channel=586, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint586(void)
{
    unused_isr();
}

/* PSI5S0 COMMUNICATION INTERRUPT FOR CH3 */
#if defined (__CCRH__)
#pragma interrupt eiint587(enable=false, channel=587, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint587(void)
{
    unused_isr();
}

/* PSI5S0 COMMUNICATION INTERRUPT FOR CH4 */
#if defined (__CCRH__)
#pragma interrupt eiint588(enable=false, channel=588, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint588(void)
{
    unused_isr();
}

/* PSI5S0 COMMUNICATION INTERRUPT FOR CH5 */
#if defined (__CCRH__)
#pragma interrupt eiint589(enable=false, channel=589, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint589(void)
{
    unused_isr();
}

/* PSI5S0 COMMUNICATION INTERRUPT FOR CH6 */
#if defined (__CCRH__)
#pragma interrupt eiint590(enable=false, channel=590, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint590(void)
{
    unused_isr();
}

/* PSI5S0 COMMUNICATION INTERRUPT FOR CH7 */
#if defined (__CCRH__)
#pragma interrupt eiint591(enable=false, channel=591, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint591(void)
{
    unused_isr();
}

/* PSI5S1 COMMUNICATION INTERRUPT FOR CH0 */
#if defined (__CCRH__)
#pragma interrupt eiint592(enable=false, channel=592, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint592(void)
{
    unused_isr();
}

/* PSI5S1 COMMUNICATION INTERRUPT FOR CH1 */
#if defined (__CCRH__)
#pragma interrupt eiint593(enable=false, channel=593, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint593(void)
{
    unused_isr();
}

/* PSI5S1 COMMUNICATION INTERRUPT FOR CH2 */
#if defined (__CCRH__)
#pragma interrupt eiint594(enable=false, channel=594, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint594(void)
{
    unused_isr();
}

/* PSI5S1 COMMUNICATION INTERRUPT FOR CH3 */
#if defined (__CCRH__)
#pragma interrupt eiint595(enable=false, channel=595, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint595(void)
{
    unused_isr();
}

/* PSI5S1 COMMUNICATION INTERRUPT FOR CH4 */
#if defined (__CCRH__)
#pragma interrupt eiint596(enable=false, channel=596, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint596(void)
{
    unused_isr();
}

/* PSI5S1 COMMUNICATION INTERRUPT FOR CH5 */
#if defined (__CCRH__)
#pragma interrupt eiint597(enable=false, channel=597, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint597(void)
{
    unused_isr();
}

/* PSI5S1 COMMUNICATION INTERRUPT FOR CH6 */
#if defined (__CCRH__)
#pragma interrupt eiint598(enable=false, channel=598, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint598(void)
{
    unused_isr();
}

/* PSI5S1 COMMUNICATION INTERRUPT FOR CH7 */
#if defined (__CCRH__)
#pragma interrupt eiint599(enable=false, channel=599, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint599(void)
{
    unused_isr();
}

/* PSI50 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint600(enable=false, channel=600, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint600(void)
{
    unused_isr();
}

/* PSI50 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint601(enable=false, channel=601, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint601(void)
{
    unused_isr();
}

/* PSI50 TRANSFER INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint602(enable=false, channel=602, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint602(void)
{
    unused_isr();
}

/* PSI51 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint603(enable=false, channel=603, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint603(void)
{
    unused_isr();
}

/* PSI51 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint604(enable=false, channel=604, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint604(void)
{
    unused_isr();
}

/* PSI51 TRANSFER INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint605(enable=false, channel=605, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint605(void)
{
    unused_isr();
}

/* PSI52 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint606(enable=false, channel=606, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint606(void)
{
    unused_isr();
}

/* PSI52 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint607(enable=false, channel=607, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint607(void)
{
    unused_isr();
}

/* PSI52 TRANSFER INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint608(enable=false, channel=608, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint608(void)
{
    unused_isr();
}

/* PSI53 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint609(enable=false, channel=609, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint609(void)
{
    unused_isr();
}

/* PSI53 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint610(enable=false, channel=610, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint610(void)
{
    unused_isr();
}

/* PSI53 TRANSFER INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint611(enable=false, channel=611, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint611(void)
{
    unused_isr();
}

/* RHSIF0 TRANSMIT COMPLETE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint612(enable=false, channel=612, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint612(void)
{
    unused_isr();
}

/* RHSIF0 TRANSMIT EXCEPTION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint613(enable=false, channel=613, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint613(void)
{
    unused_isr();
}

/* RHSIF0 RECEIVE COMPLETE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint614(enable=false, channel=614, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint614(void)
{
    unused_isr();
}

/* RHSIF0 RECEIVE EXCEPTION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint615(enable=false, channel=615, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint615(void)
{
    unused_isr();
}

/* RHSIF0 ICLC RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint616(enable=false, channel=616, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint616(void)
{
    unused_isr();
}

/* RHSIF0 CHANNEL 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint617(enable=false, channel=617, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint617(void)
{
    unused_isr();
}

/* RHSIF0 CHANNEL 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint618(enable=false, channel=618, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint618(void)
{
    unused_isr();
}

/* RHSIF0 CHANNEL 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint619(enable=false, channel=619, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint619(void)
{
    unused_isr();
}

/* RHSIF0 CHANNEL 3 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint620(enable=false, channel=620, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint620(void)
{
    unused_isr();
}

/* RHSIF0 STREAM INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint621(enable=false, channel=621, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint621(void)
{
    unused_isr();
}

/* RHSIF0 ERROR INTERRUPT / SECURITY INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint622(enable=false, channel=622, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint622(void)
{
    unused_isr();
}

/* FLXA0 LINE 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint623(enable=false, channel=623, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint623(void)
{
    unused_isr();
}

/* FLXA0 LINE 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint624(enable=false, channel=624, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint624(void)
{
    unused_isr();
}

/* FLXA0 TIMER 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint625(enable=false, channel=625, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint625(void)
{
    unused_isr();
}

/* FLXA0 TIMER 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint626(enable=false, channel=626, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint626(void)
{
    unused_isr();
}

/* FLXA0 TIMER 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint627(enable=false, channel=627, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint627(void)
{
    unused_isr();
}

/* FLXA0 FIFO DATA AVAILABLE  INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint628(enable=false, channel=628, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint628(void)
{
    unused_isr();
}

/* FLXA0 FIFO TRANSFER WARNING INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint629(enable=false, channel=629, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint629(void)
{
    unused_isr();
}

/* FLXA0 OUTPUT TRANSFER WARNING INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint630(enable=false, channel=630, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint630(void)
{
    unused_isr();
}

/* FLXA0 OUTPUT TRANSFER DONE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint631(enable=false, channel=631, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint631(void)
{
    unused_isr();
}

/* FLXA0 INPUT QUEUE FULL INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint632(enable=false, channel=632, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint632(void)
{
    unused_isr();
}

/* FLXA0 INPUT QUEUE EMPTY INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint633(enable=false, channel=633, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint633(void)
{
    unused_isr();
}

/* FLXA1 LINE 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint634(enable=false, channel=634, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint634(void)
{
    unused_isr();
}

/* FLXA1 LINE 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint635(enable=false, channel=635, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint635(void)
{
    unused_isr();
}

/* FLXA1 TIMER 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint636(enable=false, channel=636, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint636(void)
{
    unused_isr();
}

/* FLXA1 TIMER 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint637(enable=false, channel=637, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint637(void)
{
    unused_isr();
}

/* FLXA1 TIMER 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint638(enable=false, channel=638, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint638(void)
{
    unused_isr();
}

/* FLXA1 FIFO DATA AVAILABLE  INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint639(enable=false, channel=639, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint639(void)
{
    unused_isr();
}

/* FLXA1 FIFO TRANSFER WARNING INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint640(enable=false, channel=640, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint640(void)
{
    unused_isr();
}

/* FLXA1 OUTPUT TRANSFER WARNING INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint641(enable=false, channel=641, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint641(void)
{
    unused_isr();
}

/* FLXA1 OUTPUT TRANSFER DONE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint642(enable=false, channel=642, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint642(void)
{
    unused_isr();
}

/* FLXA1 INPUT QUEUE FULL INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint643(enable=false, channel=643, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint643(void)
{
    unused_isr();
}

/* FLXA1 INPUT QUEUE EMPTY INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint644(enable=false, channel=644, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint644(void)
{
    unused_isr();
}

/* ETNB0 DATA RELATED INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint645(enable=false, channel=645, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint645(void)
{
    unused_isr();
}

/* ETNB0 ERROR RELATED INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint646(enable=false, channel=646, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint646(void)
{
    unused_isr();
}

/* ETNB0 MANAGEMENT RELATED INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint647(enable=false, channel=647, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint647(void)
{
    unused_isr();
}

/* ETNB0 MAC INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint648(enable=false, channel=648, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint648(void)
{
    unused_isr();
}

/* ETNB1 DATA RELATED INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint649(enable=false, channel=649, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint649(void)
{
    unused_isr();
}

/* ETNB1 ERROR RELATED INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint650(enable=false, channel=650, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint650(void)
{
    unused_isr();
}

/* ETNB1 MANAGEMENT RELATED INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint651(enable=false, channel=651, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint651(void)
{
    unused_isr();
}

/* ETNB1 MAC INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint652(enable=false, channel=652, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint652(void)
{
    unused_isr();
}

/* ETNB1 SGMII INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint653(enable=false, channel=653, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint653(void)
{
    unused_isr();
}

/* RTCA0 1_SECOND INTERVAL INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint654(enable=false, channel=654, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint654(void)
{
    unused_isr();
}

/* RTCA0 ALARM INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint655(enable=false, channel=655, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint655(void)
{
    unused_isr();
}

/* RTCA0 FIXED INTERVAL INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint656(enable=false, channel=656, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint656(void)
{
    unused_isr();
}

/* OTS0 ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint657(enable=false, channel=657, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint657(void)
{
    unused_isr();
}

/* OTS0 TEMPERATURE MEASUREMENT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint658(enable=false, channel=658, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint658(void)
{
    unused_isr();
}

/* OTS0 TEMPERATURE RISE/DROP INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint659(enable=false, channel=659, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint659(void)
{
    unused_isr();
}

/* PWGC UNIT 0 OF GROUP 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint660(enable=false, channel=660, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint660(void)
{
    unused_isr();
}

/* PWGC UNIT 0 OF GROUP 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint661(enable=false, channel=661, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint661(void)
{
    unused_isr();
}

/* PWGC UNIT 0 OF GROUP 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint662(enable=false, channel=662, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint662(void)
{
    unused_isr();
}

/* PWGC UNIT 1 OF GROUP 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint663(enable=false, channel=663, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint663(void)
{
    unused_isr();
}

/* PWGC UNIT 1 OF GROUP 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint664(enable=false, channel=664, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint664(void)
{
    unused_isr();
}

/* PWGC UNIT 1 OF GROUP 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint665(enable=false, channel=665, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint665(void)
{
    unused_isr();
}

/* PWGC UNIT 2 OF GROUP 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint666(enable=false, channel=666, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint666(void)
{
    unused_isr();
}

/* PWGC UNIT 2 OF GROUP 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint667(enable=false, channel=667, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint667(void)
{
    unused_isr();
}

/* PWGC UNIT 2 OF GROUP 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint668(enable=false, channel=668, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint668(void)
{
    unused_isr();
}

/* PWGC UNIT 3 OF GROUP 0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint669(enable=false, channel=669, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint669(void)
{
    unused_isr();
}

/* PWGC UNIT 3 OF GROUP 1 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint670(enable=false, channel=670, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint670(void)
{
    unused_isr();
}

/* PWGC UNIT 3 OF GROUP 2 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint671(enable=false, channel=671, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint671(void)
{
    unused_isr();
}

/* PWSD QUEUE FULL INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint672(enable=false, channel=672, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint672(void)
{
    unused_isr();
}

/* CXP10 TRANSFER INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint673(enable=false, channel=673, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint673(void)
{
    unused_isr();
}

/* CXP10 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint674(enable=false, channel=674, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint674(void)
{
    unused_isr();
}

/* CXP10 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint675(enable=false, channel=675, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint675(void)
{
    unused_isr();
}

/* CXP11 TRANSFER INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint676(enable=false, channel=676, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint676(void)
{
    unused_isr();
}

/* CXP11 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint677(enable=false, channel=677, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint677(void)
{
    unused_isr();
}

/* CXP11 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint678(enable=false, channel=678, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint678(void)
{
    unused_isr();
}

/* CXP12 TRANSFER INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint679(enable=false, channel=679, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint679(void)
{
    unused_isr();
}

/* CXP12 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint680(enable=false, channel=680, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint680(void)
{
    unused_isr();
}

/* CXP12 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint681(enable=false, channel=681, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint681(void)
{
    unused_isr();
}

/* CXP13 TRANSFER INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint682(enable=false, channel=682, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint682(void)
{
    unused_isr();
}

/* CXP13 RECEIVE INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint683(enable=false, channel=683, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint683(void)
{
    unused_isr();
}

/* CXP13 STATUS INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint684(enable=false, channel=684, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint684(void)
{
    unused_isr();
}

/* RIIC0 COMMUNICATION ERROR OR EVENT GENERATION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint685(enable=false, channel=685, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint685(void)
{
    unused_isr();
}

/* RIIC0 RECEIVE END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint686(enable=false, channel=686, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint686(void)
{
    unused_isr();
}

/* RIIC0 TRANSMIT DATA EMPTY INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint687(enable=false, channel=687, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint687(void)
{
    unused_isr();
}

/* RIIC0 TRANSMIT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint688(enable=false, channel=688, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint688(void)
{
    unused_isr();
}

/* RIIC1 COMMUNICATION ERROR OR EVENT GENERATION INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint689(enable=false, channel=689, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint689(void)
{
    unused_isr();
}

/* RIIC1 RECEIVE END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint690(enable=false, channel=690, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint690(void)
{
    unused_isr();
}

/* RIIC1 TRANSMIT DATA EMPTY INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint691(enable=false, channel=691, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint691(void)
{
    unused_isr();
}

/* RIIC1 TRANSMIT END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint692(enable=false, channel=692, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint692(void)
{
    unused_isr();
}

/* LPS0 PORT POLLING END INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint693(enable=false, channel=693, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint693(void)
{
    unused_isr();
}

/* LPS0 DIGITAL PORT ERROR INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint694(enable=false, channel=694, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint694(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint695(enable=false, channel=695, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint695(void)
{
    unused_isr();
}

/* MMCA0 INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint696(enable=false, channel=696, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint696(void)
{
    unused_isr();
}

/* INTERRUPT FOR DEGRADATION */
#if defined (__CCRH__)
#pragma interrupt eiint697(enable=false, channel=697, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint697(void)
{
    unused_isr();
}

/* ICUMHA FATAL ERROR NOTIFICATION */
#if defined (__CCRH__)
#pragma interrupt eiint698(enable=false, channel=698, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint698(void)
{
    unused_isr();
}

/* EDGE DETECTION OF RLIN30 RECEIVED DATA */
#if defined (__CCRH__)
#pragma interrupt eiint699(enable=false, channel=699, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint699(void)
{
    unused_isr();
}

/* EDGE DETECTION OF RLIN31 RECEIVED DATA */
#if defined (__CCRH__)
#pragma interrupt eiint700(enable=false, channel=700, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint700(void)
{
    unused_isr();
}

/* EDGE DETECTION OF RSCFD0 RECEIVED DATA */
#if defined (__CCRH__)
#pragma interrupt eiint701(enable=false, channel=701, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint701(void)
{
    unused_isr();
}

/* EDGE DETECTION OF RSCFD1 RECEIVED DATA */
#if defined (__CCRH__)
#pragma interrupt eiint702(enable=false, channel=702, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint702(void)
{
    unused_isr();
}

/* EDGE DETECTION OF FLXA0 CH A RECEIVED DATA */
#if defined (__CCRH__)
#pragma interrupt eiint703(enable=false, channel=703, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint703(void)
{
    unused_isr();
}

/* EDGE DETECTION OF FLXA1 CH A RECEIVED DATA */
#if defined (__CCRH__)
#pragma interrupt eiint704(enable=false, channel=704, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint704(void)
{
    unused_isr();
}

/* WDTBA INTERRUPT */
#if defined (__CCRH__)
#pragma interrupt eiint705(enable=false, channel=705, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint705(void)
{
    unused_isr();
}

/* DEDICATED INTERRUPT FOR ON_CHIP DEBUG FUNCTION */
#if defined (__CCRH__)
#pragma interrupt eiint706(enable=false, channel=706, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint706(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint707(enable=false, channel=707, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint707(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint708(enable=false, channel=708, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint708(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint709(enable=false, channel=709, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint709(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint710(enable=false, channel=710, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint710(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint711(enable=false, channel=711, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint711(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint712(enable=false, channel=712, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint712(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint713(enable=false, channel=713, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint713(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint714(enable=false, channel=714, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint714(void)
{
    unused_isr();
}

/* EMERGENCY HI_Z INPUT 0 */
#if defined (__CCRH__)
#pragma interrupt eiint715(enable=false, channel=715, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint715(void)
{
    unused_isr();
}

/* EMERGENCY HI_Z INPUT 1 */
#if defined (__CCRH__)
#pragma interrupt eiint716(enable=false, channel=716, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint716(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint717(enable=false, channel=717, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint717(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint718(enable=false, channel=718, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint718(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint719(enable=false, channel=719, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint719(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint720(enable=false, channel=720, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint720(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint721(enable=false, channel=721, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint721(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint722(enable=false, channel=722, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint722(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint723(enable=false, channel=723, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint723(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint724(enable=false, channel=724, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint724(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint725(enable=false, channel=725, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint725(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint726(enable=false, channel=726, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint726(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint727(enable=false, channel=727, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint727(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint728(enable=false, channel=728, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint728(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint729(enable=false, channel=729, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint729(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint730(enable=false, channel=730, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint730(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint731(enable=false, channel=731, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint731(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint732(enable=false, channel=732, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint732(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint733(enable=false, channel=733, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint733(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint734(enable=false, channel=734, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint734(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint735(enable=false, channel=735, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint735(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint736(enable=false, channel=736, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint736(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint737(enable=false, channel=737, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint737(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint738(enable=false, channel=738, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint738(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint739(enable=false, channel=739, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint739(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint740(enable=false, channel=740, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint740(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint741(enable=false, channel=741, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint741(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint742(enable=false, channel=742, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint742(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint743(enable=false, channel=743, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint743(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint744(enable=false, channel=744, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint744(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint745(enable=false, channel=745, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint745(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint746(enable=false, channel=746, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint746(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint747(enable=false, channel=747, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint747(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint748(enable=false, channel=748, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint748(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint749(enable=false, channel=749, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint749(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint750(enable=false, channel=750, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint750(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint751(enable=false, channel=751, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint751(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint752(enable=false, channel=752, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint752(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint753(enable=false, channel=753, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint753(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint754(enable=false, channel=754, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint754(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint755(enable=false, channel=755, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint755(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint756(enable=false, channel=756, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint756(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint757(enable=false, channel=757, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint757(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint758(enable=false, channel=758, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint758(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint759(enable=false, channel=759, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint759(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint760(enable=false, channel=760, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint760(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint761(enable=false, channel=761, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint761(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint762(enable=false, channel=762, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint762(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint763(enable=false, channel=763, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint763(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint764(enable=false, channel=764, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint764(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint765(enable=false, channel=765, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint765(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint766(enable=false, channel=766, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint766(void)
{
    unused_isr();
}

/* Reserved */
#if defined (__CCRH__)
#pragma interrupt eiint767(enable=false, channel=767, fpu=true, callt=false)
#elif defined (__ghs__)
#pragma ghs interrupt
#elif defined (__ICCRH850__)
#pragma type_attribute=__interrupt
#else
#error Unknown Compiler
#endif
void eiint767(void)
{
    unused_isr();
}

