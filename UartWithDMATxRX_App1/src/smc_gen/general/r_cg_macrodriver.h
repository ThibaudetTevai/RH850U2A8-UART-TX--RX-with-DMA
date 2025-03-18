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
* File Name        : r_cg_macrodriver.h
* Version          : 1.0.150
* Device(s)        : R7F702301BEBBA
* Description      : Macro header file for code generation.
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "iodefine.h"

#ifndef MODULEID_H
#define MODULEID_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
#ifndef __TYPEDEF__
#define DI()          __DI()
#define EI()          __EI()
#define HALT()        __halt()
#define NOP()         __nop()
#define SETBIT(x)     (1U << x)
#endif
/* Status list definition */
#define MD_STATUSBASE        (0x00U)
#define MD_OK                (MD_STATUSBASE + 0x00U) /* register setting OK */
#define MD_SPT               (MD_STATUSBASE + 0x01U) /* IIC stop */
#define MD_NACK              (MD_STATUSBASE + 0x02U) /* IIC no ACK */
#define MD_BUSY1             (MD_STATUSBASE + 0x03U) /* busy 1 */
#define MD_BUSY2             (MD_STATUSBASE + 0x04U) /* busy 2 */
#define MD_OVERRUN           (MD_STATUSBASE + 0x05U) /* IIC OVERRUN occur */
/* Error list definition */
#define MD_ERRORBASE         (0x80U)
#define MD_ERROR             (MD_ERRORBASE + 0x00U)  /* error */
#define MD_ARGERROR          (MD_ERRORBASE + 0x01U)  /* error argument input error */
#define MD_ERROR1            (MD_ERRORBASE + 0x02U)  /* error 1 */
#define MD_ERROR2            (MD_ERRORBASE + 0x03U)  /* error 2 */
#define MD_ERROR3            (MD_ERRORBASE + 0x04U)  /* error 3 */
#define MD_ERROR4            (MD_ERRORBASE + 0x05U)  /* error 4 */
#define MD_ERROR5            (MD_ERRORBASE + 0x06U)  /* error 5 */
/* Interrupt request flag (RFxxx) */
#define _INT_REQUEST_NOT_OCCUR              (0x0U)  /* No interrupt request is made */
/* Interrupt mask (MKxxx) */
#define _INT_PROCESSING_ENABLED             (0x0U)  /* Enables interrupt processing */
#define _INT_PROCESSING_DISABLED            (0x1U)  /* Disables interrupt processing */
/* Interrupt vector method select (TBxxx) */
#define _INT_DIRECT_VECTOR                  (0x0U)  /* Direct jumping to an address by the level of priority */
#define _INT_TABLE_VECTOR                   (0x1U)  /* Table reference */
/* Specify 16 interrupt priority levels (P3xxx,P2xxx,P1xxx,P0xxx) */
#define _INT_PRIORITY_HIGHEST               (0x00C0U)  /* Level 0 (highest) */
#define _INT_PRIORITY_LEVEL1                (0x00C1U)  /* Level 1 */
#define _INT_PRIORITY_LEVEL2                (0x00C2U)  /* Level 2 */
#define _INT_PRIORITY_LEVEL3                (0x00C3U)  /* Level 3 */
#define _INT_PRIORITY_LEVEL4                (0x00C4U)  /* Level 4 */
#define _INT_PRIORITY_LEVEL5                (0x00C5U)  /* Level 5 */
#define _INT_PRIORITY_LEVEL6                (0x00C6U)  /* Level 6 */
#define _INT_PRIORITY_LEVEL7                (0x00C7U)  /* Level 7 */
#define _INT_PRIORITY_LEVEL8                (0x00C8U)  /* Level 8 */
#define _INT_PRIORITY_LEVEL9                (0x00C9U)  /* Level 9 */
#define _INT_PRIORITY_LEVEL10               (0x00CAU)  /* Level 10 */
#define _INT_PRIORITY_LEVEL11               (0x00CBU)  /* Level 11 */
#define _INT_PRIORITY_LEVEL12               (0x00CCU)  /* Level 12 */
#define _INT_PRIORITY_LEVEL13               (0x00CDU)  /* Level 13 */
#define _INT_PRIORITY_LEVEL14               (0x00CEU)  /* Level 14 */
#define _INT_PRIORITY_LOWEST                (0x00CFU)  /* Level 15 (lowest) */

