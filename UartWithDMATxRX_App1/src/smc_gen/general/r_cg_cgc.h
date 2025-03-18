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
* File Name        : r_cg_cgc.h
* Version          : 1.6.1
* Device(s)        : R7F702301B
* Description      : This file contains macro define for clock setting according to Clocks tabs setting.
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/

#ifndef R_CGC_H
#define R_CGC_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    PLL Enable Register PLLE
*/
/* PLL disable trigger (PLLDISTRG) */
#define _CGC_PLL_STOP                        (0x00000002UL) /* Stops PLL */
/* PLL enable trigger (PLLENTRG) */
#define _CGC_PLL_START                       (0x00000001UL) /* Starts PLL */

/*
    PLL Status Register (PLLS)
*/
/* PLL stable status (PLLCLKSTAB) */
#define _CGC_PLL_ACTIVE                      (0x00000003UL) /* PLL is active */

/* PLL stop request mask (PLLSTPMSK) */
#define _CGC_PLL_REQUEST_STOP                (0x00000000UL) /* PLL stops operation in standby mode */
#define _CGC_PLL_REQUEST_CONTINUE            (0x00000001UL) /* PLL continues operation in standby mode */

/*
    MainOSC Enable Register MOSCE
*/
/* MainOSC disable trigger (MOSCDISTRG) */
#define _CGC_MAINOSC_STOP                    (0x00000002UL) /* Stops MainOSC */
/* MainOSC enable trigger (MOSCENTRG) */
#define _CGC_MAINOSC_START                   (0x00000001UL) /* Starts MainOSC */

/*
    MainOSC Status Register (MOSCS)
*/
/* MainOSC active status (MOSCCLKACT) */
#define _CGC_MAINOSC_ACTIVE                  (0x00000003UL) /* MainOSC is active */

/*
    MainOSC Stop Mask Register (MOSCSTPM)
*/
/* MainOSC stop request mask (MOSCSTPMSK) */
#define _CGC_MAINOSC_REQUEST_STOP            (0x00000000UL) /* MainOSC stops operation in standby mode */
#define _CGC_MAINOSC_REQUEST_CONTINUE        (0x00000001UL) /* MainOSC continues operation in standby mode */

/*
    HS IntOSC Status Register (HSOSCS)
*/
/* HS IntOSC active status (HSOSCSTAB) */
#define _CGC_HSOSC_ACTIVE                    (0x00000002UL) /* HS IntOSC is active */

/*
    HS IntOSC Stop Mask Register (HSOSCSTPM)
*/
/* HS IntOSC Stop Request Mask (HSOSCSTPMSK) */
#define _CGC_HSOSC_REQUEST_STOP              (0x00000000UL) /* HS IntOSC stops operation in standby mode */
#define _CGC_HSOSC_REQUEST_CONTINUE          (0x00000001UL) /* HS IntOSC continues operation in standby mode */

/*
    CLK_CPU Selector Control Register(CKSC_CPUC)
*/
/* Clock source control(CPUCLKSCSID) */
#define _CGC_CPU_CLK_SOURCE_IOSC             (0x00000001UL) /* CLK_IOSC (default) */
#define _CGC_CPU_CLK_SOURCE_PLLO             (0x00000000UL) /* CLK_PLLO */

/*
    CLK_PLLO Divider Control Register(CLKD_PLLC)
*/
/* Clock Divider control(PLLCLKDCSID) */
#define _CGC_CLK_PLLO_DIVIDER_1              (0x00000001UL) /* No division (default) */
#define _CGC_CLK_PLLO_DIVIDER_2              (0x00000002UL) /* Divided by 2 */

/*
    CLK_PLLO Divider Status Register(CLKD_PLLS)
*/
/* Divider clock synchronized(PLLCLKDSYNC) */
#define _CGC_PLLC_DIVIDER_SYNC               (0x00000002UL) /* Clock output corresponds to the actual divisor setting
                                                               in PLLCLKDCSID */

/*
    CLK_RLIN Selector Control Register(CKSC_RLINC)
*/
/* Clock source control(RLINSCSID) */
#define _CGC_RLIN_CLK_SOURCE_HSB             (0x00000001UL) /* HSB */
#define _CGC_RLIN_CLK_SOURCE_MAINOSC_1       (0x00000000UL) /* MainOSC / 1 */
#define _CGC_RLIN_CLK_SOURCE_MAINOSC_4       (0x00000002UL) /* MainOSC / 4 */
#define _CGC_RLIN_CLK_SOURCE_MAINOSC_8       (0x00000003UL) /* MainOSC / 8 */

/*
    CLK_RCANOSC Selector Control Register(CKSC_RCANC)
*/
/* Clock source control(RCANSCSID) */
#define _CGC_RCAN_CLK_SOURCE_MAINOSC_1       (0x00000001UL) /* MainOSC / 1 */
#define _CGC_RCAN_CLK_SOURCE_MAINOSC_2       (0x00000002UL) /* MainOSC / 2 */
#define _CGC_RCAN_CLK_SOURCE_MAINOSC_4       (0x00000003UL) /* MainOSC / 4 */

/*
    CLK_ADC Selector Control Register(CKSC_ADCC)
*/
/* Clock source control(ADCSCSID) */
#define _CGC_ADC_CLK_SOURCE_LSB_1            (0x00000000UL) /* LSB / 1 */
#define _CGC_ADC_CLK_SOURCE_LSB_2            (0x00000001UL) /* LSB / 2 */

