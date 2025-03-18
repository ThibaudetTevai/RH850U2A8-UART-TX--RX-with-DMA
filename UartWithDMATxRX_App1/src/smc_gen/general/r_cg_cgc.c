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
* File Name        : r_cg_cgc.c
* Version          : 1.6.1
* Device(s)        : R7F702301B
* Description      : This file contains clock setting according to Clocks tabs setting.
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
#include "r_cg_cgc.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
volatile uint32_t g_cg_sync_read;
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_CGC_Create
* Description  : This function initializes the CLOCK.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_CGC_Create(void)
{
    uint8_t i;

    /* HS IntOSC setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.HSOSCSTPM.UINT32 = _CGC_HSOSC_REQUEST_STOP;
    while ((SYSCTRL.HSOSCS.UINT32 & _CGC_HSOSC_ACTIVE) != _CGC_HSOSC_ACTIVE)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* MainOSC setting */
    /* Please set source code at option byte */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.MOSCSTPM.UINT32 = _CGC_MAINOSC_REQUEST_STOP;
    SYSCTRL.MOSCE.UINT32 = _CGC_MAINOSC_START;
    while ((SYSCTRL.MOSCS.UINT32 & _CGC_MAINOSC_ACTIVE) != _CGC_MAINOSC_ACTIVE)
    {
        NOP();
    }
    for (i = 0; (i < 4) && (SYSCTRL.MOSCS.BIT.MOSCSTAB == 1); i++ )
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* CPU clock setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.CKSC_CPUC.UINT32 = _CGC_CPU_CLK_SOURCE_IOSC;
    while (SYSCTRL.CKSC_CPUS.UINT32 != _CGC_CPU_CLK_SOURCE_IOSC)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* RLIN clock domain setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.CKSC_RLINC.UINT32 = _CGC_RLIN_CLK_SOURCE_HSB;
    while (SYSCTRL.CKSC_RLINS.UINT32 != _CGC_RLIN_CLK_SOURCE_HSB)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* RS-CANFD(V4) clock domains setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.CKSC_RCANC.UINT32 = _CGC_RCAN_CLK_SOURCE_MAINOSC_1;
    while (SYSCTRL.CKSC_RCANS.UINT32 != _CGC_RCAN_CLK_SOURCE_MAINOSC_1)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* ADCJn clock domains setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.CKSC_ADCC.UINT32 = _CGC_ADC_CLK_SOURCE_LSB_2;
    while (SYSCTRL.CKSC_ADCS.UINT32 != _CGC_ADC_CLK_SOURCE_LSB_2)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* MSPI clock domains setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.CKSC_MSPIC.UINT32 = _CGC_MSPIS_CLK_SOURCE_HSB;
    while (SYSCTRL.CKSC_MSPIS.UINT32 != _CGC_MSPIS_CLK_SOURCE_HSB)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* WDTBA clock domains setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.CKSC_AWDTC.UINT32 = _CGC_AWDT_CLK_SOURCE_LSOSC_128;
    while (SYSCTRL.CKSC_AWDTS.UINT32 != _CGC_AWDT_CLK_SOURCE_LSOSC_128)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* TAUJ clock domains setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.CKSC_ATAUJC.UINT32 = _CGC_ATAUJ_CLK_SOURCE_HSOSC_20;
    while (SYSCTRL.CKSC_ATAUJS.UINT32 != _CGC_ATAUJ_CLK_SOURCE_HSOSC_20)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* RTCA clock domains setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.CKSC_ARTCAC.UINT32 = _CGC_ARTCA_CLK_SOURCE_LSOSC;
    while (SYSCTRL.CKSC_ARTCAS.UINT32 != _CGC_ARTCA_CLK_SOURCE_LSOSC)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* ADCJ2 clock domains setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.CKSC_AADCC.UINT32 = _CGC_AADC_CLK_SOURCE_HSOSC_20;
    while (SYSCTRL.CKSC_AADCS.UINT32 != _CGC_AADC_CLK_SOURCE_HSOSC_20)
    {
        NOP();
    }
    SYSCTRL.CLKD_AADCC.UINT32 = _CGC_AADC_CLK_DIVIDER_1;
    while (SYSCTRL.CLKD_AADCS.UINT32 != _CGC_AADC_CLK_DIVIDER_1)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* WDTBn clock domains setting */
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_ENABLE;
    SYSCTRL.CKSC_WDTC.UINT32 = _CGC_WDT_CLK_SOURCE_HSOSC_640;
    while (SYSCTRL.CKSC_WDTS.UINT32 != _CGC_WDT_CLK_SOURCE_HSOSC_640)
    {
        NOP();
    }
    SYSCTRL.CLKKCPROT1.UINT32 = _WRITE_PROTECT_DISABLE;
    /* Synchronization processing */
    g_cg_sync_read = SYSCTRL.CKSC_CPUC.UINT32;
    __syncp();

    R_CGC_Create_UserInit();
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