/*
    This register controls the analog and digital filter operation. (FCLACTLm_<name>)
*/
/* Detection function selection (INTL, INTF, INTR) */
#define _FILTER_DETECTION_EDGE_RISING       (0x01U)  /* Rising edge detection */
#define _FILTER_DETECTION_EDGE_FALLING      (0x02U)  /* Falling edge detection */
#define _FILTER_DETECTION_EDGE_BOTH         (0x03U)  /* Both edge detection */
#define _FILTER_DETECTION_LEVEL_LOW         (0x04U)  /* Low level detection */
#define _FILTER_DETECTION_LEVEL_HIGH        (0x05U)  /* High level detection */

/*
    Digital Noise Elimination Control Register (DNFACTL_<name>)
*/
/* Specify the number of samples used to judge whether an external signal pulse is valid(NFSTS1,NFSTS0) */
#define _DIGITAL_FILTER_SAMPLING_NUMBER_2   (0x00U) /* Sampling count = 2 */
#define _DIGITAL_FILTER_SAMPLING_NUMBER_3   (0x20U) /* Sampling count = 3 */
#define _DIGITAL_FILTER_SAMPLING_NUMBER_4   (0x40U) /* Sampling count = 4 */
#define _DIGITAL_FILTER_SAMPLING_NUMBER_5   (0x60U) /* Sampling count = 5 */
/* Digital filter sampling clock selection(PRS2,PRS1,PRS0) */
#define _DIGITAL_FILTER_SAMPLING_CLOCK_1    (0x00U) /* Sampling clock supply/1 */
#define _DIGITAL_FILTER_SAMPLING_CLOCK_2    (0x01U) /* Sampling clock supply/2 */
#define _DIGITAL_FILTER_SAMPLING_CLOCK_4    (0x02U) /* Sampling clock supply/4 */
#define _DIGITAL_FILTER_SAMPLING_CLOCK_8    (0x03U) /* Sampling clock supply/8 */
#define _DIGITAL_FILTER_SAMPLING_CLOCK_16   (0x04U) /* Sampling clock supply/16 */
#define _DIGITAL_FILTER_SAMPLING_CLOCK_32   (0x05U) /* Sampling clock supply/32 */
#define _DIGITAL_FILTER_SAMPLING_CLOCK_64   (0x06U) /* Sampling clock supply/64 */
#define _DIGITAL_FILTER_SAMPLING_CLOCK_128  (0x07U) /* Sampling clock supply/128 */

/*
    Digital Noise Elimination Enable Register/H Register/L Register (DNFAEN_<name>/DNFAENH_<name>/DNFAENL_<name>)
*/
#define _DIGITAL_FILTER_DISABLE             (0U)  /* Disable digital noise elimination */
#define _DIGITAL_FILTER_ENABLED             (1U)  /* Enable digital noise elimination */