/*
    CLK_MSPI Selector Control Register(CKSC_MSPIC)
*/
/* Clock source control(MSPISCSID) */
#define _CGC_MSPIS_CLK_SOURCE_MAINOSC        (0x00000000UL) /* MainOSC */
#define _CGC_MSPIS_CLK_SOURCE_HSB            (0x00000001UL) /* HSB */

/*
    CLKA_WDT Selector Control Register(CKSC_AWDTC)
*/
/* Clock source control(AWDTSCSID) */
#define _CGC_AWDT_CLK_SOURCE_LSOSC_1         (0x00000000UL) /* LSOSC / 1 */
#define _CGC_AWDT_CLK_SOURCE_LSOSC_128       (0x00000001UL) /* LSOSC / 128 */

/*
    CLKA_TAUJ Selector Control Register(CKSC_ATAUJC)
*/
/* Clock source control(ATAUJSCSID) */
#define _CGC_ATAUJ_CLK_SOURCE_LSOSC          (0x00000000UL) /* LSOSC / 1 */
#define _CGC_ATAUJ_CLK_SOURCE_HSOSC_20       (0x00000001UL) /* LSOSC / 20 */
#define _CGC_ATAUJ_CLK_SOURCE_MAINOSC        (0x00000002UL) /* MainOSC */
#define _CGC_ATAUJ_CLK_SOURCE_HSB            (0x00000003UL) /* HSB */

/*
    CLKA_RTCA Selector Control Register(CKSC_ARTCAC)
*/
/* Clock source control(ARTCASCSID) */
#define _CGC_ARTCA_CLK_SOURCE_MAINOSC_16     (0x00000000UL) /* MainOSC / 16 */
#define _CGC_ARTCA_CLK_SOURCE_LSOSC          (0x00000001UL) /* LSOSC */

/*
    CLKA_ADC Selector Control Register(CKSC_AADCC)
*/
/* Clock source control(AADCSCSID) */
#define _CGC_AADC_CLK_SOURCE_MAINOSC         (0x00000000UL) /* MainOSC */
#define _CGC_AADC_CLK_SOURCE_HSOSC_20        (0x00000001UL) /* HSOSC / 20 */
#define _CGC_AADC_CLK_SOURCE_LSB             (0x00000002UL) /* LSB */

/*
    CLKA_ADC Divider Control Register(CLKD_AADCC)
*/
/* Clock Divider control(AADCDCSID) */
#define _CGC_AADC_CLK_DIVIDER_1              (0x00000001UL) /* CKSC_AADCC selection / 1 */
#define _CGC_AADC_CLK_DIVIDER_2              (0x00000000UL) /* CKSC_AADCC selection / 2 */

/*
    FOUT0 Clock Selector Control Register(CKSC_FOUT0C)
*/
/* Source Clock Setting for EXTCLK0O(FOUT0SCSID) */
#define _CGC_FOUT0_CLK_SOURCE_MAINOSC        (0x00000000UL) /* MainOSC */
#define _CGC_FOUT0_CLK_SOURCE_HSB            (0x00000001UL) /* HSB */
#define _CGC_FOUT0_CLK_SOURCE_LSOSC          (0x00000003UL) /* LSOSC */
#define _CGC_FOUT0_CLK_SOURCE_HSOSC_20       (0x00000004UL) /* HSOSC / 20 */

/*
    FOUT0 Clock Divider Status Register(CLKD_FOUT0S)
*/
/* Clock Divider Active(FOUT0CLKACT) */
#define _CGC_FOUT0_OUTPUT_ONGOING            (0x00000002UL) /* Frequency output is ongoing */
/* Clock Divider Synchronized(FOUT0SYNC) */
#define _CGC_FOUT0_DIVIDER_STABLE            (0x00000001UL) /* The clock divider is stable */

/*
    FOUT1 Clock Selector Control Register(CKSC_FOUT1C)
*/
/* Source Clock Setting for EXTCLK1O(FOUT1SCSID) */
#define _CGC_FOUT1_CLK_SOURCE_MAINOSC        (0x00000000UL) /* MainOSC */
#define _CGC_FOUT1_CLK_SOURCE_HSB            (0x00000001UL) /* HSB */
#define _CGC_FOUT1_CLK_SOURCE_LSOSC          (0x00000003UL) /* LSOSC */
#define _CGC_FOUT1_CLK_SOURCE_HSOSC_20       (0x00000004UL) /* HSOSC / 20 */

/*
    FOUT1 Clock Divider Status Register(CLKD_FOUT1S)
*/
/* Clock Divider Active(FOUT1CLKACT) */
#define _CGC_FOUT1_OUTPUT_ONGOING            (0x00000002UL) /* Frequency output is ongoing */
/* Clock Divider Synchronized(FOUT1SYNC) */
#define _CGC_FOUT1_DIVIDER_STABLE            (0x00000001UL) /* The clock divider is stable */

/*
    CLK_WDT Selector Control Register(CKSC_WDTC)
*/
/* Clock source control(WDTSCSID) */
#define _CGC_WDT_CLK_SOURCE_HSOSC_20         (0x00000000UL) /* HSOSC / 20 */
#define _CGC_WDT_CLK_SOURCE_HSOSC_640        (0x00000001UL) /* HSOSC / 640 */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_CGC_Create(void);
void R_CGC_Create_UserInit(void);
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