/*
    Port Control Register (PCRn_m)
*/
/* Port Control Register Default Value (PCR_DEFAULT) */
#define _PCR_DEFAULT_VALUE                  (0x5B5E0000UL) /* Default Value */
/* Analog Input Mode Selection (PCR_ANALOG) */
#define _PCR_ANALOG_INPUT                   (0x00000010UL) /* Analog input */
/* Alternative Mode Selection (ALT_MODE) */
#define _PCR_ALT_IN1                        (0x00000050UL) /* Alternative input mode 1 */
#define _PCR_ALT_IN2                        (0x00000051UL) /* Alternative input mode 2 */
#define _PCR_ALT_IN3                        (0x00000052UL) /* Alternative input mode 3 */
#define _PCR_ALT_IN4                        (0x00000053UL) /* Alternative input mode 4 */
#define _PCR_ALT_IN5                        (0x00000054UL) /* Alternative input mode 5 */
#define _PCR_ALT_IN6                        (0x00000055UL) /* Alternative input mode 6 */
#define _PCR_ALT_IN7                        (0x00000056UL) /* Alternative input mode 7 */
#define _PCR_ALT_IN8                        (0x00000057UL) /* Alternative input mode 8 */
#define _PCR_ALT_OUT1                       (0x00000040UL) /* Alternative output mode 1 */
#define _PCR_ALT_OUT2                       (0x00000041UL) /* Alternative output mode 2 */
#define _PCR_ALT_OUT3                       (0x00000042UL) /* Alternative output mode 3 */
#define _PCR_ALT_OUT4                       (0x00000043UL) /* Alternative output mode 4 */
#define _PCR_ALT_OUT5                       (0x00000044UL) /* Alternative output mode 5 */
#define _PCR_ALT_OUT6                       (0x00000045UL) /* Alternative output mode 6 */
#define _PCR_ALT_OUT7                       (0x00000046UL) /* Alternative output mode 7 */
#define _PCR_ALT_OUT8                       (0x00000047UL) /* Alternative output mode 8 */
/* Direct I/O Alternative Mode Selection (DIRECT_ALT_MODE) */
#define _PCR_DIRECT_ALT_MODE1               (0x00000060UL) /* Direct I/O mode 1 */
#define _PCR_DIRECT_ALT_MODE2               (0x00000061UL) /* Direct I/O mode 2 */
#define _PCR_DIRECT_ALT_MODE3               (0x00000062UL) /* Direct I/O mode 3 */
#define _PCR_DIRECT_ALT_MODE4               (0x00000063UL) /* Direct I/O mode 4 */
#define _PCR_DIRECT_ALT_MODE5               (0x00000064UL) /* Direct I/O mode 5 */
#define _PCR_DIRECT_ALT_MODE6               (0x00000065UL) /* Direct I/O mode 6 */
#define _PCR_DIRECT_ALT_MODE7               (0x00000066UL) /* Direct I/O mode 7 */
#define _PCR_DIRECT_ALT_MODE8               (0x00000067UL) /* Direct I/O mode 8 */
/* Specify input/output mode of the corresponding pin (SET_PM) */
#define _PCR_SET_PM                         (0x00000010UL) /* Input mode */
/* Specify input/output mode of the corresponding pin (CLEAR_PM) */
#define _PCR_CLEAR_PM                       (0xFFFFFFEFUL) /* Input mode */
/* Specify the operation mode of the corresponding pin: (SET_PMC) */
#define _PCR_SET_PMC                        (0x00000040UL) /* Alternative mode */
/* Specify input/output mode of the corresponding pin (SET_PBDC) */
#define _PCR_SET_PBDC                       (0x00020000UL) /* Bi-Direction mode */
/* Specify the port drive strength of the output buffer of the port pin (SET_PDSC) */
#define _PCR_SET_PDSC                       (0x01000000UL) /* Set PDSC bit */
/* Specify the port drive strength of the output buffer of the port pin (CLEAR_PDSC) */
#define _PCR_CLEAR_PDSC                     (0xFEFFFFFFUL) /* CLEAR PDSC bit */
/* Specify the port drive strength of the output buffer of the port pin (SET_PUCC) */
#define _PCR_SET_PUCC                       (0x02000000UL) /* Set PUCC bit */
/* Specify the port drive strength of the output buffer of the port pin (SET_PUCC) */
#define _PCR_CLEAR_PUCC                     (0xFDFFFFFFUL) /* Clear PUCC bit */
/* Specify input/output mode of the corresponding pin (SET_PODC) */
#define _PCR_SET_PODC                       (0x10000000UL) /* Open-drain mode */
/* For I/O Alternative Mode, PBDC/PIBC setting (DIRECT_ALT_SETTING) */
#define _PCR_ALT_OUT_SETTING                (0xFFFCFFFFUL) /* ALT Output setting */
#define _PCR_DIRECT_ALT_MODE_SETTING        (0xFFFCFFFFUL) /* Direct ALT mode setting */
/* Write protected macro definition */
#define _WRITE_PROTECT_ENABLE               (0xA5A5A501UL)  /* Write protected */
#define _WRITE_PROTECT_DISABLE              (0xA5A5A500UL)  /* Write protected */
#define _PORT_WRITE_PROTECT_DISABLE         (0x00000000UL)  /* Write protected */
/* Specify the interrupt bind (request) destination */
#define _INT_CPU_PE0                        (0x00000000UL)  /* Bound to PE0 */
#define _INT_CPU_PE1                        (0x00000001UL)  /* Bound to PE1 */
#define _INT_CPU_PE2                        (0x00000002UL)  /* Bound to PE2 */
#define _INT_CPU_PE3                        (0x00000003UL)  /* Bound to PE3 */

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/
#ifndef __TYPEDEF__
    typedef signed char           int8_t;
    typedef unsigned char         uint8_t;
    typedef signed short          int16_t;
    typedef unsigned short        uint16_t;
    typedef signed long           int32_t;
    typedef unsigned long         uint32_t;
    typedef signed long long      int64_t;
    typedef unsigned long long    uint64_t;
    typedef unsigned short        MD_STATUS;
    #define __TYPEDEF__
#endif

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Systeminit(void);
void R_Interrupt_Initialize_ForPE(void);
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
