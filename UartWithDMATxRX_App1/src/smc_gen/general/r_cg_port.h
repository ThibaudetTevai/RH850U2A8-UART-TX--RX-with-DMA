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
* File Name        : r_cg_port.h
* Version          : 1.0.150
* Device(s)        : R7F702301BEBBA
* Description      : General header file for PORT peripheral.
***********************************************************************************************************************/

#ifndef PORT_H
#define PORT_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    Port mode register (PMn)
*/
/* PMn0 Specifies input/output mode of the corresponding pin (PMn0) */
#define _PORT_PMn0_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn0_MODE_INPUT                     (0x0001U) /* input mode (output buffer off) */
#define _PORT_PMn0_MODE_UNUSED                    (0x0001U) /* unused mode */
/* PMn1 Specifies input/output mode of the corresponding pin (PMn1) */
#define _PORT_PMn1_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn1_MODE_INPUT                     (0x0002U) /* input mode (output buffer off) */
#define _PORT_PMn1_MODE_UNUSED                    (0x0002U) /* unused mode */
/* PMn2 Specifies input/output mode of the corresponding pin (PMn2) */
#define _PORT_PMn2_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn2_MODE_INPUT                     (0x0004U) /* input mode (output buffer off) */
#define _PORT_PMn2_MODE_UNUSED                    (0x0004U) /* unused mode */
/* PMn3 pin I/O Specifies input/output mode of the corresponding pin (PMn3) */
#define _PORT_PMn3_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn3_MODE_INPUT                     (0x0008U) /* input mode (output buffer off) */
#define _PORT_PMn3_MODE_UNUSED                    (0x0008U) /* unused mode */
/* PMn4 Specifies input/output mode of the corresponding pin (PMn4) */
#define _PORT_PMn4_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn4_MODE_INPUT                     (0x0010U) /* input mode (output buffer off) */
#define _PORT_PMn4_MODE_UNUSED                    (0x0010U) /* unused mode */
/* PMn5 Specifies input/output mode of the corresponding pin (PMn5) */
#define _PORT_PMn5_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn5_MODE_INPUT                     (0x0020U) /* input mode (output buffer off) */
#define _PORT_PMn5_MODE_UNUSED                    (0x0020U) /* unused mode */
/* PMn6 Specifies input/output mode of the corresponding pin (PMn6) */
#define _PORT_PMn6_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn6_MODE_INPUT                     (0x0040U) /* input mode (output buffer off) */
#define _PORT_PMn6_MODE_UNUSED                    (0x0040U) /* unused mode */
/* PMn7 Specifies input/output mode of the corresponding pin (PMn7) */
#define _PORT_PMn7_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn7_MODE_INPUT                     (0x0080U) /* input mode (output buffer off) */
#define _PORT_PMn7_MODE_UNUSED                    (0x0080U) /* unused mode */
/* PMn8 Specifies input/output mode of the corresponding pin (PMn8) */
#define _PORT_PMn8_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn8_MODE_INPUT                     (0x0100U) /* input mode (output buffer off) */
#define _PORT_PMn8_MODE_UNUSED                    (0x0100U) /* unused mode */
/* PMn9 Specifies input/output mode of the corresponding pin (PMn9) */
#define _PORT_PMn9_MODE_OUTPUT                    (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn9_MODE_INPUT                     (0x0200U) /* input mode (output buffer off) */
#define _PORT_PMn9_MODE_UNUSED                    (0x0200U) /* unused mode */
/* PMn10 Specifies input/output mode of the corresponding pin (PMn10) */
#define _PORT_PMn10_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn10_MODE_INPUT                    (0x0400U) /* input mode (output buffer off) */
#define _PORT_PMn10_MODE_UNUSED                   (0x0400U) /* unused mode */
/* PMn11 Specifies input/output mode of the corresponding pin (PMn11) */
#define _PORT_PMn11_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn11_MODE_INPUT                    (0x0800U) /* input mode (output buffer off) */
#define _PORT_PMn11_MODE_UNUSED                   (0x0800U) /* unused mode */
/* PMn12 Specifies input/output mode of the corresponding pin (PMn12) */
#define _PORT_PMn12_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn12_MODE_INPUT                    (0x1000U) /* input mode (output buffer off) */
#define _PORT_PMn12_MODE_UNUSED                   (0x1000U) /* unused mode */
/* PMn13 Specifies input/output mode of the corresponding pin (PMn13) */
#define _PORT_PMn13_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn13_MODE_INPUT                    (0x2000U) /* input mode (output buffer off) */
#define _PORT_PMn13_MODE_UNUSED                   (0x2000U) /* unused mode */
/* PMn14 Specifies input/output mode of the corresponding pin (PMn14) */
#define _PORT_PMn14_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn14_MODE_INPUT                    (0x4000U) /* input mode (output buffer off) */
#define _PORT_PMn14_MODE_UNUSED                   (0x4000U) /* unused mode */
/* PMn15 Specifies input/output mode of the corresponding pin (PMn15) */
#define _PORT_PMn15_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_PMn15_MODE_INPUT                    (0x8000U) /* input mode (output buffer off) */
#define _PORT_PMn15_MODE_UNUSED                   (0x8000U) /* unused mode */

/*
    Port mode register (APMn)
*/
/* APMn0 Specifies input/output mode of the corresponding pin (APMn0) */
#define _PORT_APMn0_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn0_MODE_INPUT                    (0x0001U) /* input mode (output buffer off) */
#define _PORT_APMn0_MODE_UNUSED                   (0x0001U) /* unused mode */
/* APMn1 Specifies input/output mode of the corresponding pin (APMn1) */
#define _PORT_APMn1_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn1_MODE_INPUT                    (0x0002U) /* input mode (output buffer off) */
#define _PORT_APMn1_MODE_UNUSED                   (0x0002U) /* unused mode */
/* APMn2 Specifies input/output mode of the corresponding pin (APMn2) */
#define _PORT_APMn2_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn2_MODE_INPUT                    (0x0004U) /* input mode (output buffer off) */
#define _PORT_APMn2_MODE_UNUSED                   (0x0004U) /* unused mode */
/* APMn3 pin I/O Specifies input/output mode of the corresponding pin (APMn3) */
#define _PORT_APMn3_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn3_MODE_INPUT                    (0x0008U) /* input mode (output buffer off) */
#define _PORT_APMn3_MODE_UNUSED                   (0x0008U) /* unused mode */
/* APMn4 Specifies input/output mode of the corresponding pin (APMn4) */
#define _PORT_APMn4_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn4_MODE_INPUT                    (0x0010U) /* input mode (output buffer off) */
#define _PORT_APMn4_MODE_UNUSED                   (0x0010U) /* unused mode */
/* APMn5 Specifies input/output mode of the corresponding pin (APMn5) */
#define _PORT_APMn5_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn5_MODE_INPUT                    (0x0020U) /* input mode (output buffer off) */
#define _PORT_APMn5_MODE_UNUSED                   (0x0020U) /* unused mode */
/* APMn6 Specifies input/output mode of the corresponding pin (APMn6) */
#define _PORT_APMn6_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn6_MODE_INPUT                    (0x0040U) /* input mode (output buffer off) */
#define _PORT_APMn6_MODE_UNUSED                   (0x0040U) /* unused mode */
/* APMn7 Specifies input/output mode of the corresponding pin (APMn7) */
#define _PORT_APMn7_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn7_MODE_INPUT                    (0x0080U) /* input mode (output buffer off) */
#define _PORT_APMn7_MODE_UNUSED                   (0x0080U) /* unused mode */
/* APMn8 Specifies input/output mode of the corresponding pin (APMn8) */
#define _PORT_APMn8_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn8_MODE_INPUT                    (0x0100U) /* input mode (output buffer off) */
#define _PORT_APMn8_MODE_UNUSED                   (0x0100U) /* unused mode */
/* APMn9 Specifies input/output mode of the corresponding pin (APMn9) */
#define _PORT_APMn9_MODE_OUTPUT                   (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn9_MODE_INPUT                    (0x0200U) /* input mode (output buffer off) */
#define _PORT_APMn9_MODE_UNUSED                   (0x0200U) /* unused mode */
/* APMn10 Specifies input/output mode of the corresponding pin (APMn10) */
#define _PORT_APMn10_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn10_MODE_INPUT                   (0x0400U) /* input mode (output buffer off) */
#define _PORT_APMn10_MODE_UNUSED                  (0x0400U) /* unused mode */
/* APMn11 Specifies input/output mode of the corresponding pin (APMn11) */
#define _PORT_APMn11_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn11_MODE_INPUT                   (0x0800U) /* input mode (output buffer off) */
#define _PORT_APMn11_MODE_UNUSED                  (0x0800U) /* unused mode */
/* APMn12 Specifies input/output mode of the corresponding pin (APMn12) */
#define _PORT_APMn12_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn12_MODE_INPUT                   (0x1000U) /* input mode (output buffer off) */
#define _PORT_APMn12_MODE_UNUSED                  (0x1000U) /* unused mode */
/* APMn13 Specifies input/output mode of the corresponding pin (APMn13) */
#define _PORT_APMn13_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn13_MODE_INPUT                   (0x2000U) /* input mode (output buffer off) */
#define _PORT_APMn13_MODE_UNUSED                  (0x2000U) /* unused mode */
/* APMn14 Specifies input/output mode of the corresponding pin (APMn14) */
#define _PORT_APMn14_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn14_MODE_INPUT                   (0x4000U) /* input mode (output buffer off) */
#define _PORT_APMn14_MODE_UNUSED                  (0x4000U) /* unused mode */
/* APMn15 Specifies input/output mode of the corresponding pin (APMn15) */
#define _PORT_APMn15_MODE_OUTPUT                  (0x0000U) /* output mode (output buffer on) */
#define _PORT_APMn15_MODE_INPUT                   (0x8000U) /* input mode (output buffer off) */
#define _PORT_APMn15_MODE_UNUSED                  (0x8000U) /* unused mode */

/*
    JTAG port mode register (JPMn)
*/
/* JPMn0 Specifies input/output mode of the corresponding pin (JPMn0) */
#define _PORT_JPMn0_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn0_MODE_INPUT                    (0x01U) /* input mode (output buffer off) */
#define _PORT_JPMn0_MODE_UNUSED                   (0x01U) /* unused mode */
/* JPMn1 Specifies input/output mode of the corresponding pin (JPMn1) */
#define _PORT_JPMn1_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn1_MODE_INPUT                    (0x02U) /* input mode (output buffer off) */
#define _PORT_JPMn1_MODE_UNUSED                   (0x02U) /* unused mode */
/* JPMn2 Specifies input/output mode of the corresponding pin (JPMn2) */
#define _PORT_JPMn2_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn2_MODE_INPUT                    (0x04U) /* input mode (output buffer off) */
#define _PORT_JPMn2_MODE_UNUSED                   (0x04U) /* unused mode */
/* JPMn3 Specifies input/output mode of the corresponding pin (JPMn3) */
#define _PORT_JPMn3_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn3_MODE_INPUT                    (0x08U) /* input mode (output buffer off) */
#define _PORT_JPMn3_MODE_UNUSED                   (0x08U) /* unused mode */
/* JPMn4 Specifies input/output mode of the corresponding pin (JPMn4) */
#define _PORT_JPMn4_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn4_MODE_INPUT                    (0x10U) /* input mode (output buffer off) */
#define _PORT_JPMn4_MODE_UNUSED                   (0x10U) /* unused mode */
/* JPMn5 Specifies input/output mode of the corresponding pin (JPMn5) */
#define _PORT_JPMn5_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn5_MODE_INPUT                    (0x20U) /* input mode (output buffer off) */
#define _PORT_JPMn5_MODE_UNUSED                   (0x20U) /* unused mode */
/* JPMn6 Specifies input/output mode of the corresponding pin (JPMn6) */
#define _PORT_JPMn6_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn6_MODE_INPUT                    (0x40U) /* input mode (output buffer off) */
#define _PORT_JPMn6_MODE_UNUSED                   (0x40U) /* unused mode */
/* JPMn7 Specifies input/output mode of the corresponding pin (JPMn7) */
#define _PORT_JPMn7_MODE_OUTPUT                   (0x00U) /* output mode (output buffer on) */
#define _PORT_JPMn7_MODE_INPUT                    (0x80U) /* input mode (output buffer off) */
#define _PORT_JPMn7_MODE_UNUSED                   (0x80U) /* unused mode */

/*
    Port input buffer control register (PIBCn)
*/
/* PIBCn0 enable and disable the input buffer in input port mode. (PIBCn0) */
#define _PORT_PIBCn0_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn0_INPUT_BUFFER_ENABLE          (0x0001U) /* Input buffer is enabled. */
/* PIBCn1 enable and disable the input buffer in input port mode. (PIBCn1) */
#define _PORT_PIBCn1_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn1_INPUT_BUFFER_ENABLE          (0x0002U) /* Input buffer is enabled. */
/* PIBCn2 enable and disable the input buffer in input port mode. (PIBCn2) */
#define _PORT_PIBCn2_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn2_INPUT_BUFFER_ENABLE          (0x0004U) /* Input buffer is enabled. */
/* PIBCn3 enable and disable the input buffer in input port mode. (PIBCn3) */
#define _PORT_PIBCn3_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn3_INPUT_BUFFER_ENABLE          (0x0008U) /* Input buffer is enabled. */
/* PIBCn4 enable and disable the input buffer in input port mode. (PIBCn4) */
#define _PORT_PIBCn4_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn4_INPUT_BUFFER_ENABLE          (0x0010U) /* Input buffer is enabled. */
/* PIBCn5 enable and disable the input buffer in input port mode. (PIBCn5) */
#define _PORT_PIBCn5_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn5_INPUT_BUFFER_ENABLE          (0x0020U) /* Input buffer is enabled. */
/* PIBCn6 enable and disable the input buffer in input port mode. (PIBCn6) */
#define _PORT_PIBCn6_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn6_INPUT_BUFFER_ENABLE          (0x0040U) /* Input buffer is enabled. */
/* PIBCn7 enable and disable the input buffer in input port mode. (PIBCn7) */
#define _PORT_PIBCn7_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn7_INPUT_BUFFER_ENABLE          (0x0080U) /* Input buffer is enabled. */
/* PIBCn8 enable and disable the input buffer in input port mode. (PIBCn8) */
#define _PORT_PIBCn8_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn8_INPUT_BUFFER_ENABLE          (0x0100U) /* Input buffer is enabled. */
/* PIBCn9 enable and disable the input buffer in input port mode. (PIBCn9) */
#define _PORT_PIBCn9_INPUT_BUFFER_DISABLE         (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn9_INPUT_BUFFER_ENABLE          (0x0200U) /* Input buffer is enabled. */
/* PIBCn10 enable and disable the input buffer in input port mode. (PIBCn10) */
#define _PORT_PIBCn10_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn10_INPUT_BUFFER_ENABLE         (0x0400U) /* Input buffer is enabled. */
/* PIBCn11 enable and disable the input buffer in input port mode. (PIBCn11) */
#define _PORT_PIBCn11_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn11_INPUT_BUFFER_ENABLE         (0x0800U) /* Input buffer is enabled. */
/* PIBCn12 enable and disable the input buffer in input port mode. (PIBCn12) */
#define _PORT_PIBCn12_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn12_INPUT_BUFFER_ENABLE         (0x1000U) /* Input buffer is enabled. */
/* PIBCn13 enable and disable the input buffer in input port mode. (PIBCn13) */
#define _PORT_PIBCn13_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn13_INPUT_BUFFER_ENABLE         (0x2000U) /* Input buffer is enabled. */
/* PIBCn14 enable and disable the input buffer in input port mode. (PIBCn14) */
#define _PORT_PIBCn14_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn14_INPUT_BUFFER_ENABLE         (0x4000U) /* Input buffer is enabled. */
/* PIBCn15 enable and disable the input buffer in input port mode. (PIBCn15) */
#define _PORT_PIBCn15_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_PIBCn15_INPUT_BUFFER_ENABLE         (0x8000U) /* Input buffer is enabled. */

/*
    Port input buffer control register (APIBCn)
*/
/* APIBCn0 enable and disable the input buffer in input port mode. (APIBCn0) */
#define _PORT_APIBCn0_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn0_INPUT_BUFFER_ENABLE         (0x0001U) /* Input buffer is enabled. */
/* APIBCn1 enable and disable the input buffer in input port mode. (APIBCn1) */
#define _PORT_APIBCn1_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn1_INPUT_BUFFER_ENABLE         (0x0002U) /* Input buffer is enabled. */
/* APIBCn2 enable and disable the input buffer in input port mode. (APIBCn2) */
#define _PORT_APIBCn2_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn2_INPUT_BUFFER_ENABLE         (0x0004U) /* Input buffer is enabled. */
/* APIBCn3 enable and disable the input buffer in input port mode. (APIBCn3) */
#define _PORT_APIBCn3_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn3_INPUT_BUFFER_ENABLE         (0x0008U) /* Input buffer is enabled. */
/* APIBCn4 enable and disable the input buffer in input port mode. (APIBCn4) */
#define _PORT_APIBCn4_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn4_INPUT_BUFFER_ENABLE         (0x0010U) /* Input buffer is enabled. */
/* APIBCn5 enable and disable the input buffer in input port mode. (APIBCn5) */
#define _PORT_APIBCn5_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn5_INPUT_BUFFER_ENABLE         (0x0020U) /* Input buffer is enabled. */
/* APIBCn6 enable and disable the input buffer in input port mode. (APIBCn6) */
#define _PORT_APIBCn6_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn6_INPUT_BUFFER_ENABLE         (0x0040U) /* Input buffer is enabled. */
/* APIBCn7 enable and disable the input buffer in input port mode. (APIBCn7) */
#define _PORT_APIBCn7_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn7_INPUT_BUFFER_ENABLE         (0x0080U) /* Input buffer is enabled. */
/* APIBCn8 enable and disable the input buffer in input port mode. (APIBCn8) */
#define _PORT_APIBCn8_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn8_INPUT_BUFFER_ENABLE         (0x0100U) /* Input buffer is enabled. */
/* APIBCn9 enable and disable the input buffer in input port mode. (APIBCn9) */
#define _PORT_APIBCn9_INPUT_BUFFER_DISABLE        (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn9_INPUT_BUFFER_ENABLE         (0x0200U) /* Input buffer is enabled. */
/* APIBCn10 enable and disable the input buffer in input port mode. (APIBCn10) */
#define _PORT_APIBCn10_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn10_INPUT_BUFFER_ENABLE        (0x0400U) /* Input buffer is enabled. */
/* APIBCn11 enable and disable the input buffer in input port mode. (APIBCn11) */
#define _PORT_APIBCn11_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn11_INPUT_BUFFER_ENABLE        (0x0800U) /* Input buffer is enabled. */
/* APIBCn12 enable and disable the input buffer in input port mode. (APIBCn12) */
#define _PORT_APIBCn12_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn12_INPUT_BUFFER_ENABLE        (0x1000U) /* Input buffer is enabled. */
/* APIBCn13 enable and disable the input buffer in input port mode. (APIBCn13) */
#define _PORT_APIBCn13_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn13_INPUT_BUFFER_ENABLE        (0x2000U) /* Input buffer is enabled. */
/* APIBCn14 enable and disable the input buffer in input port mode. (APIBCn14) */
#define _PORT_APIBCn14_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn14_INPUT_BUFFER_ENABLE        (0x4000U) /* Input buffer is enabled. */
/* APIBCn15 enable and disable the input buffer in input port mode. (APIBCn15) */
#define _PORT_APIBCn15_INPUT_BUFFER_DISABLE       (0x0000U) /* Input buffer is disabled. */
#define _PORT_APIBCn15_INPUT_BUFFER_ENABLE        (0x8000U) /* Input buffer is enabled. */

/*
    JTAG port input buffer control register (JPIBCn)
*/
/* JPIBCn0 enable and disable the input buffer in input port mode. (JPIBCn0) */
#define _PORT_JPIBCn0_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn0_INPUT_BUFFER_ENABLE         (0x01U) /* Input buffer is enabled. */
/* JPIBCn1 enable and disable the input buffer in input port mode. (JPIBCn1) */
#define _PORT_JPIBCn1_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn1_INPUT_BUFFER_ENABLE         (0x02U) /* Input buffer is enabled. */
/* JPIBCn2 enable and disable the input buffer in input port mode. (JPIBCn2) */
#define _PORT_JPIBCn2_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn2_INPUT_BUFFER_ENABLE         (0x04U) /* Input buffer is enabled. */
/* JPIBCn3 enable and disable the input buffer in input port mode. (JPIBCn3) */
#define _PORT_JPIBCn3_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn3_INPUT_BUFFER_ENABLE         (0x08U) /* Input buffer is enabled. */
/* JPIBCn4 enable and disable the input buffer in input port mode. (JPIBCn4) */
#define _PORT_JPIBCn4_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn4_INPUT_BUFFER_ENABLE         (0x10U) /* Input buffer is enabled. */
/* JPIBCn5 enable and disable the input buffer in input port mode. (JPIBCn5) */
#define _PORT_JPIBCn5_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn5_INPUT_BUFFER_ENABLE         (0x20U) /* Input buffer is enabled. */
/* JPIBCn6 enable and disable the input buffer in input port mode. (JPIBCn6) */
#define _PORT_JPIBCn6_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn6_INPUT_BUFFER_ENABLE         (0x40U) /* Input buffer is enabled. */
/* JPIBCn7 enable and disable the input buffer in input port mode. (JPIBCn7) */
#define _PORT_JPIBCn7_INPUT_BUFFER_DISABLE        (0x00U) /* Input buffer is disabled. */
#define _PORT_JPIBCn7_INPUT_BUFFER_ENABLE         (0x80U) /* Input buffer is enabled. */

/*
    Port bidirection control register (PBDCn)
*/
/* PBDCn0 Enables/disables bidirectional mode of the corresponding pin (PBDCn0) */
#define _PORT_PBDCn0_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn0_MODE_ENABLE                  (0x0001U) /* Bidirectional mode enabled */
/* PBDCn1 Enables/disables bidirectional mode of the corresponding pin (PBDCn1) */
#define _PORT_PBDCn1_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn1_MODE_ENABLE                  (0x0002U) /* Bidirectional mode enabled */
/* PBDCn2 Enables/disables bidirectional mode of the corresponding pin (PBDCn2) */
#define _PORT_PBDCn2_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn2_MODE_ENABLE                  (0x0004U) /* Bidirectional mode enabled */
/* PBDCn3 Enables/disables bidirectional mode of the corresponding pin (PBDCn3) */
#define _PORT_PBDCn3_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn3_MODE_ENABLE                  (0x0008U) /* Bidirectional mode enabled */
/* PBDCn4 Enables/disables bidirectional mode of the corresponding pin (PBDCn4) */
#define _PORT_PBDCn4_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn4_MODE_ENABLE                  (0x0010U) /* Bidirectional mode enabled */
/* PBDCn5 Enables/disables bidirectional mode of the corresponding pin (PBDCn5) */
#define _PORT_PBDCn5_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn5_MODE_ENABLE                  (0x0020U) /* Bidirectional mode enabled */
/* PBDCn6 Enables/disables bidirectional mode of the corresponding pin (PBDCn6) */
#define _PORT_PBDCn6_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn6_MODE_ENABLE                  (0x0040U) /* Bidirectional mode enabled */
/* PBDCn7 Enables/disables bidirectional mode of the corresponding pin (PBDCn7) */
#define _PORT_PBDCn7_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn7_MODE_ENABLE                  (0x0080U) /* Bidirectional mode enabled */
/* PBDCn8 Enables/disables bidirectional mode of the corresponding pin (PBDCn8) */
#define _PORT_PBDCn8_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn8_MODE_ENABLE                  (0x0100U) /* Bidirectional mode enabled */
/* PBDCn9 Enables/disables bidirectional mode of the corresponding pin (PBDCn9) */
#define _PORT_PBDCn9_MODE_DISABLED                (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn9_MODE_ENABLE                  (0x0200U) /* Bidirectional mode enabled */
/* PBDCn10 Enables/disables bidirectional mode of the corresponding pin (PBDCn10) */
#define _PORT_PBDCn10_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn10_MODE_ENABLE                 (0x0400U) /* Bidirectional mode enabled */
/* PBDCn11 Enables/disables bidirectional mode of the corresponding pin (PBDCn11) */
#define _PORT_PBDCn11_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn11_MODE_ENABLE                 (0x0800U) /* Bidirectional mode enabled */
/* PBDCn12 Enables/disables bidirectional mode of the corresponding pin (PBDCn12) */
#define _PORT_PBDCn12_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn12_MODE_ENABLE                 (0x1000U) /* Bidirectional mode enabled */
/* PBDCn13 Enables/disables bidirectional mode of the corresponding pin (PBDCn13) */
#define _PORT_PBDCn13_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn13_MODE_ENABLE                 (0x2000U) /* Bidirectional mode enabled */
/* PBDCn14 Enables/disables bidirectional mode of the corresponding pin (PBDCn14) */
#define _PORT_PBDCn14_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn14_MODE_ENABLE                 (0x4000U) /* Bidirectional mode enabled */
/* PBDCn15 Enables/disables bidirectional mode of the corresponding pin (PBDCn15) */
#define _PORT_PBDCn15_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_PBDCn15_MODE_ENABLE                 (0x8000U) /* Bidirectional mode enabled */

/*
    Port bidirection control register (APBDCn)
*/
/* APBDCn0 Enables/disables bidirectional mode of the corresponding pin (APBDCn0) */
#define _PORT_APBDCn0_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn0_MODE_ENABLE                 (0x0001U) /* Bidirectional mode enabled */
/* APBDCn1 Enables/disables bidirectional mode of the corresponding pin (APBDCn1) */
#define _PORT_APBDCn1_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn1_MODE_ENABLE                 (0x0002U) /* Bidirectional mode enabled */
/* APBDCn2 Enables/disables bidirectional mode of the corresponding pin (APBDCn2) */
#define _PORT_APBDCn2_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn2_MODE_ENABLE                 (0x0004U) /* Bidirectional mode enabled */
/* APBDCn3 Enables/disables bidirectional mode of the corresponding pin (APBDCn3) */
#define _PORT_APBDCn3_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn3_MODE_ENABLE                 (0x0008U) /* Bidirectional mode enabled */
/* APBDCn4 Enables/disables bidirectional mode of the corresponding pin (APBDCn4) */
#define _PORT_APBDCn4_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn4_MODE_ENABLE                 (0x0010U) /* Bidirectional mode enabled */
/* APBDCn5 Enables/disables bidirectional mode of the corresponding pin (APBDCn5) */
#define _PORT_APBDCn5_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn5_MODE_ENABLE                 (0x0020U) /* Bidirectional mode enabled */
/* APBDCn6 Enables/disables bidirectional mode of the corresponding pin (APBDCn6) */
#define _PORT_APBDCn6_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn6_MODE_ENABLE                 (0x0040U) /* Bidirectional mode enabled */
/* APBDCn7 Enables/disables bidirectional mode of the corresponding pin (APBDCn7) */
#define _PORT_APBDCn7_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn7_MODE_ENABLE                 (0x0080U) /* Bidirectional mode enabled */
/* APBDCn8 Enables/disables bidirectional mode of the corresponding pin (APBDCn8) */
#define _PORT_APBDCn8_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn8_MODE_ENABLE                 (0x0100U) /* Bidirectional mode enabled */
/* APBDCn9 Enables/disables bidirectional mode of the corresponding pin (APBDCn9) */
#define _PORT_APBDCn9_MODE_DISABLED               (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn9_MODE_ENABLE                 (0x0200U) /* Bidirectional mode enabled */
/* APBDCn10 Enables/disables bidirectional mode of the corresponding pin (APBDCn10) */
#define _PORT_APBDCn10_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn10_MODE_ENABLE                (0x0400U) /* Bidirectional mode enabled */
/* APBDCn11 Enables/disables bidirectional mode of the corresponding pin (APBDCn11) */
#define _PORT_APBDCn11_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn11_MODE_ENABLE                (0x0800U) /* Bidirectional mode enabled */
/* APBDCn12 Enables/disables bidirectional mode of the corresponding pin (APBDCn12) */
#define _PORT_APBDCn12_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn12_MODE_ENABLE                (0x1000U) /* Bidirectional mode enabled */
/* APBDCn13 Enables/disables bidirectional mode of the corresponding pin (APBDCn13) */
#define _PORT_APBDCn13_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn13_MODE_ENABLE                (0x2000U) /* Bidirectional mode enabled */
/* APBDCn14 Enables/disables bidirectional mode of the corresponding pin (APBDCn14) */
#define _PORT_APBDCn14_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn14_MODE_ENABLE                (0x4000U) /* Bidirectional mode enabled */
/* APBDCn15 Enables/disables bidirectional mode of the corresponding pin (APBDCn15) */
#define _PORT_APBDCn15_MODE_DISABLED              (0x0000U) /* Bidirectional mode disabled */
#define _PORT_APBDCn15_MODE_ENABLE                (0x8000U) /* Bidirectional mode enabled */

/*
    JTAG port bidirection control register (JPBDCn)
*/
/* JPBDCn0 Enables/disables bidirectional mode of the corresponding pin (JPBDCn0) */
#define _PORT_JPBDCn0_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn0_MODE_ENABLE                 (0x01U) /* Bidirectional mode enabled */
/* JPBDCn1 Enables/disables bidirectional mode of the corresponding pin (JPBDCn1) */
#define _PORT_JPBDCn1_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn1_MODE_ENABLE                 (0x02U) /* Bidirectional mode enabled */
/* JPBDCn2 Enables/disables bidirectional mode of the corresponding pin (JPBDCn2) */
#define _PORT_JPBDCn2_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn2_MODE_ENABLE                 (0x04U) /* Bidirectional mode enabled */
/* JPBDCn3 Enables/disables bidirectional mode of the corresponding pin (JPBDCn3) */
#define _PORT_JPBDCn3_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn3_MODE_ENABLE                 (0x08U) /* Bidirectional mode enabled */
/* JPBDCn4 Enables/disables bidirectional mode of the corresponding pin (JPBDCn4) */
#define _PORT_JPBDCn4_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn4_MODE_ENABLE                 (0x10U) /* Bidirectional mode enabled */
/* JPBDCn5 Enables/disables bidirectional mode of the corresponding pin (JPBDCn5) */
#define _PORT_JPBDCn5_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn5_MODE_ENABLE                 (0x20U) /* Bidirectional mode enabled */
/* JPBDCn6 Enables/disables bidirectional mode of the corresponding pin (JPBDCn6) */
#define _PORT_JPBDCn6_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn6_MODE_ENABLE                 (0x40U) /* Bidirectional mode enabled */
/* JPBDCn7 Enables/disables bidirectional mode of the corresponding pin (JPBDCn7) */
#define _PORT_JPBDCn7_MODE_DISABLED               (0x00U) /* Bidirectional mode disabled */
#define _PORT_JPBDCn7_MODE_ENABLE                 (0x80U) /* Bidirectional mode enabled */

/*
    Port register (Pn)
*/
/* Pn0 Sets the output level of pin Pn_m (Pn0) */
#define _PORT_Pn0_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn0_OUTPUT_HIGH                     (0x0001U) /* Outputs high level */
/* Pn1 Sets the output level of pin Pn_m (Pn1) */
#define _PORT_Pn1_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn1_OUTPUT_HIGH                     (0x0002U) /* Outputs high level */
/* Pn2 Sets the output level of pin Pn_m (Pn2) */
#define _PORT_Pn2_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn2_OUTPUT_HIGH                     (0x0004U) /* Outputs high level */
/* Pn3 Sets the output level of pin Pn_m (Pn3) */
#define _PORT_Pn3_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn3_OUTPUT_HIGH                     (0x0008U) /* Outputs high level */
/* Pn4 Sets the output level of pin Pn_m (Pn4) */
#define _PORT_Pn4_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn4_OUTPUT_HIGH                     (0x0010U) /* Outputs high level */
/* Pn5 Sets the output level of pin Pn_m (Pn5) */
#define _PORT_Pn5_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn5_OUTPUT_HIGH                     (0x0020U) /* Outputs high level */
/* Pn6 Sets the output level of pin Pn_m (Pn6) */
#define _PORT_Pn6_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn6_OUTPUT_HIGH                     (0x0040U) /* Outputs high level */
/* Pn7 Sets the output level of pin Pn_m (Pn7) */
#define _PORT_Pn7_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn7_OUTPUT_HIGH                     (0x0080U) /* Outputs high level */
/* Pn8 Sets the output level of pin Pn_m (Pn8) */
#define _PORT_Pn8_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn8_OUTPUT_HIGH                     (0x0100U) /* Outputs high level */
/* Pn9 Sets the output level of pin Pn_m (Pn9) */
#define _PORT_Pn9_OUTPUT_LOW                      (0x0000U) /* Outputs low level */
#define _PORT_Pn9_OUTPUT_HIGH                     (0x0200U) /* Outputs high level */
/* Pn10 Sets the output level of pin Pn_m (Pn10) */
#define _PORT_Pn10_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn10_OUTPUT_HIGH                    (0x0400U) /* Outputs high level */
/* Pn11 Sets the output level of pin Pn_m (Pn11) */
#define _PORT_Pn11_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn11_OUTPUT_HIGH                    (0x0800U) /* Outputs high level */
/* Pn12 Sets the output level of pin Pn_m (Pn12) */
#define _PORT_Pn12_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn12_OUTPUT_HIGH                    (0x1000U) /* Outputs high level */
/* Pn13 Sets the output level of pin Pn_m (Pn13) */
#define _PORT_Pn13_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn13_OUTPUT_HIGH                    (0x2000U) /* Outputs high level */
/* Pn14 Sets the output level of pin Pn_m (Pn14) */
#define _PORT_Pn14_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn14_OUTPUT_HIGH                    (0x4000U) /* Outputs high level */
/* Pn15 Sets the output level of pin Pn_m (Pn15) */
#define _PORT_Pn15_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_Pn15_OUTPUT_HIGH                    (0x8000U) /* Outputs high level */

/*
    Port register (APn)
*/
/* APn0 Sets the output level of pin APn_m (APn0) */
#define _PORT_APn0_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn0_OUTPUT_HIGH                    (0x0001U) /* Outputs high level */
/* APn1 Sets the output level of pin APn_m (APn1) */
#define _PORT_APn1_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn1_OUTPUT_HIGH                    (0x0002U) /* Outputs high level */
/* APn2 Sets the output level of pin APn_m (APn2) */
#define _PORT_APn2_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn2_OUTPUT_HIGH                    (0x0004U) /* Outputs high level */
/* APn3 Sets the output level of pin APn_m (APn3) */
#define _PORT_APn3_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn3_OUTPUT_HIGH                    (0x0008U) /* Outputs high level */
/* APn4 Sets the output level of pin APn_m (APn4) */
#define _PORT_APn4_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn4_OUTPUT_HIGH                    (0x0010U) /* Outputs high level */
/* APn5 Sets the output level of pin APn_m (APn5) */
#define _PORT_APn5_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn5_OUTPUT_HIGH                    (0x0020U) /* Outputs high level */
/* APn6 Sets the output level of pin APn_m (APn6) */
#define _PORT_APn6_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn6_OUTPUT_HIGH                    (0x0040U) /* Outputs high level */
/* APn7 Sets the output level of pin APn_m (APn7) */
#define _PORT_APn7_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn7_OUTPUT_HIGH                    (0x0080U) /* Outputs high level */
/* APn8 Sets the output level of pin APn_m (APn8) */
#define _PORT_APn8_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn8_OUTPUT_HIGH                    (0x0100U) /* Outputs high level */
/* APn9 Sets the output level of pin APn_m (APn9) */
#define _PORT_APn9_OUTPUT_LOW                     (0x0000U) /* Outputs low level */
#define _PORT_APn9_OUTPUT_HIGH                    (0x0200U) /* Outputs high level */
/* APn10 Sets the output level of pin APn_m (APn10) */
#define _PORT_APn10_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn10_OUTPUT_HIGH                   (0x0400U) /* Outputs high level */
/* APn11 Sets the output level of pin APn_m (APn11) */
#define _PORT_APn11_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn11_OUTPUT_HIGH                   (0x0800U) /* Outputs high level */
/* APn12 Sets the output level of pin APn_m (APn12) */
#define _PORT_APn12_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn12_OUTPUT_HIGH                   (0x1000U) /* Outputs high level */
/* APn13 Sets the output level of pin APn_m (APn13) */
#define _PORT_APn13_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn13_OUTPUT_HIGH                   (0x2000U) /* Outputs high level */
/* APn14 Sets the output level of pin APn_m (APn14) */
#define _PORT_APn14_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn14_OUTPUT_HIGH                   (0x4000U) /* Outputs high level */
/* APn15 Sets the output level of pin APn_m (APn15) */
#define _PORT_APn15_OUTPUT_LOW                    (0x0000U) /* Outputs low level */
#define _PORT_APn15_OUTPUT_HIGH                   (0x8000U) /* Outputs high level */

/*
    JTAG port register (JPn)
*/
/* Pn0 Sets the output level of pin Pn_m (JPn0) */
#define _PORT_JPn0_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn0_OUTPUT_HIGH                    (0x01U) /* Outputs high level */
/* Pn1 Sets the output level of pin Pn_m (JPn1) */
#define _PORT_JPn1_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn1_OUTPUT_HIGH                    (0x02U) /* Outputs high level */
/* JPn2 Sets the output level of pin Pn_m (JPn2) */
#define _PORT_JPn2_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn2_OUTPUT_HIGH                    (0x04U) /* Outputs high level */
/* JPn3 Sets the output level of pin Pn_m (JPn3) */
#define _PORT_JPn3_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn3_OUTPUT_HIGH                    (0x08U) /* Outputs high level */
/* JPn4 Sets the output level of pin Pn_m (JPn4) */
#define _PORT_JPn4_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn4_OUTPUT_HIGH                    (0x10U) /* Outputs high level */
/* JPn5 Sets the output level of pin Pn_m (JPn5) */
#define _PORT_JPn5_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn5_OUTPUT_HIGH                    (0x20U) /* Outputs high level */
/* JPn6 Sets the output level of pin Pn_m (JPn6) */
#define _PORT_JPn6_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn6_OUTPUT_HIGH                    (0x40U) /* Outputs high level */
/* JPn7 Sets the output level of pin Pn_m (JPn7) */
#define _PORT_JPn7_OUTPUT_LOW                     (0x00U) /* Outputs low level */
#define _PORT_JPn7_OUTPUT_HIGH                    (0x80U) /* Outputs high level */

/*
    Pull-up option register (PUn)
*/
/* PUn0 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn0) */
#define _PORT_PUn0_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn0_PULLUP_ON                      (0x0001U) /* An internal pull-up resistor connected */
/* PUn1 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn1) */
#define _PORT_PUn1_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn1_PULLUP_ON                      (0x0002U) /* An internal pull-up resistor connected */
/* PUn2 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn2) */
#define _PORT_PUn2_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn2_PULLUP_ON                      (0x0004U) /* An internal pull-up resistor connected */
/* PUn3 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn3) */
#define _PORT_PUn3_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn3_PULLUP_ON                      (0x0008U) /* An internal pull-up resistor connected */
/* PUn4 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn4) */
#define _PORT_PUn4_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn4_PULLUP_ON                      (0x0010U) /* An internal pull-up resistor connected */
/* PUn5 Specifies whether an internal pull-up resistor is connected to the corresponding pin (PUn5) */
#define _PORT_PUn5_PULLUP_OFF                     (0x0000U) /* No internal pull-up resistor connected */
#define _PORT_PUn5_PULLUP_ON                      (0x0020U) /* An internal pull-up resistor connected */
/* PUn6 pin on-chip pull-up resistor selection (PUn6) */
#define _PORT_PUn6_PULLUP_OFF                     (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn6_PULLUP_ON                      (0x0040U) /* pull-up resistor connected */
/* PUn7 pin on-chip pull-up resistor selection (PUn7) */
#define _PORT_PUn7_PULLUP_OFF                     (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn7_PULLUP_ON                      (0x0080U) /* pull-up resistor connected */
/* PUn8 pin on-chip pull-up resistor selection (PUn8) */
#define _PORT_PUn8_PULLUP_OFF                     (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn8_PULLUP_ON                      (0x0100U) /* pull-up resistor connected */
/* PUn9 pin on-chip pull-up resistor selection (PUn9) */
#define _PORT_PUn9_PULLUP_OFF                     (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn9_PULLUP_ON                      (0x0200U) /* pull-up resistor connected */
/* PUn10 pin on-chip pull-up resistor selection (PUn10) */
#define _PORT_PUn10_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn10_PULLUP_ON                     (0x0400U) /* pull-up resistor connected */
/* PUn11 pin on-chip pull-up resistor selection (PUn11) */
#define _PORT_PUn11_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn11_PULLUP_ON                     (0x0800U) /* pull-up resistor connected */
/* PUn12 pin on-chip pull-up resistor selection (PUn12) */
#define _PORT_PUn12_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn12_PULLUP_ON                     (0x1000U) /* pull-up resistor connected */
/* PUn13 pin on-chip pull-up resistor selection (PUn13) */
#define _PORT_PUn13_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn13_PULLUP_ON                     (0x2000U) /* pull-up resistor connected */
/* PUn14 pin on-chip pull-up resistor selection (PUn14) */
#define _PORT_PUn14_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn14_PULLUP_ON                     (0x4000U) /* pull-up resistor connected */
/* PUn15 pin on-chip pull-up resistor selection (PUn15) */
#define _PORT_PUn15_PULLUP_OFF                    (0x0000U) /* pull-up resistor not connected */
#define _PORT_PUn15_PULLUP_ON                     (0x8000U) /* pull-up resistor connected */

/*
    Pull-up option register (JPUn)
*/
/* JPUn0 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn0) */
#define _PORT_JPUn0_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn0_PULLUP_ON                     (0x01U) /* An internal pull-up resistor connected */
/* JPUn1 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn1) */
#define _PORT_JPUn1_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn1_PULLUP_ON                     (0x02U) /* An internal pull-up resistor connected */
/* JPUn2 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn2) */
#define _PORT_JPUn2_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn2_PULLUP_ON                     (0x04U) /* An internal pull-up resistor connected */
/* JPUn3 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn3) */
#define _PORT_JPUn3_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn3_PULLUP_ON                     (0x08U) /* An internal pull-up resistor connected */
/* JPUn4 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn4) */
#define _PORT_JPUn4_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn4_PULLUP_ON                     (0x10U) /* An internal pull-up resistor connected */
/* JPUn5 Specifies whether an internal pull-up resistor is connected to the corresponding pin (JPUn5) */
#define _PORT_JPUn5_PULLUP_OFF                    (0x00U) /* No internal pull-up resistor connected */
#define _PORT_JPUn5_PULLUP_ON                     (0x20U) /* An internal pull-up resistor connected */
/* JPUn6 pin on-chip pull-up resistor selection (JPUn6) */
#define _PORT_JPUn6_PULLUP_OFF                    (0x00U) /* pull-up resistor not connected */
#define _PORT_JPUn6_PULLUP_ON                     (0x40U) /* pull-up resistor connected */
/* JPUn7 pin on-chip pull-up resistor selection (JPUn7) */
#define _PORT_JPUn7_PULLUP_OFF                    (0x00U) /* pull-up resistor not connected */
#define _PORT_JPUn7_PULLUP_ON                     (0x80U) /* pull-up resistor connected */

/*
    Pull-down option register (PDn)
*/
/* PDn0 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn0) */
#define _PORT_PDn0_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn0_PULLDOWN_ON                    (0x0001U) /* An internal pull-down resistor connected */
/* PDn1 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn1) */
#define _PORT_PDn1_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn1_PULLDOWN_ON                    (0x0002U) /* An internal pull-down resistor connected */
/* PDn2 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn2) */
#define _PORT_PDn2_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn2_PULLDOWN_ON                    (0x0004U) /* An internal pull-down resistor connected */
/* PDn3 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn3) */
#define _PORT_PDn3_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn3_PULLDOWN_ON                    (0x0008U) /* An internal pull-down resistor connected */
/* PDn4 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn4) */
#define _PORT_PDn4_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn4_PULLDOWN_ON                    (0x0010U) /* An internal pull-down resistor connected */
/* PDn5 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn5) */
#define _PORT_PDn5_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn5_PULLDOWN_ON                    (0x0020U) /* An internal pull-down resistor connected */
/* PDn6 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn6) */
#define _PORT_PDn6_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn6_PULLDOWN_ON                    (0x0040U) /* An internal pull-down resistor connected */
/* PDn7 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn7) */
#define _PORT_PDn7_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn7_PULLDOWN_ON                    (0x0080U) /* An internal pull-down resistor connected */
/* PDn8 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn8) */
#define _PORT_PDn8_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn8_PULLDOWN_ON                    (0x0100U) /* An internal pull-down resistor connected */
/* PDn9 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn9) */
#define _PORT_PDn9_PULLDOWN_OFF                   (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn9_PULLDOWN_ON                    (0x0200U) /* An internal pull-down resistor connected */
/* PDn10 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn10) */
#define _PORT_PDn10_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn10_PULLDOWN_ON                   (0x0400U) /* An internal pull-down resistor connected */
/* PDn11 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn11) */
#define _PORT_PDn11_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn11_PULLDOWN_ON                   (0x0800U) /* An internal pull-down resistor connected */
/* PDn12 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn12) */
#define _PORT_PDn12_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn12_PULLDOWN_ON                   (0x1000U) /* An internal pull-down resistor connected */
/* PDn13 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn13) */
#define _PORT_PDn13_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn13_PULLDOWN_ON                   (0x2000U) /* An internal pull-down resistor connected */
/* PDn14 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn14) */
#define _PORT_PDn14_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn14_PULLDOWN_ON                   (0x4000U) /* An internal pull-down resistor connected */
/* PDn15 Specifies whether to connect an internal pull-down resistor to the corresponding pin (PDn15) */
#define _PORT_PDn15_PULLDOWN_OFF                  (0x0000U) /* No internal pull-down resistor connected */
#define _PORT_PDn15_PULLDOWN_ON                   (0x8000U) /* An internal pull-down resistor connected */

/*
    Pull-down option register (JPDn)
*/
/* JPDn0 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn0) */
#define _PORT_JPDn0_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn0_PULLDOWN_ON                   (0x01U) /* An internal pull-down resistor connected */
/* JPDn1 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn1) */
#define _PORT_JPDn1_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn1_PULLDOWN_ON                   (0x02U) /* An internal pull-down resistor connected */
/* JPDn2 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn2) */
#define _PORT_JPDn2_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn2_PULLDOWN_ON                   (0x04U) /* An internal pull-down resistor connected */
/* JPDn3 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn3) */
#define _PORT_JPDn3_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn3_PULLDOWN_ON                   (0x08U) /* An internal pull-down resistor connected */
/* JPDn4 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn4) */
#define _PORT_JPDn4_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn4_PULLDOWN_ON                   (0x10U) /* An internal pull-down resistor connected */
/* JPDn5 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn5) */
#define _PORT_JPDn5_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn5_PULLDOWN_ON                   (0x20U) /* An internal pull-down resistor connected */
/* JPDn6 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn6) */
#define _PORT_JPDn6_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn6_PULLDOWN_ON                   (0x40U) /* An internal pull-down resistor connected */
/* JPDn7 Specifies whether to connect an internal pull-down resistor to the corresponding pin (JPDn7) */
#define _PORT_JPDn7_PULLDOWN_OFF                  (0x00U) /* No internal pull-down resistor connected */
#define _PORT_JPDn7_PULLDOWN_ON                   (0x80U) /* An internal pull-down resistor connected */

/*
    Port drive strength control register (PDSCn)
*/
/* PDSCn0 Specifies the port drive strength of the output buffer of the port pin (PDSCn0) */
#define _PORT_PDSCn0_DRIVE_STRENGTH_0             (0x0000U) /* PDSCn0 set 0 */
#define _PORT_PDSCn0_DRIVE_STRENGTH_1             (0x0001U) /* PDSCn0 set 1 */
/* PDSCn1 Specifies the port drive strength of the output buffer of the port pin (PDSCn1) */
#define _PORT_PDSCn1_DRIVE_STRENGTH_0             (0x0000U) /* PDSCn1 set 0 */
#define _PORT_PDSCn1_DRIVE_STRENGTH_1             (0x0002U) /* PDSCn1 set 1 */
/* PDSCn2 Specifies the port drive strength of the output buffer of the port pin (PDSCn2) */
#define _PORT_PDSCn2_DRIVE_STRENGTH_0             (0x0000U) /* PDSCn2 set 0 */
#define _PORT_PDSCn2_DRIVE_STRENGTH_1             (0x0004U) /* PDSCn2 set 1 */
/* PDSCn3 Specifies the port drive strength of the output buffer of the port pin (PDSCn3) */
#define _PORT_PDSCn3_DRIVE_STRENGTH_0             (0x0000U) /* PDSCn3 set 0 */
#define _PORT_PDSCn3_DRIVE_STRENGTH_1             (0x0008U) /* PDSCn3 set 1 */
/* PDSCn4 Specifies the port drive strength of the output buffer of the port pin (PDSCn4) */
#define _PORT_PDSCn4_DRIVE_STRENGTH_0             (0x0000U) /* PDSCn4 set 0 */
#define _PORT_PDSCn4_DRIVE_STRENGTH_1             (0x0010U) /* PDSCn4 set 1 */
/* PDSCn5 Specifies the port drive strength of the output buffer of the port pin (PDSCn5) */
#define _PORT_PDSCn5_DRIVE_STRENGTH_0             (0x0000U) /* PDSCn5 set 0 */
#define _PORT_PDSCn5_DRIVE_STRENGTH_1             (0x0020U) /* PDSCn5 set 1 */
/* PDSCn6 Specifies the port drive strength of the output buffer of the port pin (PDSCn6) */
#define _PORT_PDSCn6_DRIVE_STRENGTH_0             (0x0000U) /* PDSCn6 set 0 */
#define _PORT_PDSCn6_DRIVE_STRENGTH_1             (0x0040U) /* PDSCn6 set 1 */
/* PDSCn7 Specifies the port drive strength of the output buffer of the port pin (PDSCn7) */
#define _PORT_PDSCn7_DRIVE_STRENGTH_0             (0x0000U) /* PDSCn7 set 0 */
#define _PORT_PDSCn7_DRIVE_STRENGTH_1             (0x0080U) /* PDSCn7 set 1 */
/* PDSCn8 Specifies the port drive strength of the output buffer of the port pin (PDSCn8) */
#define _PORT_PDSCn8_DRIVE_STRENGTH_0             (0x0000U) /* PDSCn8 set 0 */
#define _PORT_PDSCn8_DRIVE_STRENGTH_1             (0x0100U) /* PDSCn8 set 1 */
/* PDSCn9 Specifies the port drive strength of the output buffer of the port pin (PDSCn9) */
#define _PORT_PDSCn9_DRIVE_STRENGTH_0             (0x0000U) /* PDSCn9 set 0 */
#define _PORT_PDSCn9_DRIVE_STRENGTH_1             (0x0200U) /* PDSCn9 set 1 */
/* PDSCn10 Specifies the port drive strength of the output buffer of the port pin (PDSCn10) */
#define _PORT_PDSCn10_DRIVE_STRENGTH_0            (0x0000U) /* PDSCn10 set 0 */
#define _PORT_PDSCn10_DRIVE_STRENGTH_1            (0x0400U) /* PDSCn10 set 1 */
/* PDSCn11 Specifies the port drive strength of the output buffer of the port pin (PDSCn11) */
#define _PORT_PDSCn11_DRIVE_STRENGTH_0            (0x0000U) /* PDSCn11 set 0 */
#define _PORT_PDSCn11_DRIVE_STRENGTH_1            (0x0800U) /* PDSCn11 set 1 */
/* PDSCn12 Specifies the port drive strength of the output buffer of the port pin (PDSCn12) */
#define _PORT_PDSCn12_DRIVE_STRENGTH_0            (0x0000U) /* PDSCn12 set 0 */
#define _PORT_PDSCn12_DRIVE_STRENGTH_1            (0x1000U) /* PDSCn12 set 1 */
/* PDSCn13 Specifies the port drive strength of the output buffer of the port pin (PDSCn13) */
#define _PORT_PDSCn13_DRIVE_STRENGTH_0            (0x0000U) /* PDSCn13 set 0 */
#define _PORT_PDSCn13_DRIVE_STRENGTH_1            (0x2000U) /* PDSCn13 set 1 */
/* PDSCn14 Specifies the port drive strength of the output buffer of the port pin (PDSCn14) */
#define _PORT_PDSCn14_DRIVE_STRENGTH_0            (0x0000U) /* PDSCn14 set 0 */
#define _PORT_PDSCn14_DRIVE_STRENGTH_1            (0x4000U) /* PDSCn14 set 1 */
/* PDSCn15 Specifies the port drive strength of the output buffer of the port pin (PDSCn15) */
#define _PORT_PDSCn15_DRIVE_STRENGTH_0            (0x0000U) /* PDSCn15 set 0 */
#define _PORT_PDSCn15_DRIVE_STRENGTH_1            (0x8000U) /* PDSCn15 set 1 */

/*
    APort drive strength control register (APDSCn)
*/
/* APDSCn0 Specifies the port drive strength of the output buffer of the port pin (APDSCn0) */
#define _PORT_APDSCn0_DRIVE_STRENGTH_0            (0x0000U) /* APDSCn0 set 0 */
#define _PORT_APDSCn0_DRIVE_STRENGTH_1            (0x0001U) /* APDSCn0 set 1 */
/* APDSCn1 Specifies the port drive strength of the output buffer of the port pin (APDSCn1) */
#define _PORT_APDSCn1_DRIVE_STRENGTH_0            (0x0000U) /* APDSCn1 set 0 */
#define _PORT_APDSCn1_DRIVE_STRENGTH_1            (0x0002U) /* APDSCn1 set 1 */
/* APDSCn2 Specifies the port drive strength of the output buffer of the port pin (APDSCn2) */
#define _PORT_APDSCn2_DRIVE_STRENGTH_0            (0x0000U) /* APDSCn2 set 0 */
#define _PORT_APDSCn2_DRIVE_STRENGTH_1            (0x0004U) /* APDSCn2 set 1 */
/* APDSCn3 Specifies the port drive strength of the output buffer of the port pin (APDSCn3) */
#define _PORT_APDSCn3_DRIVE_STRENGTH_0            (0x0000U) /* APDSCn3 set 0 */
#define _PORT_APDSCn3_DRIVE_STRENGTH_1            (0x0008U) /* APDSCn3 set 1 */
/* APDSCn4 Specifies the port drive strength of the output buffer of the port pin (APDSCn4) */
#define _PORT_APDSCn4_DRIVE_STRENGTH_0            (0x0000U) /* APDSCn4 set 0 */
#define _PORT_APDSCn4_DRIVE_STRENGTH_1            (0x0010U) /* APDSCn4 set 1 */
/* APDSCn5 Specifies the port drive strength of the output buffer of the port pin (APDSCn5) */
#define _PORT_APDSCn5_DRIVE_STRENGTH_0            (0x0000U) /* APDSCn5 set 0 */
#define _PORT_APDSCn5_DRIVE_STRENGTH_1            (0x0020U) /* APDSCn5 set 1 */
/* APDSCn6 Specifies the port drive strength of the output buffer of the port pin (APDSCn6) */
#define _PORT_APDSCn6_DRIVE_STRENGTH_0            (0x0000U) /* APDSCn6 set 0 */
#define _PORT_APDSCn6_DRIVE_STRENGTH_1            (0x0040U) /* APDSCn6 set 1 */
/* APDSCn7 Specifies the port drive strength of the output buffer of the port pin (APDSCn7) */
#define _PORT_APDSCn7_DRIVE_STRENGTH_0            (0x0000U) /* APDSCn7 set 0 */
#define _PORT_APDSCn7_DRIVE_STRENGTH_1            (0x0080U) /* APDSCn7 set 1 */
/* APDSCn8 Specifies the port drive strength of the output buffer of the port pin (APDSCn8) */
#define _PORT_APDSCn8_DRIVE_STRENGTH_0            (0x0000U) /* APDSCn8 set 0 */
#define _PORT_APDSCn8_DRIVE_STRENGTH_1            (0x0100U) /* APDSCn8 set 1 */
/* APDSCn9 Specifies the port drive strength of the output buffer of the port pin (APDSCn9) */
#define _PORT_APDSCn9_DRIVE_STRENGTH_0            (0x0000U) /* APDSCn9 set 0 */
#define _PORT_APDSCn9_DRIVE_STRENGTH_1            (0x0200U) /* APDSCn9 set 1 */
/* APDSCn10 Specifies the port drive strength of the output buffer of the port pin (APDSCn10) */
#define _PORT_APDSCn10_DRIVE_STRENGTH_0           (0x0000U) /* APDSCn10 set 0 */
#define _PORT_APDSCn10_DRIVE_STRENGTH_1           (0x0400U) /* APDSCn10 set 1 */
/* APDSCn11 Specifies the port drive strength of the output buffer of the port pin (APDSCn11) */
#define _PORT_APDSCn11_DRIVE_STRENGTH_0           (0x0000U) /* APDSCn11 set 0 */
#define _PORT_APDSCn11_DRIVE_STRENGTH_1           (0x0800U) /* APDSCn11 set 1 */
/* APDSCn12 Specifies the port drive strength of the output buffer of the port pin (APDSCn12) */
#define _PORT_APDSCn12_DRIVE_STRENGTH_0           (0x0000U) /* APDSCn12 set 0 */
#define _PORT_APDSCn12_DRIVE_STRENGTH_1           (0x1000U) /* APDSCn12 set 1 */
/* APDSCn13 Specifies the port drive strength of the output buffer of the port pin (APDSCn13) */
#define _PORT_APDSCn13_DRIVE_STRENGTH_0           (0x0000U) /* APDSCn13 set 0 */
#define _PORT_APDSCn13_DRIVE_STRENGTH_1           (0x2000U) /* APDSCn13 set 1 */
/* APDSCn14 Specifies the port drive strength of the output buffer of the port pin (APDSCn14) */
#define _PORT_APDSCn14_DRIVE_STRENGTH_0           (0x0000U) /* APDSCn14 set 0 */
#define _PORT_APDSCn14_DRIVE_STRENGTH_1           (0x4000U) /* APDSCn14 set 1 */
/* APDSCn15 Specifies the port drive strength of the output buffer of the port pin (APDSCn15) */
#define _PORT_APDSCn15_DRIVE_STRENGTH_0           (0x0000U) /* APDSCn15 set 0 */
#define _PORT_APDSCn15_DRIVE_STRENGTH_1           (0x8000U) /* APDSCn15 set 1 */

/*
    JTAG port drive strength control register (JPDSCn)
*/
/* JPDSCn0 Specifies the port drive strength of the output buffer of the port pin (JPDSCn0) */
#define _PORT_JPDSCn0_DRIVE_STRENGTH_0            (0x00U) /* JPDSCn0 set 0 */
#define _PORT_JPDSCn0_DRIVE_STRENGTH_1            (0x01U) /* JPDSCn0 set 1 */
/* JPDSCn1 Specifies the port drive strength of the output buffer of the port pin (JPDSCn1) */
#define _PORT_JPDSCn1_DRIVE_STRENGTH_0            (0x00U) /* JPDSCn1 set 0 */
#define _PORT_JPDSCn1_DRIVE_STRENGTH_1            (0x02U) /* JPDSCn1 set 1 */
/* JPDSCn2 Specifies the port drive strength of the output buffer of the port pin (JPDSCn2) */
#define _PORT_JPDSCn2_DRIVE_STRENGTH_0            (0x00U) /* JPDSCn2 set 0 */
#define _PORT_JPDSCn2_DRIVE_STRENGTH_1            (0x04U) /* JPDSCn2 set 1 */
/* JPDSCn3 Specifies the port drive strength of the output buffer of the port pin (JPDSCn3) */
#define _PORT_JPDSCn3_DRIVE_STRENGTH_0            (0x00U) /* JPDSCn3 set 0 */
#define _PORT_JPDSCn3_DRIVE_STRENGTH_1            (0x08U) /* JPDSCn3 set 1 */
/* JPDSCn4 Specifies the port drive strength of the output buffer of the port pin (JPDSCn4) */
#define _PORT_JPDSCn4_DRIVE_STRENGTH_0            (0x00U) /* JPDSCn4 set 0 */
#define _PORT_JPDSCn4_DRIVE_STRENGTH_1            (0x10U) /* JPDSCn4 set 1 */
/* JPDSCn5 Specifies the port drive strength of the output buffer of the port pin (JPDSCn5) */
#define _PORT_JPDSCn5_DRIVE_STRENGTH_0            (0x00U) /* JPDSCn5 set 0 */
#define _PORT_JPDSCn5_DRIVE_STRENGTH_1            (0x20U) /* JPDSCn5 set 1 */
/* JPDSCn6 Specifies the port drive strength of the output buffer of the port pin (JPDSCn6) */
#define _PORT_JPDSCn6_DRIVE_STRENGTH_0            (0x00U) /* JPDSCn6 set 0 */
#define _PORT_JPDSCn6_DRIVE_STRENGTH_1            (0x40U) /* JPDSCn6 set 1 */
/* JPDSCn7 Specifies the port drive strength of the output buffer of the port pin (JPDSCn7) */
#define _PORT_JPDSCn7_DRIVE_STRENGTH_0            (0x00U) /* JPDSCn7 set 0 */
#define _PORT_JPDSCn7_DRIVE_STRENGTH_1            (0x80U) /* JPDSCn7 set 1 */

/*
    Port Universal Characteristic Control Register (PUCCn)
*/
/* PUCCn0 Specifies the port drive strength of the output buffer of the port pin (PUCCn0) */
#define _PORT_PUCCn0_DRIVE_STRENGTH_0             (0x0000U) /* PUCCn0 set 0 */
#define _PORT_PUCCn0_DRIVE_STRENGTH_1             (0x0001U) /* PUCCn0 set 1 */
/* PDSCn1 Specifies the port drive strength of the output buffer of the port pin (PUCCn1) */
#define _PORT_PUCCn1_DRIVE_STRENGTH_0             (0x0000U) /* PUCCn1 set 0 */
#define _PORT_PUCCn1_DRIVE_STRENGTH_1             (0x0002U) /* PUCCn1 set 1 */
/* PDSCn2 Specifies the port drive strength of the output buffer of the port pin (PUCCn2) */
#define _PORT_PUCCn2_DRIVE_STRENGTH_0             (0x0000U) /* PUCCn2 set 0 */
#define _PORT_PUCCn2_DRIVE_STRENGTH_1             (0x0004U) /* PUCCn2 set 1 */
/* PDSCn3 Specifies the port drive strength of the output buffer of the port pin (PUCCn3) */
#define _PORT_PUCCn3_DRIVE_STRENGTH_0             (0x0000U) /* PUCCn3 set 0 */
#define _PORT_PUCCn3_DRIVE_STRENGTH_1             (0x0008U) /* PUCCn3 set 1 */
/* PDSCn4 Specifies the port drive strength of the output buffer of the port pin (PUCCn4) */
#define _PORT_PUCCn4_DRIVE_STRENGTH_0             (0x0000U) /* PUCCn4 set 0 */
#define _PORT_PUCCn4_DRIVE_STRENGTH_1             (0x0010U) /* PUCCn4 set 1 */
/* PDSCn5 Specifies the port drive strength of the output buffer of the port pin (PUCCn5) */
#define _PORT_PUCCn5_DRIVE_STRENGTH_0             (0x0000U) /* PUCCn5 set 0 */
#define _PORT_PUCCn5_DRIVE_STRENGTH_1             (0x0020U) /* PUCCn5 set 1 */
/* PDSCn6 Specifies the port drive strength of the output buffer of the port pin (PUCCn6) */
#define _PORT_PUCCn6_DRIVE_STRENGTH_0             (0x0000U) /* PUCCn6 set 0 */
#define _PORT_PUCCn6_DRIVE_STRENGTH_1             (0x0040U) /* PUCCn6 set 1 */
/* PDSCn7 Specifies the port drive strength of the output buffer of the port pin (PUCCn7) */
#define _PORT_PUCCn7_DRIVE_STRENGTH_0             (0x0000U) /* PUCCn7 set 0 */
#define _PORT_PUCCn7_DRIVE_STRENGTH_1             (0x0080U) /* PUCCn7 set 1 */
/* PDSCn8 Specifies the port drive strength of the output buffer of the port pin (PUCCn8) */
#define _PORT_PUCCn8_DRIVE_STRENGTH_0             (0x0000U) /* PUCCn8 set 0 */
#define _PORT_PUCCn8_DRIVE_STRENGTH_1             (0x0100U) /* PUCCn8 set 1 */
/* PDSCn9 Specifies the port drive strength of the output buffer of the port pin (PUCCn9) */
#define _PORT_PUCCn9_DRIVE_STRENGTH_0             (0x0000U) /* PUCCn9 set 0 */
#define _PORT_PUCCn9_DRIVE_STRENGTH_1             (0x0200U) /* PUCCn9 set 1 */
/* PDSCn10 Specifies the port drive strength of the output buffer of the port pin (PUCCn10) */
#define _PORT_PUCCn10_DRIVE_STRENGTH_0            (0x0000U) /* PUCCn10 set 0 */
#define _PORT_PUCCn10_DRIVE_STRENGTH_1            (0x0400U) /* PUCCn10 set 1 */
/* PDSCn11 Specifies the port drive strength of the output buffer of the port pin (PUCCn11) */
#define _PORT_PUCCn11_DRIVE_STRENGTH_0            (0x0000U) /* PUCCn11 set 0 */
#define _PORT_PUCCn11_DRIVE_STRENGTH_1            (0x0800U) /* PUCCn11 set 1 */
/* PDSCn12 Specifies the port drive strength of the output buffer of the port pin (PUCCn12) */
#define _PORT_PUCCn12_DRIVE_STRENGTH_0            (0x0000U) /* PUCCn12 set 0 */
#define _PORT_PUCCn12_DRIVE_STRENGTH_1            (0x1000U) /* PUCCn12 set 1 */
/* PDSCn13 Specifies the port drive strength of the output buffer of the port pin (PUCCn13) */
#define _PORT_PUCCn13_DRIVE_STRENGTH_0            (0x0000U) /* PUCCn13 set 0 */
#define _PORT_PUCCn13_DRIVE_STRENGTH_1            (0x2000U) /* PUCCn13 set 1 */
/* PDSCn14 Specifies the port drive strength of the output buffer of the port pin (PUCCn14) */
#define _PORT_PUCCn14_DRIVE_STRENGTH_0            (0x0000U) /* PUCCn14 set 0 */
#define _PORT_PUCCn14_DRIVE_STRENGTH_1            (0x4000U) /* PUCCn14 set 1 */
/* PDSCn15 Specifies the port drive strength of the output buffer of the port pin (PUCCn15) */
#define _PORT_PUCCn15_DRIVE_STRENGTH_0            (0x0000U) /* PUCCn15 set 0 */
#define _PORT_PUCCn15_DRIVE_STRENGTH_1            (0x8000U) /* PUCCn15 set 1 */

/*
    APort Universal Characteristic Control Register (APUCCn)
*/
/* APUCCn0 Specifies the port drive strength of the output buffer of the port pin (APUCCn0) */
#define _PORT_APUCCn0_DRIVE_STRENGTH_0            (0x0000U) /* APUCCn0 set 0 */
#define _PORT_APUCCn0_DRIVE_STRENGTH_1            (0x0001U) /* APUCCn0 set 1 */
/* PDSCn1 Specifies the port drive strength of the output buffer of the port pin (APUCCn1) */
#define _PORT_APUCCn1_DRIVE_STRENGTH_0            (0x0000U) /* APUCCn1 set 0 */
#define _PORT_APUCCn1_DRIVE_STRENGTH_1            (0x0002U) /* APUCCn1 set 1 */
/* PDSCn2 Specifies the port drive strength of the output buffer of the port pin (APUCCn2) */
#define _PORT_APUCCn2_DRIVE_STRENGTH_0            (0x0000U) /* APUCCn2 set 0 */
#define _PORT_APUCCn2_DRIVE_STRENGTH_1            (0x0004U) /* APUCCn2 set 1 */
/* PDSCn3 Specifies the port drive strength of the output buffer of the port pin (APUCCn3) */
#define _PORT_APUCCn3_DRIVE_STRENGTH_0            (0x0000U) /* APUCCn3 set 0 */
#define _PORT_APUCCn3_DRIVE_STRENGTH_1            (0x0008U) /* APUCCn3 set 1 */
/* PDSCn4 Specifies the port drive strength of the output buffer of the port pin (APUCCn4) */
#define _PORT_APUCCn4_DRIVE_STRENGTH_0            (0x0000U) /* APUCCn4 set 0 */
#define _PORT_APUCCn4_DRIVE_STRENGTH_1            (0x0010U) /* APUCCn4 set 1 */
/* PDSCn5 Specifies the port drive strength of the output buffer of the port pin (APUCCn5) */
#define _PORT_APUCCn5_DRIVE_STRENGTH_0            (0x0000U) /* APUCCn5 set 0 */
#define _PORT_APUCCn5_DRIVE_STRENGTH_1            (0x0020U) /* APUCCn5 set 1 */
/* PDSCn6 Specifies the port drive strength of the output buffer of the port pin (APUCCn6) */
#define _PORT_APUCCn6_DRIVE_STRENGTH_0            (0x0000U) /* APUCCn6 set 0 */
#define _PORT_APUCCn6_DRIVE_STRENGTH_1            (0x0040U) /* APUCCn6 set 1 */
/* PDSCn7 Specifies the port drive strength of the output buffer of the port pin (APUCCn7) */
#define _PORT_APUCCn7_DRIVE_STRENGTH_0            (0x0000U) /* APUCCn7 set 0 */
#define _PORT_APUCCn7_DRIVE_STRENGTH_1            (0x0080U) /* APUCCn7 set 1 */
/* PDSCn8 Specifies the port drive strength of the output buffer of the port pin (APUCCn8) */
#define _PORT_APUCCn8_DRIVE_STRENGTH_0            (0x0000U) /* APUCCn8 set 0 */
#define _PORT_APUCCn8_DRIVE_STRENGTH_1            (0x0100U) /* APUCCn8 set 1 */
/* PDSCn9 Specifies the port drive strength of the output buffer of the port pin (APUCCn9) */
#define _PORT_APUCCn9_DRIVE_STRENGTH_0            (0x0000U) /* APUCCn9 set 0 */
#define _PORT_APUCCn9_DRIVE_STRENGTH_1            (0x0200U) /* APUCCn9 set 1 */
/* PDSCn10 Specifies the port drive strength of the output buffer of the port pin (APUCCn10) */
#define _PORT_APUCCn10_DRIVE_STRENGTH_0           (0x0000U) /* APUCCn10 set 0 */
#define _PORT_APUCCn10_DRIVE_STRENGTH_1           (0x0400U) /* APUCCn10 set 1 */
/* PDSCn11 Specifies the port drive strength of the output buffer of the port pin (APUCCn11) */
#define _PORT_APUCCn11_DRIVE_STRENGTH_0           (0x0000U) /* APUCCn11 set 0 */
#define _PORT_APUCCn11_DRIVE_STRENGTH_1           (0x0800U) /* APUCCn11 set 1 */
/* PDSCn12 Specifies the port drive strength of the output buffer of the port pin (APUCCn12) */
#define _PORT_APUCCn12_DRIVE_STRENGTH_0           (0x0000U) /* APUCCn12 set 0 */
#define _PORT_APUCCn12_DRIVE_STRENGTH_1           (0x1000U) /* APUCCn12 set 1 */
/* PDSCn13 Specifies the port drive strength of the output buffer of the port pin (APUCCn13) */
#define _PORT_APUCCn13_DRIVE_STRENGTH_0           (0x0000U) /* APUCCn13 set 0 */
#define _PORT_APUCCn13_DRIVE_STRENGTH_1           (0x2000U) /* APUCCn13 set 1 */
/* PDSCn14 Specifies the port drive strength of the output buffer of the port pin (APUCCn14) */
#define _PORT_APUCCn14_DRIVE_STRENGTH_0           (0x0000U) /* APUCCn14 set 0 */
#define _PORT_APUCCn14_DRIVE_STRENGTH_1           (0x4000U) /* APUCCn14 set 1 */
/* PDSCn15 Specifies the port drive strength of the output buffer of the port pin (APUCCn15) */
#define _PORT_APUCCn15_DRIVE_STRENGTH_0           (0x0000U) /* APUCCn15 set 0 */
#define _PORT_APUCCn15_DRIVE_STRENGTH_1           (0x8000U) /* APUCCn15 set 1 */

/*
    Port Universal Characteristic Control Register (JPUCCn)
*/
/* JPUCCn0 Specifies the port drive strength of the output buffer of the port pin (JPUCCn0) */
#define _PORT_JPUCCn0_DRIVE_STRENGTH_0            (0x00U) /* JPUCCn0 set 0 */
#define _PORT_JPUCCn0_DRIVE_STRENGTH_1            (0x01U) /* JPUCCn0 set 1 */
/* JPDSCn1 Specifies the port drive strength of the output buffer of the port pin (JPUCCn1) */
#define _PORT_JPUCCn1_DRIVE_STRENGTH_0            (0x00U) /* JPUCCn1 set 0 */
#define _PORT_JPUCCn1_DRIVE_STRENGTH_1            (0x02U) /* JPUCCn1 set 1 */
/* JPDSCn2 Specifies the port drive strength of the output buffer of the port pin (JPUCCn2) */
#define _PORT_JPUCCn2_DRIVE_STRENGTH_0            (0x00U) /* JPUCCn2 set 0 */
#define _PORT_JPUCCn2_DRIVE_STRENGTH_1            (0x04U) /* JPUCCn2 set 1 */
/* JPDSCn3 Specifies the port drive strength of the output buffer of the port pin (JPUCCn3) */
#define _PORT_JPUCCn3_DRIVE_STRENGTH_0            (0x00U) /* JPUCCn3 set 0 */
#define _PORT_JPUCCn3_DRIVE_STRENGTH_1            (0x08U) /* JPUCCn3 set 1 */
/* JPDSCn4 Specifies the port drive strength of the output buffer of the port pin (JPUCCn4) */
#define _PORT_JPUCCn4_DRIVE_STRENGTH_0            (0x00U) /* JPUCCn4 set 0 */
#define _PORT_JPUCCn4_DRIVE_STRENGTH_1            (0x10U) /* JPUCCn4 set 1 */
/* JPDSCn5 Specifies the port drive strength of the output buffer of the port pin (JPUCCn5) */
#define _PORT_JPUCCn5_DRIVE_STRENGTH_0            (0x00U) /* JPUCCn5 set 0 */
#define _PORT_JPUCCn5_DRIVE_STRENGTH_1            (0x20U) /* JPUCCn5 set 1 */
/* JPDSCn6 Specifies the port drive strength of the output buffer of the port pin (JPUCCn6) */
#define _PORT_JPUCCn6_DRIVE_STRENGTH_0            (0x00U) /* JPUCCn6 set 0 */
#define _PORT_JPUCCn6_DRIVE_STRENGTH_1            (0x40U) /* JPUCCn6 set 1 */
/* JPDSCn7 Specifies the port drive strength of the output buffer of the port pin (JPUCCn7) */
#define _PORT_JPUCCn7_DRIVE_STRENGTH_0            (0x00U) /* JPUCCn7 set 0 */
#define _PORT_JPUCCn7_DRIVE_STRENGTH_1            (0x80U) /* JPUCCn7 set 1 */

/*
    Port open drain control register (PODCn)
*/
/* PODCn0 Specifies the output buffer function (PODCn0) */
#define _PORT_PODCn0_PUSH_PULL                    (0x0000U) /* Push-pull */
#define _PORT_PODCn0_OPEN_DRAIN                   (0x0001U) /* Open-drain */
/* PODCn1 Specifies the output buffer function (PODCn1) */
#define _PORT_PODCn1_PUSH_PULL                    (0x0000U) /* Push-pull */
#define _PORT_PODCn1_OPEN_DRAIN                   (0x0002U) /* Open-drain */
/* PODCn2 Specifies the output buffer function (PODCn2) */
#define _PORT_PODCn2_PUSH_PULL                    (0x0000U) /* Push-pull */
#define _PORT_PODCn2_OPEN_DRAIN                   (0x0004U) /* Open-drain */
/* PODCn3 Specifies the output buffer function (PODCn3) */
#define _PORT_PODCn3_PUSH_PULL                    (0x0000U) /* Push-pull */
#define _PORT_PODCn3_OPEN_DRAIN                   (0x0008U) /* Open-drain */
/* PODCn4 Specifies the output buffer function (PODCn4) */
#define _PORT_PODCn4_PUSH_PULL                    (0x0000U) /* Push-pull */
#define _PORT_PODCn4_OPEN_DRAIN                   (0x0010U) /* Open-drain */
/* PODCn5 Specifies the output buffer function (PODCn5) */
#define _PORT_PODCn5_PUSH_PULL                    (0x0000U) /* Push-pull */
#define _PORT_PODCn5_OPEN_DRAIN                   (0x0020U) /* Open-drain */
/* PODCn6 Specifies the output buffer function (PODCn6) */
#define _PORT_PODCn6_PUSH_PULL                    (0x0000U) /* Push-pull */
#define _PORT_PODCn6_OPEN_DRAIN                   (0x0040U) /* Open-drain */
/* PODCn7 Specifies the output buffer function (PODCn7) */
#define _PORT_PODCn7_PUSH_PULL                    (0x0000U) /* Push-pull */
#define _PORT_PODCn7_OPEN_DRAIN                   (0x0080U) /* Open-drain */
/* PODCn8 Specifies the output buffer function (PODCn8) */
#define _PORT_PODCn8_PUSH_PULL                    (0x0000U) /* Push-pull */
#define _PORT_PODCn8_OPEN_DRAIN                   (0x0100U) /* Open-drain */
/* PODCn9 Specifies the output buffer function (PODCn9) */
#define _PORT_PODCn9_PUSH_PULL                    (0x0000U) /* Push-pull */
#define _PORT_PODCn9_OPEN_DRAIN                   (0x0200U) /* Open-drain */
/* PODCn10 Specifies the output buffer function (PODCn10) */
#define _PORT_PODCn10_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_PODCn10_OPEN_DRAIN                  (0x0400U) /* Open-drain */
/* PODCn11 Specifies the output buffer function (PODCn11) */
#define _PORT_PODCn11_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_PODCn11_OPEN_DRAIN                  (0x0800U) /* Open-drain */
/* PODCn12 Specifies the output buffer function (PODCn12) */
#define _PORT_PODCn12_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_PODCn12_OPEN_DRAIN                  (0x1000U) /* Open-drain */
/* PODCn13 Specifies the output buffer function (PODCn13) */
#define _PORT_PODCn13_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_PODCn13_OPEN_DRAIN                  (0x2000U) /* Open-drain */
/* PODCn14 Specifies the output buffer function (PODCn14) */
#define _PORT_PODCn14_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_PODCn14_OPEN_DRAIN                  (0x4000U) /* Open-drain */
/* PODCn15 Specifies the output buffer function (PODCn15) */
#define _PORT_PODCn15_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_PODCn15_OPEN_DRAIN                  (0x8000U) /* Open-drain */

/*
    Port open drain control register (APODCn)
*/
/* APODCn0 Specifies the output buffer function (APODCn0) */
#define _PORT_APODCn0_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_APODCn0_OPEN_DRAIN                  (0x0001U) /* Open-drain */
/* APODCn1 Specifies the output buffer function (APODCn1) */
#define _PORT_APODCn1_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_APODCn1_OPEN_DRAIN                  (0x0002U) /* Open-drain */
/* APODCn2 Specifies the output buffer function (APODCn2) */
#define _PORT_APODCn2_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_APODCn2_OPEN_DRAIN                  (0x0004U) /* Open-drain */
/* APODCn3 Specifies the output buffer function (APODCn3) */
#define _PORT_APODCn3_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_APODCn3_OPEN_DRAIN                  (0x0008U) /* Open-drain */
/* APODCn4 Specifies the output buffer function (APODCn4) */
#define _PORT_APODCn4_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_APODCn4_OPEN_DRAIN                  (0x0010U) /* Open-drain */
/* APODCn5 Specifies the output buffer function (APODCn5) */
#define _PORT_APODCn5_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_APODCn5_OPEN_DRAIN                  (0x0020U) /* Open-drain */
/* APODCn6 Specifies the output buffer function (APODCn6) */
#define _PORT_APODCn6_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_APODCn6_OPEN_DRAIN                  (0x0040U) /* Open-drain */
/* APODCn7 Specifies the output buffer function (APODCn7) */
#define _PORT_APODCn7_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_APODCn7_OPEN_DRAIN                  (0x0080U) /* Open-drain */
/* APODCn8 Specifies the output buffer function (APODCn8) */
#define _PORT_APODCn8_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_APODCn8_OPEN_DRAIN                  (0x0100U) /* Open-drain */
/* APODCn9 Specifies the output buffer function (APODCn9) */
#define _PORT_APODCn9_PUSH_PULL                   (0x0000U) /* Push-pull */
#define _PORT_APODCn9_OPEN_DRAIN                  (0x0200U) /* Open-drain */
/* APODCn10 Specifies the output buffer function (APODCn10) */
#define _PORT_APODCn10_PUSH_PULL                  (0x0000U) /* Push-pull */
#define _PORT_APODCn10_OPEN_DRAIN                 (0x0400U) /* Open-drain */
/* APODCn11 Specifies the output buffer function (APODCn11) */
#define _PORT_APODCn11_PUSH_PULL                  (0x0000U) /* Push-pull */
#define _PORT_APODCn11_OPEN_DRAIN                 (0x0800U) /* Open-drain */
/* APODCn12 Specifies the output buffer function (APODCn12) */
#define _PORT_APODCn12_PUSH_PULL                  (0x0000U) /* Push-pull */
#define _PORT_APODCn12_OPEN_DRAIN                 (0x1000U) /* Open-drain */
/* APODCn13 Specifies the output buffer function (APODCn13) */
#define _PORT_APODCn13_PUSH_PULL                  (0x0000U) /* Push-pull */
#define _PORT_APODCn13_OPEN_DRAIN                 (0x2000U) /* Open-drain */
/* APODCn14 Specifies the output buffer function (APODCn14) */
#define _PORT_APODCn14_PUSH_PULL                  (0x0000U) /* Push-pull */
#define _PORT_APODCn14_OPEN_DRAIN                 (0x4000U) /* Open-drain */
/* APODCn15 Specifies the output buffer function (APODCn15) */
#define _PORT_APODCn15_PUSH_PULL                  (0x0000U) /* Push-pull */
#define _PORT_APODCn15_OPEN_DRAIN                 (0x8000U) /* Open-drain */

/*
    JTAG port open drain control register (JPODCn)
*/
/* JPODCn0 Specifies the output buffer function (JPODCn0) */
#define _PORT_JPODCn0_PUSH_PULL                   (0x00U) /* Push-pull */
#define _PORT_JPODCn0_OPEN_DRAIN                  (0x01U) /* Open-drain */
/* JPODCn1 Specifies the output buffer function (JPODCn1) */
#define _PORT_JPODCn1_PUSH_PULL                   (0x00U) /* Push-pull */
#define _PORT_JPODCn1_OPEN_DRAIN                  (0x02U) /* Open-drain */
/* JPODCn2 Specifies the output buffer function (JPODCn2) */
#define _PORT_JPODCn2_PUSH_PULL                   (0x00U) /* Push-pull */
#define _PORT_JPODCn2_OPEN_DRAIN                  (0x04U) /* Open-drain */
/* JPODCn3 Specifies the output buffer function (JPODCn3) */
#define _PORT_JPODCn3_PUSH_PULL                   (0x00U) /* Push-pull */
#define _PORT_JPODCn3_OPEN_DRAIN                  (0x08U) /* Open-drain */
/* JPODCn4 Specifies the output buffer function (JPODCn4) */
#define _PORT_JPODCn4_PUSH_PULL                   (0x00U) /* Push-pull */
#define _PORT_JPODCn4_OPEN_DRAIN                  (0x10U) /* Open-drain */
/* JPODCn5 Specifies the output buffer function (JPODCn5) */
#define _PORT_JPODCn5_PUSH_PULL                   (0x00U) /* Push-pull */
#define _PORT_JPODCn5_OPEN_DRAIN                  (0x20U) /* Open-drain */
/* JPODCn6 Specifies the output buffer function (JPODCn6) */
#define _PORT_JPODCn6_PUSH_PULL                   (0x00U) /* Push-pull */
#define _PORT_JPODCn6_OPEN_DRAIN                  (0x40U) /* Open-drain */
/* JPODCn7 Specifies the output buffer function (JPODCn7) */
#define _PORT_JPODCn7_PUSH_PULL                   (0x00U) /* Push-pull */
#define _PORT_JPODCn7_OPEN_DRAIN                  (0x80U) /* Open-drain */

/*
    Port Open-drain Control Expansion Register (PODCEn)
*/
/* PODCEn0 Specifies the output buffer function (PODCEn0) */
#define _PORT_PODCEn0_N_CH_OPEN_DRAIN             (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn0_P_CH_OPEN_DRAIN             (0x0001U) /* Emulated P-channel Open Drain */
/* PODCEn1 Specifies the output buffer function (PODCEn1) */
#define _PORT_PODCEn1_N_CH_OPEN_DRAIN             (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn1_P_CH_OPEN_DRAIN             (0x0002U) /* Emulated P-channel Open Drain */
/* PODCEn2 Specifies the output buffer function (PODCEn2) */
#define _PORT_PODCEn2_N_CH_OPEN_DRAIN             (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn2_P_CH_OPEN_DRAIN             (0x0004U) /* Emulated P-channel Open Drain */
/* PODCEn3 Specifies the output buffer function (PODCEn3) */
#define _PORT_PODCEn3_N_CH_OPEN_DRAIN             (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn3_P_CH_OPEN_DRAIN             (0x0008U) /* Emulated P-channel Open Drain */
/* PODCEn4 Specifies the output buffer function (PODCEn4) */
#define _PORT_PODCEn4_N_CH_OPEN_DRAIN             (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn4_P_CH_OPEN_DRAIN             (0x0010U) /* Emulated P-channel Open Drain */
/* PODCEn5 Specifies the output buffer function (PODCEn5) */
#define _PORT_PODCEn5_N_CH_OPEN_DRAIN             (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn5_P_CH_OPEN_DRAIN             (0x0020U) /* Emulated P-channel Open Drain */
/* PODCEn6 Specifies the output buffer function (PODCEn6) */
#define _PORT_PODCEn6_N_CH_OPEN_DRAIN             (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn6_P_CH_OPEN_DRAIN             (0x0040U) /* Emulated P-channel Open Drain */
/* PODCEn7 Specifies the output buffer function (PODCEn7) */
#define _PORT_PODCEn7_N_CH_OPEN_DRAIN             (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn7_P_CH_OPEN_DRAIN             (0x0080U) /* Emulated P-channel Open Drain */
/* PODCEn8 Specifies the output buffer function (PODCEn8) */
#define _PORT_PODCEn8_N_CH_OPEN_DRAIN             (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn8_P_CH_OPEN_DRAIN             (0x0100U) /* Emulated P-channel Open Drain */
/* PODCEn9 Specifies the output buffer function (PODCEn9) */
#define _PORT_PODCEn9_N_CH_OPEN_DRAIN             (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn9_P_CH_OPEN_DRAIN             (0x0200U) /* Emulated P-channel Open Drain */
/* PODCEn10 Specifies the output buffer function (PODCEn10) */
#define _PORT_PODCEn10_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn10_P_CH_OPEN_DRAIN            (0x0400U) /* Emulated P-channel Open Drain */
/* PODCEn11 Specifies the output buffer function (PODCEn11) */
#define _PORT_PODCEn11_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn11_P_CH_OPEN_DRAIN            (0x0800U) /* Emulated P-channel Open Drain */
/* PODCEn12 Specifies the output buffer function (PODCEn12) */
#define _PORT_PODCEn12_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn12_P_CH_OPEN_DRAIN            (0x1000U) /* Emulated P-channel Open Drain */
/* PODCEn13 Specifies the output buffer function (PODCEn13) */
#define _PORT_PODCEn13_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn13_P_CH_OPEN_DRAIN            (0x2000U) /* Emulated P-channel Open Drain */
/* PODCEn14 Specifies the output buffer function (PODCEn14) */
#define _PORT_PODCEn14_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn14_P_CH_OPEN_DRAIN            (0x4000U) /* Emulated P-channel Open Drain */
/* PODCEn15 Specifies the output buffer function (PODCEn15) */
#define _PORT_PODCEn15_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_PODCEn15_P_CH_OPEN_DRAIN            (0x8000U) /* Emulated P-channel Open Drain */

/*
    Port Open-drain Control Expansion Register (APODCEn)
*/
/* APODCEn0 Specifies the output buffer function (APODCEn0) */
#define _PORT_APODCEn0_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn0_P_CH_OPEN_DRAIN            (0x0001U) /* Emulated P-channel Open Drain */
/* APODCEn1 Specifies the output buffer function (APODCEn1) */
#define _PORT_APODCEn1_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn1_P_CH_OPEN_DRAIN            (0x0002U) /* Emulated P-channel Open Drain */
/* APODCEn2 Specifies the output buffer function (APODCEn2) */
#define _PORT_APODCEn2_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn2_P_CH_OPEN_DRAIN            (0x0004U) /* Emulated P-channel Open Drain */
/* APODCEn3 Specifies the output buffer function (APODCEn3) */
#define _PORT_APODCEn3_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn3_P_CH_OPEN_DRAIN            (0x0008U) /* Emulated P-channel Open Drain */
/* APODCEn4 Specifies the output buffer function (APODCEn4) */
#define _PORT_APODCEn4_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn4_P_CH_OPEN_DRAIN            (0x0010U) /* Emulated P-channel Open Drain */
/* APODCEn5 Specifies the output buffer function (APODCEn5) */
#define _PORT_APODCEn5_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn5_P_CH_OPEN_DRAIN            (0x0020U) /* Emulated P-channel Open Drain */
/* APODCEn6 Specifies the output buffer function (APODCEn6) */
#define _PORT_APODCEn6_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn6_P_CH_OPEN_DRAIN            (0x0040U) /* Emulated P-channel Open Drain */
/* APODCEn7 Specifies the output buffer function (APODCEn7) */
#define _PORT_APODCEn7_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn7_P_CH_OPEN_DRAIN            (0x0080U) /* Emulated P-channel Open Drain */
/* APODCEn8 Specifies the output buffer function (APODCEn8) */
#define _PORT_APODCEn8_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn8_P_CH_OPEN_DRAIN            (0x0100U) /* Emulated P-channel Open Drain */
/* APODCEn9 Specifies the output buffer function (APODCEn9) */
#define _PORT_APODCEn9_N_CH_OPEN_DRAIN            (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn9_P_CH_OPEN_DRAIN            (0x0200U) /* Emulated P-channel Open Drain */
/* APODCEn10 Specifies the output buffer function (APODCEn10) */
#define _PORT_APODCEn10_N_CH_OPEN_DRAIN           (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn10_P_CH_OPEN_DRAIN           (0x0400U) /* Emulated P-channel Open Drain */
/* APODCEn11 Specifies the output buffer function (APODCEn11) */
#define _PORT_APODCEn11_N_CH_OPEN_DRAIN           (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn11_P_CH_OPEN_DRAIN           (0x0800U) /* Emulated P-channel Open Drain */
/* APODCEn12 Specifies the output buffer function (APODCEn12) */
#define _PORT_APODCEn12_N_CH_OPEN_DRAIN           (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn12_P_CH_OPEN_DRAIN           (0x1000U) /* Emulated P-channel Open Drain */
/* APODCEn13 Specifies the output buffer function (APODCEn13) */
#define _PORT_APODCEn13_N_CH_OPEN_DRAIN           (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn13_P_CH_OPEN_DRAIN           (0x2000U) /* Emulated P-channel Open Drain */
/* APODCEn14 Specifies the output buffer function (APODCEn14) */
#define _PORT_APODCEn14_N_CH_OPEN_DRAIN           (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn14_P_CH_OPEN_DRAIN           (0x4000U) /* Emulated P-channel Open Drain */
/* APODCEn15 Specifies the output buffer function (APODCEn15) */
#define _PORT_APODCEn15_N_CH_OPEN_DRAIN           (0x0000U) /* Emulated N-channel Open Drain */
#define _PORT_APODCEn15_P_CH_OPEN_DRAIN           (0x8000U) /* Emulated P-channel Open Drain */

/*
    Port Open-drain Control Expansion Register (JPODCEn)
*/
/* JPODCEn0 Specifies the output buffer function (JPODCEn0) */
#define _PORT_JPODCEn0_N_CH_OPEN_DRAIN            (0x00U) /* Emulated N-channel Open Drain */
#define _PORT_JPODCEn0_P_CH_OPEN_DRAIN            (0x01U) /* Emulated P-channel Open Drain */
/* JPODCEn1 Specifies the output buffer function (JPODCEn1) */
#define _PORT_JPODCEn1_N_CH_OPEN_DRAIN            (0x00U) /* Emulated N-channel Open Drain */
#define _PORT_JPODCEn1_P_CH_OPEN_DRAIN            (0x02U) /* Emulated P-channel Open Drain */
/* JPODCEn2 Specifies the output buffer function (JPODCEn2) */
#define _PORT_JPODCEn2_N_CH_OPEN_DRAIN            (0x00U) /* Emulated N-channel Open Drain */
#define _PORT_JPODCEn2_P_CH_OPEN_DRAIN            (0x04U) /* Emulated P-channel Open Drain */
/* JPODCEn3 Specifies the output buffer function (JPODCEn3) */
#define _PORT_JPODCEn3_N_CH_OPEN_DRAIN            (0x00U) /* Emulated N-channel Open Drain */
#define _PORT_JPODCEn3_P_CH_OPEN_DRAIN            (0x08U) /* Emulated P-channel Open Drain */
/* JPODCEn4 Specifies the output buffer function (JPODCEn4) */
#define _PORT_JPODCEn4_N_CH_OPEN_DRAIN            (0x00U) /* Emulated N-channel Open Drain */
#define _PORT_JPODCEn4_P_CH_OPEN_DRAIN            (0x10U) /* Emulated P-channel Open Drain */
/* JPODCEn5 Specifies the output buffer function (JPODCEn5) */
#define _PORT_JPODCEn5_N_CH_OPEN_DRAIN            (0x00U) /* Emulated N-channel Open Drain */
#define _PORT_JPODCEn5_P_CH_OPEN_DRAIN            (0x20U) /* Emulated P-channel Open Drain */
/* JPODCEn6 Specifies the output buffer function (JPODCEn6) */
#define _PORT_JPODCEn6_N_CH_OPEN_DRAIN            (0x00U) /* Emulated N-channel Open Drain */
#define _PORT_JPODCEn6_P_CH_OPEN_DRAIN            (0x40U) /* Emulated P-channel Open Drain */
/* JPODCEn7 Specifies the output buffer function (JPODCEn7) */
#define _PORT_JPODCEn7_N_CH_OPEN_DRAIN            (0x00U) /* Emulated N-channel Open Drain */
#define _PORT_JPODCEn7_P_CH_OPEN_DRAIN            (0x80U) /* Emulated P-channel Open Drain */

/*
    Port input buffer selection register (PISn)
*/
/* PISn0 Specifies the input buffer characteristic (PISn0) */
#define _PORT_PISn0_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn0_TYPE_SHMT4                    (0x0001U) /* Type 2 (SHMT4) */
/* PISn1 Specifies the input buffer characteristic (PISn1) */
#define _PORT_PISn1_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn1_TYPE_SHMT4                    (0x0002U) /* Type 2 (SHMT4) */
/* PISn2 Specifies the input buffer characteristic (PISn2) */
#define _PORT_PISn2_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn2_TYPE_SHMT4                    (0x0004U) /* Type 2 (SHMT4) */
/* PISn3 Specifies the input buffer characteristic (PISn3) */
#define _PORT_PISn3_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn3_TYPE_SHMT4                    (0x0008U) /* Type 2 (SHMT4) */
/* PISn4 Specifies the input buffer characteristic (PISn4) */
#define _PORT_PISn4_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn4_TYPE_SHMT4                    (0x0010U) /* Type 2 (SHMT4) */
/* PISn5 Specifies the input buffer characteristic (PISn5) */
#define _PORT_PISn5_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn5_TYPE_SHMT4                    (0x0020U) /* Type 2 (SHMT4) */
/* PISn6 Specifies the input buffer characteristic (PISn6) */
#define _PORT_PISn6_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn6_TYPE_SHMT4                    (0x0040U) /* Type 2 (SHMT4) */
/* PISn7 Specifies the input buffer characteristic (PISn7) */
#define _PORT_PISn7_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn7_TYPE_SHMT4                    (0x0080U) /* Type 2 (SHMT4) */
/* PISn8 Specifies the input buffer characteristic (PISn8) */
#define _PORT_PISn8_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn8_TYPE_SHMT4                    (0x0100U) /* Type 2 (SHMT4) */
/* PISn9 Specifies the input buffer characteristic (PISn9) */
#define _PORT_PISn9_TYPE_SHMT1                    (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn9_TYPE_SHMT4                    (0x0200U) /* Type 2 (SHMT4) */
/* PISn10 Specifies the input buffer characteristic (PISn10) */
#define _PORT_PISn10_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn10_TYPE_SHMT4                   (0x0400U) /* Type 2 (SHMT4) */
/* PISn11 Specifies the input buffer characteristic (PISn11) */
#define _PORT_PISn11_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn11_TYPE_SHMT4                   (0x0800U) /* Type 2 (SHMT4) */
/* PISn12 Specifies the input buffer characteristic (PISn12) */
#define _PORT_PISn12_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn12_TYPE_SHMT4                   (0x1000U) /* Type 2 (SHMT4) */
/* PISn13 Specifies the input buffer characteristic (PISn13) */
#define _PORT_PISn13_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn13_TYPE_SHMT4                   (0x2000U) /* Type 2 (SHMT4) */
/* PISn14 Specifies the input buffer characteristic (PISn14) */
#define _PORT_PISn14_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn14_TYPE_SHMT4                   (0x4000U) /* Type 2 (SHMT4) */
/* PISn15 Specifies the input buffer characteristic (PISn15) */
#define _PORT_PISn15_TYPE_SHMT1                   (0x0000U) /* Type 1 (SHMT1) */
#define _PORT_PISn15_TYPE_SHMT4                   (0x8000U) /* Type 2 (SHMT4) */

/*
    JTAG port input buffer selection register (JPISn)
*/
/* JPISn0 Specifies the input buffer characteristic (JPISn0) */
#define _PORT_JPISn0_TYPE_SHMT1                   (0x00U) /* Type 1 (SHMT1) */
#define _PORT_JPISn0_TYPE_SHMT4                   (0x01U) /* Type 2 (SHMT4) */
/* JPISn1 Specifies the input buffer characteristic (JPISn1) */
#define _PORT_JPISn1_TYPE_SHMT1                   (0x00U) /* Type 1 (SHMT1) */
#define _PORT_JPISn1_TYPE_SHMT4                   (0x02U) /* Type 2 (SHMT4) */
/* JPISn2 Specifies the input buffer characteristic (JPISn2) */
#define _PORT_JPISn2_TYPE_SHMT1                   (0x00U) /* Type 1 (SHMT1) */
#define _PORT_JPISn2_TYPE_SHMT4                   (0x04U) /* Type 2 (SHMT4) */
/* JPISn3 Specifies the input buffer characteristic (JPISn3) */
#define _PORT_JPISn3_TYPE_SHMT1                   (0x00U) /* Type 1 (SHMT1) */
#define _PORT_JPISn3_TYPE_SHMT4                   (0x08U) /* Type 2 (SHMT4) */
/* JPISn4 Specifies the input buffer characteristic (JPISn4) */
#define _PORT_JPISn4_TYPE_SHMT1                   (0x00U) /* Type 1 (SHMT1) */
#define _PORT_JPISn4_TYPE_SHMT4                   (0x10U) /* Type 2 (SHMT4) */
/* JPISn5 Specifies the input buffer characteristic (JPISn5) */
#define _PORT_JPISn5_TYPE_SHMT1                   (0x00U) /* Type 1 (SHMT1) */
#define _PORT_JPISn5_TYPE_SHMT4                   (0x20U) /* Type 2 (SHMT4) */
/* JPISn6 Specifies the input buffer characteristic (JPISn6) */
#define _PORT_JPISn6_TYPE_SHMT1                   (0x00U) /* Type 1 (SHMT1) */
#define _PORT_JPISn6_TYPE_SHMT4                   (0x40U) /* Type 2 (SHMT4) */
/* JPISn7 Specifies the input buffer characteristic (JPISn7) */
#define _PORT_JPISn7_TYPE_SHMT1                   (0x00U) /* Type 1 (SHMT1) */
#define _PORT_JPISn7_TYPE_SHMT4                   (0x80U) /* Type 2 (SHMT4) */

/*
    Port Output value Inversion Register (JPINVn)
*/
/* JPINVn0 inverts the output value of the port (JPINVn0) */
#define _PORT_JPINVn0_OUTPUTINVERTED_OFF          (0x00U) /* No effect */
#define _PORT_JPINVn0_OUTPUTINVERTED_ON           (0x01U) /* Inverted value is output */
/* JPINVn1 inverts the output value of the port (JPINVn1) */
#define _PORT_JPINVn1_OUTPUTINVERTED_OFF          (0x00U) /* No effect */
#define _PORT_JPINVn1_OUTPUTINVERTED_ON           (0x02U) /* Inverted value is output */
/* JPINVn2 inverts the output value of the port (JPINVn2) */
#define _PORT_JPINVn2_OUTPUTINVERTED_OFF          (0x00U) /* No effect */
#define _PORT_JPINVn2_OUTPUTINVERTED_ON           (0x04U) /* Inverted value is output */
/* JPINVn3 inverts the output value of the port (JPINVn3) */
#define _PORT_JPINVn3_OUTPUTINVERTED_OFF          (0x00U) /* No effect */
#define _PORT_JPINVn3_OUTPUTINVERTED_ON           (0x08U) /* Inverted value is output */
/* JPINVn4 inverts the output value of the port (JPINVn4) */
#define _PORT_JPINVn4_OUTPUTINVERTED_OFF          (0x00U) /* No effect */
#define _PORT_JPINVn4_OUTPUTINVERTED_ON           (0x10U) /* Inverted value is output */
/* JPINVn5 inverts the output value of the port (JPINVn5) */
#define _PORT_JPINVn5_OUTPUTINVERTED_OFF          (0x00U) /* No effect */
#define _PORT_JPINVn5_OUTPUTINVERTED_ON           (0x20U) /* Inverted value is output */
/* JPINVn6 inverts the output value of the port (JPINVn6) */
#define _PORT_JPINVn6_OUTPUTINVERTED_OFF          (0x00U) /* No effect */
#define _PORT_JPINVn6_OUTPUTINVERTED_ON           (0x40U) /* Inverted value is output */
/* JPINVn7 inverts the output value of the port (JPINVn7) */
#define _PORT_JPINVn7_OUTPUTINVERTED_OFF          (0x00U) /* No effect */
#define _PORT_JPINVn7_OUTPUTINVERTED_ON           (0x80U) /* Inverted value is output */

/*
    Port Output value Inversion Register (PINVn)
*/
/* PINVn0 inverts the output value of the port (PINVn0) */
#define _PORT_PINVn0_OUTPUTINVERTED_OFF           (0x0000U) /* No effect */
#define _PORT_PINVn0_OUTPUTINVERTED_ON            (0x0001U) /* Inverted value is output */
/* PINVn1 inverts the output value of the port (PINVn1) */
#define _PORT_PINVn1_OUTPUTINVERTED_OFF           (0x0000U) /* No effect */
#define _PORT_PINVn1_OUTPUTINVERTED_ON            (0x0002U) /* Inverted value is output */
/* PINVn2 inverts the output value of the port (PINVn2) */
#define _PORT_PINVn2_OUTPUTINVERTED_OFF           (0x0000U) /* No effect */
#define _PORT_PINVn2_OUTPUTINVERTED_ON            (0x0004U) /* Inverted value is output */
/* PINVn3 inverts the output value of the port (PINVn3) */
#define _PORT_PINVn3_OUTPUTINVERTED_OFF           (0x0000U) /* No effect */
#define _PORT_PINVn3_OUTPUTINVERTED_ON            (0x0008U) /* Inverted value is output */
/* PINVn4 inverts the output value of the port (PINVn4) */
#define _PORT_PINVn4_OUTPUTINVERTED_OFF           (0x0000U) /* No effect */
#define _PORT_PINVn4_OUTPUTINVERTED_ON            (0x0010U) /* Inverted value is output */
/* PINVn5 inverts the output value of the port (PINVn5) */
#define _PORT_PINVn5_OUTPUTINVERTED_OFF           (0x0000U) /* No effect */
#define _PORT_PINVn5_OUTPUTINVERTED_ON            (0x0020U) /* Inverted value is output */
/* PINVn6 inverts the output value of the port (PINVn6) */
#define _PORT_PINVn6_OUTPUTINVERTED_OFF           (0x0000U) /* No effect */
#define _PORT_PINVn6_OUTPUTINVERTED_ON            (0x0040U) /* Inverted value is output */
/* PINVn7 inverts the output value of the port (PINVn7) */
#define _PORT_PINVn7_OUTPUTINVERTED_OFF           (0x0000U) /* No effect */
#define _PORT_PINVn7_OUTPUTINVERTED_ON            (0x0080U) /* Inverted value is output */
/* PINVn8 inverts the output value of the port (PINVn8) */
#define _PORT_PINVn8_OUTPUTINVERTED_OFF           (0x0000U) /* No effect */
#define _PORT_PINVn8_OUTPUTINVERTED_ON            (0x0100U) /* Inverted value is output */
/* PINVn9 inverts the output value of the port (PINVn9) */
#define _PORT_PINVn9_OUTPUTINVERTED_OFF           (0x0000U) /* No effect */
#define _PORT_PINVn9_OUTPUTINVERTED_ON            (0x0200U) /* Inverted value is output */
/* PINVn10 inverts the output value of the port (PINVn10) */
#define _PORT_PINVn10_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_PINVn10_OUTPUTINVERTED_ON           (0x0400U) /* Inverted value is output */
/* PINVn11 inverts the output value of the port (PINVn11) */
#define _PORT_PINVn11_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_PINVn11_OUTPUTINVERTED_ON           (0x0800U) /* Inverted value is output */
/* PINVn12 inverts the output value of the port (PINVn12) */
#define _PORT_PINVn12_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_PINVn12_OUTPUTINVERTED_ON           (0x1000U) /* Inverted value is output */
/* PINVn13 inverts the output value of the port (PINVn13) */
#define _PORT_PINVn13_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_PINVn13_OUTPUTINVERTED_ON           (0x2000U) /* Inverted value is output */
/* PINVn14 inverts the output value of the port (PINVn14) */
#define _PORT_PINVn14_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_PINVn14_OUTPUTINVERTED_ON           (0x4000U) /* Inverted value is output */
/* PINVn15 inverts the output value of the port (PINVn15) */
#define _PORT_PINVn15_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_PINVn15_OUTPUTINVERTED_ON           (0x8000U) /* Inverted value is output */

/*
    Port Output value Inversion Register (APINVn)
*/
/* APINVn0 inverts the output value of the port (APINVn0) */
#define _PORT_APINVn0_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_APINVn0_OUTPUTINVERTED_ON           (0x0001U) /* Inverted value is output */
/* APINVn1 inverts the output value of the port (APINVn1) */
#define _PORT_APINVn1_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_APINVn1_OUTPUTINVERTED_ON           (0x0002U) /* Inverted value is output */
/* APINVn2 inverts the output value of the port (APINVn2) */
#define _PORT_APINVn2_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_APINVn2_OUTPUTINVERTED_ON           (0x0004U) /* Inverted value is output */
/* APINVn3 inverts the output value of the port (APINVn3) */
#define _PORT_APINVn3_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_APINVn3_OUTPUTINVERTED_ON           (0x0008U) /* Inverted value is output */
/* APINVn4 inverts the output value of the port (APINVn4) */
#define _PORT_APINVn4_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_APINVn4_OUTPUTINVERTED_ON           (0x0010U) /* Inverted value is output */
/* APINVn5 inverts the output value of the port (APINVn5) */
#define _PORT_APINVn5_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_APINVn5_OUTPUTINVERTED_ON           (0x0020U) /* Inverted value is output */
/* APINVn6 inverts the output value of the port (APINVn6) */
#define _PORT_APINVn6_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_APINVn6_OUTPUTINVERTED_ON           (0x0040U) /* Inverted value is output */
/* APINVn7 inverts the output value of the port (APINVn7) */
#define _PORT_APINVn7_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_APINVn7_OUTPUTINVERTED_ON           (0x0080U) /* Inverted value is output */
/* APINVn8 inverts the output value of the port (APINVn8) */
#define _PORT_APINVn8_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_APINVn8_OUTPUTINVERTED_ON           (0x0100U) /* Inverted value is output */
/* APINVn9 inverts the output value of the port (APINVn9) */
#define _PORT_APINVn9_OUTPUTINVERTED_OFF          (0x0000U) /* No effect */
#define _PORT_APINVn9_OUTPUTINVERTED_ON           (0x0200U) /* Inverted value is output */
/* APINVn10 inverts the output value of the port (APINVn10) */
#define _PORT_APINVn10_OUTPUTINVERTED_OFF         (0x0000U) /* No effect */
#define _PORT_APINVn10_OUTPUTINVERTED_ON          (0x0400U) /* Inverted value is output */
/* APINVn11 inverts the output value of the port (APINVn11) */
#define _PORT_APINVn11_OUTPUTINVERTED_OFF         (0x0000U) /* No effect */
#define _PORT_APINVn11_OUTPUTINVERTED_ON          (0x0800U) /* Inverted value is output */
/* APINVn12 inverts the output value of the port (APINVn12) */
#define _PORT_APINVn12_OUTPUTINVERTED_OFF         (0x0000U) /* No effect */
#define _PORT_APINVn12_OUTPUTINVERTED_ON          (0x1000U) /* Inverted value is output */
/* APINVn13 inverts the output value of the port (APINVn13) */
#define _PORT_APINVn13_OUTPUTINVERTED_OFF         (0x0000U) /* No effect */
#define _PORT_APINVn13_OUTPUTINVERTED_ON          (0x2000U) /* Inverted value is output */
/* APINVn14 inverts the output value of the port (APINVn14) */
#define _PORT_APINVn14_OUTPUTINVERTED_OFF         (0x0000U) /* No effect */
#define _PORT_APINVn14_OUTPUTINVERTED_ON          (0x4000U) /* Inverted value is output */
/* APINVn15 inverts the output value of the port (APINVn15) */
#define _PORT_APINVn15_OUTPUTINVERTED_OFF         (0x0000U) /* No effect */
#define _PORT_APINVn15_OUTPUTINVERTED_ON          (0x8000U) /* Inverted value is output */

/*
    Port Safe State Control Register (PSFCn)
*/
/* PSFCn0 enable and disable port safe state function. (PSFCn0) */
#define _PORT_PSFCn0_SAFE_DISABLE                 (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn0_SAFE_ENABLE                  (0x0001U) /* Port safe state function is enabled. */
/* PSFCn1 enable and disable port safe state function. (PSFCn1) */
#define _PORT_PSFCn1_SAFE_DISABLE                 (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn1_SAFE_ENABLE                  (0x0002U) /* Port safe state function is enabled. */
/* PSFCn2 enable and disable port safe state function. (PSFCn2) */
#define _PORT_PSFCn2_SAFE_DISABLE                 (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn2_SAFE_ENABLE                  (0x0004U) /* Port safe state function is enabled. */
/* PSFCn3 enable and disable port safe state function. (PSFCn3) */
#define _PORT_PSFCn3_SAFE_DISABLE                 (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn3_SAFE_ENABLE                  (0x0008U) /* Port safe state function is enabled. */
/* PSFCn4 enable and disable port safe state function. (PSFCn4) */
#define _PORT_PSFCn4_SAFE_DISABLE                 (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn4_SAFE_ENABLE                  (0x0010U) /* Port safe state function is enabled. */
/* PSFCn5 enable and disable port safe state function. (PSFCn5) */
#define _PORT_PSFCn5_SAFE_DISABLE                 (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn5_SAFE_ENABLE                  (0x0020U) /* Port safe state function is enabled. */
/* PSFCn6 enable and disable port safe state function. (PSFCn6) */
#define _PORT_PSFCn6_SAFE_DISABLE                 (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn6_SAFE_ENABLE                  (0x0040U) /* Port safe state function is enabled. */
/* PSFCn7 enable and disable port safe state function. (PSFCn7) */
#define _PORT_PSFCn7_SAFE_DISABLE                 (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn7_SAFE_ENABLE                  (0x0080U) /* Port safe state function is enabled. */
/* PSFCn8 enable and disable port safe state function. (PSFCn8) */
#define _PORT_PSFCn8_SAFE_DISABLE                 (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn8_SAFE_ENABLE                  (0x0100U) /* Port safe state function is enabled. */
/* PSFCn9 enable and disable port safe state function. (PSFCn9) */
#define _PORT_PSFCn9_SAFE_DISABLE                 (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn9_SAFE_ENABLE                  (0x0200U) /* Port safe state function is enabled. */
/* PSFCn10 enable and disable port safe state function. (PSFCn10) */
#define _PORT_PSFCn10_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn10_SAFE_ENABLE                 (0x0400U) /* Port safe state function is enabled. */
/* PSFCn11 enable and disable port safe state function. (PSFCn11) */
#define _PORT_PSFCn11_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn11_SAFE_ENABLE                 (0x0800U) /* Port safe state function is enabled. */
/* PSFCn12 enable and disable port safe state function. (PSFCn12) */
#define _PORT_PSFCn12_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn12_SAFE_ENABLE                 (0x1000U) /* Port safe state function is enabled. */
/* PSFCn13 enable and disable port safe state function. (PSFCn13) */
#define _PORT_PSFCn13_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn13_SAFE_ENABLE                 (0x2000U) /* Port safe state function is enabled. */
/* PSFCn14 enable and disable port safe state function. (PSFCn14) */
#define _PORT_PSFCn14_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn14_SAFE_ENABLE                 (0x4000U) /* Port safe state function is enabled. */
/* PSFCn15 enable and disable port safe state function. (PSFCn15) */
#define _PORT_PSFCn15_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_PSFCn15_SAFE_ENABLE                 (0x8000U) /* Port safe state function is enabled. */

/*
    Port Safe State Trigger Selection register (PSFTSn)
*/
/* Select the defined application in Port Safe State mode. (PSFTSn0) */
#define _PORT_PSFTSn0_SAFE_TRIGGER0_TRIGGER2      (0x0000U) /* PSFTSn0 set 0 */
#define _PORT_PSFTSn0_SAFE_TRIGGER1_TRIGGER3      (0x0001U) /* PSFTSn0 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn1) */
#define _PORT_PSFTSn1_SAFE_TRIGGER0_TRIGGER2      (0x0000U) /* PSFTSn1 set 0 */
#define _PORT_PSFTSn1_SAFE_TRIGGER1_TRIGGER3      (0x0002U) /* PSFTSn1 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn2) */
#define _PORT_PSFTSn2_SAFE_TRIGGER0_TRIGGER2      (0x0000U) /* PSFTSn2 set 0 */
#define _PORT_PSFTSn2_SAFE_TRIGGER1_TRIGGER3      (0x0004U) /* PSFTSn2 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn3) */
#define _PORT_PSFTSn3_SAFE_TRIGGER0_TRIGGER2      (0x0000U) /* PSFTSn3 set 0 */
#define _PORT_PSFTSn3_SAFE_TRIGGER1_TRIGGER3      (0x0008U) /* PSFTSn3 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn4) */
#define _PORT_PSFTSn4_SAFE_TRIGGER0_TRIGGER2      (0x0000U) /* PSFTSn4 set 0 */
#define _PORT_PSFTSn4_SAFE_TRIGGER1_TRIGGER3      (0x0010U) /* PSFTSn4 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn5) */
#define _PORT_PSFTSn5_SAFE_TRIGGER0_TRIGGER2      (0x0000U) /* PSFTSn5 set 0 */
#define _PORT_PSFTSn5_SAFE_TRIGGER1_TRIGGER3      (0x0020U) /* PSFTSn5 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn6) */
#define _PORT_PSFTSn6_SAFE_TRIGGER0_TRIGGER2      (0x0000U) /* PSFTSn6 set 0 */
#define _PORT_PSFTSn6_SAFE_TRIGGER1_TRIGGER3      (0x0040U) /* PSFTSn6 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn7) */
#define _PORT_PSFTSn7_SAFE_TRIGGER0_TRIGGER2      (0x0000U) /* PSFTSn7 set 0 */
#define _PORT_PSFTSn7_SAFE_TRIGGER1_TRIGGER3      (0x0080U) /* PSFTSn7 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn8) */
#define _PORT_PSFTSn8_SAFE_TRIGGER0_TRIGGER2      (0x0000U) /* PSFTSn8 set 0 */
#define _PORT_PSFTSn8_SAFE_TRIGGER1_TRIGGER3      (0x0100U) /* PSFTSn8 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn9) */
#define _PORT_PSFTSn9_SAFE_TRIGGER0_TRIGGER2      (0x0000U) /* PSFTSn9 set 0 */
#define _PORT_PSFTSn9_SAFE_TRIGGER1_TRIGGER3      (0x0200U) /* PSFTSn9 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn10) */
#define _PORT_PSFTSn10_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* PSFTSn10 set 0 */
#define _PORT_PSFTSn10_SAFE_TRIGGER1_TRIGGER3     (0x0400U) /* PSFTSn10 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn11) */
#define _PORT_PSFTSn11_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* PSFTSn11 set 0 */
#define _PORT_PSFTSn11_SAFE_TRIGGER1_TRIGGER3     (0x0800U) /* PSFTSn11 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn12) */
#define _PORT_PSFTSn12_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* PSFTSn12 set 0 */
#define _PORT_PSFTSn12_SAFE_TRIGGER1_TRIGGER3     (0x1000U) /* PSFTSn12 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn13) */
#define _PORT_PSFTSn13_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* PSFTSn13 set 0 */
#define _PORT_PSFTSn13_SAFE_TRIGGER1_TRIGGER3     (0x2000U) /* PSFTSn13 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn14) */
#define _PORT_PSFTSn14_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* PSFTSn14 set 0 */
#define _PORT_PSFTSn14_SAFE_TRIGGER1_TRIGGER3     (0x4000U) /* PSFTSn14 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSn15) */
#define _PORT_PSFTSn15_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* PSFTSn15 set 0 */
#define _PORT_PSFTSn15_SAFE_TRIGGER1_TRIGGER3     (0x8000U) /* PSFTSn15 set 1 */

/*
    Port Safe State Trigger Selection Expansion register (PSFTSEn)
*/
/* Select the defined application in Port Safe State mode. (PSFTSEn0) */
#define _PORT_PSFTSEn0_SAFE_TRIGGER0_TRIGGER1     (0x0000U) /* PSFTSEn0 set 0 */
#define _PORT_PSFTSEn0_SAFE_TRIGGER2_TRIGGER3     (0x0001U) /* PSFTSEn0 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn1) */
#define _PORT_PSFTSEn1_SAFE_TRIGGER0_TRIGGER1     (0x0000U) /* PSFTSn1 set 0 */
#define _PORT_PSFTSEn1_SAFE_TRIGGER2_TRIGGER3     (0x0002U) /* PSFTSn1 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn2) */
#define _PORT_PSFTSEn2_SAFE_TRIGGER0_TRIGGER1     (0x0000U) /* PSFTSn2 set 0 */
#define _PORT_PSFTSEn2_SAFE_TRIGGER2_TRIGGER3     (0x0004U) /* PSFTSn2 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn3) */
#define _PORT_PSFTSEn3_SAFE_TRIGGER0_TRIGGER1     (0x0000U) /* PSFTSn3 set 0 */
#define _PORT_PSFTSEn3_SAFE_TRIGGER2_TRIGGER3     (0x0008U) /* PSFTSn3 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn4) */
#define _PORT_PSFTSEn4_SAFE_TRIGGER0_TRIGGER1     (0x0000U) /* PSFTSn4 set 0 */
#define _PORT_PSFTSEn4_SAFE_TRIGGER2_TRIGGER3     (0x0010U) /* PSFTSn4 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn5) */
#define _PORT_PSFTSEn5_SAFE_TRIGGER0_TRIGGER1     (0x0000U) /* PSFTSn5 set 0 */
#define _PORT_PSFTSEn5_SAFE_TRIGGER2_TRIGGER3     (0x0020U) /* PSFTSn5 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn6) */
#define _PORT_PSFTSEn6_SAFE_TRIGGER0_TRIGGER1     (0x0000U) /* PSFTSn6 set 0 */
#define _PORT_PSFTSEn6_SAFE_TRIGGER2_TRIGGER3     (0x0040U) /* PSFTSn6 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn7) */
#define _PORT_PSFTSEn7_SAFE_TRIGGER0_TRIGGER1     (0x0000U) /* PSFTSn7 set 0 */
#define _PORT_PSFTSEn7_SAFE_TRIGGER2_TRIGGER3     (0x0080U) /* PSFTSn7 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn8) */
#define _PORT_PSFTSEn8_SAFE_TRIGGER0_TRIGGER1     (0x0000U) /* PSFTSn8 set 0 */
#define _PORT_PSFTSEn8_SAFE_TRIGGER2_TRIGGER3     (0x0100U) /* PSFTSn8 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn9) */
#define _PORT_PSFTSEn9_SAFE_TRIGGER0_TRIGGER1     (0x0000U) /* PSFTSn9 set 0 */
#define _PORT_PSFTSEn9_SAFE_TRIGGER2_TRIGGER3     (0x0200U) /* PSFTSn9 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn10) */
#define _PORT_PSFTSEn10_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* PSFTSn10 set 0 */
#define _PORT_PSFTSEn10_SAFE_TRIGGER2_TRIGGER3    (0x0400U) /* PSFTSn10 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn11) */
#define _PORT_PSFTSEn11_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* PSFTSn11 set 0 */
#define _PORT_PSFTSEn11_SAFE_TRIGGER2_TRIGGER3    (0x0800U) /* PSFTSn11 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn12) */
#define _PORT_PSFTSEn12_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* PSFTSn12 set 0 */
#define _PORT_PSFTSEn12_SAFE_TRIGGER2_TRIGGER3    (0x1000U) /* PSFTSn12 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn13) */
#define _PORT_PSFTSEn13_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* PSFTSn13 set 0 */
#define _PORT_PSFTSEn13_SAFE_TRIGGER2_TRIGGER3    (0x2000U) /* PSFTSn13 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn14) */
#define _PORT_PSFTSEn14_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* PSFTSn14 set 0 */
#define _PORT_PSFTSEn14_SAFE_TRIGGER2_TRIGGER3    (0x4000U) /* PSFTSn14 set 1 */
/* Select the defined application in Port Safe State mode. (PSFTSEn15) */
#define _PORT_PSFTSEn15_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* PSFTSn15 set 0 */
#define _PORT_PSFTSEn15_SAFE_TRIGGER2_TRIGGER3    (0x8000U) /* PSFTSn15 set 1 */

/*
    Port Safe State Control Register (APSFCn)
*/
/* APSFCn0 enable and disable port safe state function. (APSFCn0) */
#define _PORT_APSFCn0_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn0_SAFE_ENABLE                 (0x0001U) /* Port safe state function is enabled. */
/* APSFCn1 enable and disable port safe state function. (APSFCn1) */
#define _PORT_APSFCn1_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn1_SAFE_ENABLE                 (0x0002U) /* Port safe state function is enabled. */
/* APSFCn2 enable and disable port safe state function. (APSFCn2) */
#define _PORT_APSFCn2_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn2_SAFE_ENABLE                 (0x0004U) /* Port safe state function is enabled. */
/* APSFCn3 enable and disable port safe state function. (APSFCn3) */
#define _PORT_APSFCn3_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn3_SAFE_ENABLE                 (0x0008U) /* Port safe state function is enabled. */
/* APSFCn4 enable and disable port safe state function. (APSFCn4) */
#define _PORT_APSFCn4_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn4_SAFE_ENABLE                 (0x0010U) /* Port safe state function is enabled. */
/* APSFCn5 enable and disable port safe state function. (APSFCn5) */
#define _PORT_APSFCn5_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn5_SAFE_ENABLE                 (0x0020U) /* Port safe state function is enabled. */
/* APSFCn6 enable and disable port safe state function. (APSFCn6) */
#define _PORT_APSFCn6_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn6_SAFE_ENABLE                 (0x0040U) /* Port safe state function is enabled. */
/* APSFCn7 enable and disable port safe state function. (APSFCn7) */
#define _PORT_APSFCn7_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn7_SAFE_ENABLE                 (0x0080U) /* Port safe state function is enabled. */
/* APSFCn8 enable and disable port safe state function. (APSFCn8) */
#define _PORT_APSFCn8_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn8_SAFE_ENABLE                 (0x0100U) /* Port safe state function is enabled. */
/* APSFCn9 enable and disable port safe state function. (APSFCn9) */
#define _PORT_APSFCn9_SAFE_DISABLE                (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn9_SAFE_ENABLE                 (0x0200U) /* Port safe state function is enabled. */
/* APSFCn10 enable and disable port safe state function. (APSFCn10) */
#define _PORT_APSFCn10_SAFE_DISABLE               (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn10_SAFE_ENABLE                (0x0400U) /* Port safe state function is enabled. */
/* APSFCn11 enable and disable port safe state function. (APSFCn11) */
#define _PORT_APSFCn11_SAFE_DISABLE               (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn11_SAFE_ENABLE                (0x0800U) /* Port safe state function is enabled. */
/* APSFCn12 enable and disable port safe state function. (APSFCn12) */
#define _PORT_APSFCn12_SAFE_DISABLE               (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn12_SAFE_ENABLE                (0x1000U) /* Port safe state function is enabled. */
/* APSFCn13 enable and disable port safe state function. (APSFCn13) */
#define _PORT_APSFCn13_SAFE_DISABLE               (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn13_SAFE_ENABLE                (0x2000U) /* Port safe state function is enabled. */
/* APSFCn14 enable and disable port safe state function. (APSFCn14) */
#define _PORT_APSFCn14_SAFE_DISABLE               (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn14_SAFE_ENABLE                (0x4000U) /* Port safe state function is enabled. */
/* APSFCn15 enable and disable port safe state function. (APSFCn15) */
#define _PORT_APSFCn15_SAFE_DISABLE               (0x0000U) /* Port safe state function is disabled. */
#define _PORT_APSFCn15_SAFE_ENABLE                (0x8000U) /* Port safe state function is enabled. */

/*
    Port Safe State Trigger Selection register (APSFTSn)
*/
/* Select the defined application in Port Safe State mode. (APSFTSn0) */
#define _PORT_APSFTSn0_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* APSFTSn0 set 0 */
#define _PORT_APSFTSn0_SAFE_TRIGGER1_TRIGGER3     (0x0001U) /* APSFTSn0 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn1) */
#define _PORT_APSFTSn1_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* APSFTSn1 set 0 */
#define _PORT_APSFTSn1_SAFE_TRIGGER1_TRIGGER3     (0x0002U) /* APSFTSn1 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn2) */
#define _PORT_APSFTSn2_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* APSFTSn2 set 0 */
#define _PORT_APSFTSn2_SAFE_TRIGGER1_TRIGGER3     (0x0004U) /* APSFTSn2 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn3) */
#define _PORT_APSFTSn3_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* APSFTSn3 set 0 */
#define _PORT_APSFTSn3_SAFE_TRIGGER1_TRIGGER3     (0x0008U) /* APSFTSn3 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn4) */
#define _PORT_APSFTSn4_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* APSFTSn4 set 0 */
#define _PORT_APSFTSn4_SAFE_TRIGGER1_TRIGGER3     (0x0010U) /* APSFTSn4 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn5) */
#define _PORT_APSFTSn5_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* APSFTSn5 set 0 */
#define _PORT_APSFTSn5_SAFE_TRIGGER1_TRIGGER3     (0x0020U) /* APSFTSn5 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn6) */
#define _PORT_APSFTSn6_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* APSFTSn6 set 0 */
#define _PORT_APSFTSn6_SAFE_TRIGGER1_TRIGGER3     (0x0040U) /* APSFTSn6 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn7) */
#define _PORT_APSFTSn7_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* APSFTSn7 set 0 */
#define _PORT_APSFTSn7_SAFE_TRIGGER1_TRIGGER3     (0x0080U) /* APSFTSn7 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn8) */
#define _PORT_APSFTSn8_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* APSFTSn8 set 0 */
#define _PORT_APSFTSn8_SAFE_TRIGGER1_TRIGGER3     (0x0100U) /* APSFTSn8 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn9) */
#define _PORT_APSFTSn9_SAFE_TRIGGER0_TRIGGER2     (0x0000U) /* APSFTSn9 set 0 */
#define _PORT_APSFTSn9_SAFE_TRIGGER1_TRIGGER3     (0x0200U) /* APSFTSn9 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn10) */
#define _PORT_APSFTSn10_SAFE_TRIGGER0_TRIGGER2    (0x0000U) /* APSFTSn10 set 0 */
#define _PORT_APSFTSn10_SAFE_TRIGGER1_TRIGGER3    (0x0400U) /* APSFTSn10 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn11) */
#define _PORT_APSFTSn11_SAFE_TRIGGER0_TRIGGER2    (0x0000U) /* APSFTSn11 set 0 */
#define _PORT_APSFTSn11_SAFE_TRIGGER1_TRIGGER3    (0x0800U) /* APSFTSn11 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn12) */
#define _PORT_APSFTSn12_SAFE_TRIGGER0_TRIGGER2    (0x0000U) /* APSFTSn12 set 0 */
#define _PORT_APSFTSn12_SAFE_TRIGGER1_TRIGGER3    (0x1000U) /* APSFTSn12 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn13) */
#define _PORT_APSFTSn13_SAFE_TRIGGER0_TRIGGER2    (0x0000U) /* APSFTSn13 set 0 */
#define _PORT_APSFTSn13_SAFE_TRIGGER1_TRIGGER3    (0x2000U) /* APSFTSn13 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn14) */
#define _PORT_APSFTSn14_SAFE_TRIGGER0_TRIGGER2    (0x0000U) /* APSFTSn14 set 0 */
#define _PORT_APSFTSn14_SAFE_TRIGGER1_TRIGGER3    (0x4000U) /* APSFTSn14 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSn15) */
#define _PORT_APSFTSn15_SAFE_TRIGGER0_TRIGGER2    (0x0000U) /* APSFTSn15 set 0 */
#define _PORT_APSFTSn15_SAFE_TRIGGER1_TRIGGER3    (0x8000U) /* APSFTSn15 set 1 */

/*
    Port Safe State Trigger Selection Expansion register (APSFTSEn)
*/
/* Select the defined application in Port Safe State mode. (APSFTSEn0) */
#define _PORT_APSFTSEn0_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* APSFTSEn0 set 0 */
#define _PORT_APSFTSEn0_SAFE_TRIGGER2_TRIGGER3    (0x0001U) /* APSFTSEn0 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn1) */
#define _PORT_APSFTSEn1_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* APSFTSn1 set 0 */
#define _PORT_APSFTSEn1_SAFE_TRIGGER2_TRIGGER3    (0x0002U) /* APSFTSn1 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn2) */
#define _PORT_APSFTSEn2_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* APSFTSn2 set 0 */
#define _PORT_APSFTSEn2_SAFE_TRIGGER2_TRIGGER3    (0x0004U) /* APSFTSn2 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn3) */
#define _PORT_APSFTSEn3_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* APSFTSn3 set 0 */
#define _PORT_APSFTSEn3_SAFE_TRIGGER2_TRIGGER3    (0x0008U) /* APSFTSn3 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn4) */
#define _PORT_APSFTSEn4_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* APSFTSn4 set 0 */
#define _PORT_APSFTSEn4_SAFE_TRIGGER2_TRIGGER3    (0x0010U) /* APSFTSn4 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn5) */
#define _PORT_APSFTSEn5_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* APSFTSn5 set 0 */
#define _PORT_APSFTSEn5_SAFE_TRIGGER2_TRIGGER3    (0x0020U) /* APSFTSn5 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn6) */
#define _PORT_APSFTSEn6_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* APSFTSn6 set 0 */
#define _PORT_APSFTSEn6_SAFE_TRIGGER2_TRIGGER3    (0x0040U) /* APSFTSn6 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn7) */
#define _PORT_APSFTSEn7_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* APSFTSn7 set 0 */
#define _PORT_APSFTSEn7_SAFE_TRIGGER2_TRIGGER3    (0x0080U) /* APSFTSn7 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn8) */
#define _PORT_APSFTSEn8_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* APSFTSn8 set 0 */
#define _PORT_APSFTSEn8_SAFE_TRIGGER2_TRIGGER3    (0x0100U) /* APSFTSn8 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn9) */
#define _PORT_APSFTSEn9_SAFE_TRIGGER0_TRIGGER1    (0x0000U) /* APSFTSn9 set 0 */
#define _PORT_APSFTSEn9_SAFE_TRIGGER2_TRIGGER3    (0x0200U) /* APSFTSn9 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn10) */
#define _PORT_APSFTSEn10_SAFE_TRIGGER0_TRIGGER1   (0x0000U) /* APSFTSn10 set 0 */
#define _PORT_APSFTSEn10_SAFE_TRIGGER2_TRIGGER3   (0x0400U) /* APSFTSn10 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn11) */
#define _PORT_APSFTSEn11_SAFE_TRIGGER0_TRIGGER1   (0x0000U) /* APSFTSn11 set 0 */
#define _PORT_APSFTSEn11_SAFE_TRIGGER2_TRIGGER3   (0x0800U) /* APSFTSn11 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn12) */
#define _PORT_APSFTSEn12_SAFE_TRIGGER0_TRIGGER1   (0x0000U) /* APSFTSn12 set 0 */
#define _PORT_APSFTSEn12_SAFE_TRIGGER2_TRIGGER3   (0x1000U) /* APSFTSn12 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn13) */
#define _PORT_APSFTSEn13_SAFE_TRIGGER0_TRIGGER1   (0x0000U) /* APSFTSn13 set 0 */
#define _PORT_APSFTSEn13_SAFE_TRIGGER2_TRIGGER3   (0x2000U) /* APSFTSn13 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn14) */
#define _PORT_APSFTSEn14_SAFE_TRIGGER0_TRIGGER1   (0x0000U) /* APSFTSn14 set 0 */
#define _PORT_APSFTSEn14_SAFE_TRIGGER2_TRIGGER3   (0x4000U) /* APSFTSn14 set 1 */
/* Select the defined application in Port Safe State mode. (APSFTSEn15) */
#define _PORT_APSFTSEn15_SAFE_TRIGGER0_TRIGGER1   (0x0000U) /* APSFTSn15 set 0 */
#define _PORT_APSFTSEn15_SAFE_TRIGGER2_TRIGGER3   (0x8000U) /* APSFTSn15 set 1 */

/*
    JTAG port input buffer selection advanced register (JPISAn)
*/
/* JPISAn0 Specifies the input buffer characteristic (JPISAn0) */
#define _PORT_JPISAn0_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn0_TYPE_TTL                    (0x01U) /* Type 5 (TTL) */
/* JPISAn1 Specifies the input buffer characteristic (JPISAn1) */
#define _PORT_JPISAn1_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn1_TYPE_TTL                    (0x02U) /* Type 5 (TTL) */
/* JPISAn2 Specifies the input buffer characteristic (JPISAn2) */
#define _PORT_JPISAn2_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn2_TYPE_TTL                    (0x04U) /* Type 5 (TTL) */
/* JPISAn3 Specifies the input buffer characteristic (JPISAn3) */
#define _PORT_JPISAn3_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn3_TYPE_TTL                    (0x08U) /* Type 5 (TTL) */
/* JPISAn4 Specifies the input buffer characteristic (JPISAn4) */
#define _PORT_JPISAn4_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn4_TYPE_TTL                    (0x10U) /* Type 5 (TTL) */
/* JPISAn5 Specifies the input buffer characteristic (JPISAn5) */
#define _PORT_JPISAn5_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn5_TYPE_TTL                    (0x20U) /* Type 5 (TTL) */
/* JPISAn6 Specifies the input buffer characteristic (JPISAn6) */
#define _PORT_JPISAn6_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn6_TYPE_TTL                    (0x40U) /* Type 5 (TTL) */
/* JPISAn7 Specifies the input buffer characteristic (JPISAn7) */
#define _PORT_JPISAn7_TYPE_SHMT1_OR_SHMT4         (0x00U) /* Type 2 (SHMT4) */
#define _PORT_JPISAn7_TYPE_TTL                    (0x80U) /* Type 5 (TTL) */

/*
    Port input buffer selection advanced register (PISAn)
*/
/* PISAn0 Specifies the input buffer characteristic (PISAn0) */
#define _PORT_PISAn0_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn0_TYPE_TTL                     (0x0001U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn1) */
#define _PORT_PISAn1_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn1_TYPE_TTL                     (0x0002U) /* Type 5 (TTL) */
/* PISAn2 Specifies the input buffer characteristic (PISAn2) */
#define _PORT_PISAn2_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn2_TYPE_TTL                     (0x0004U) /* Type 5 (TTL) */
/* PISAn3 Specifies the input buffer characteristic (PISAn3) */
#define _PORT_PISAn3_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn3_TYPE_TTL                     (0x0008U) /* Type 5 (TTL) */
/* PISAn4 Specifies the input buffer characteristic (PISAn4) */
#define _PORT_PISAn4_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn4_TYPE_TTL                     (0x0010U) /* Type 5 (TTL) */
/* PISAn5 Specifies the input buffer characteristic (PISAn5) */
#define _PORT_PISAn5_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn5_TYPE_TTL                     (0x0020U) /* Type 5 (TTL) */
/* PISAn6 Specifies the input buffer characteristic (PISAn6) */
#define _PORT_PISAn6_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn6_TYPE_TTL                     (0x0040U) /* Type 5 (TTL) */
/* PISAn7 Specifies the input buffer characteristic (PISAn7) */
#define _PORT_PISAn7_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn7_TYPE_TTL                     (0x0080U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn8) */
#define _PORT_PISAn8_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn8_TYPE_TTL                     (0x0100U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn9) */
#define _PORT_PISAn9_TYPE_SHMT1_OR_SHMT4          (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn9_TYPE_TTL                     (0x0200U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn10) */
#define _PORT_PISAn10_TYPE_SHMT1_OR_SHMT4         (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn10_TYPE_TTL                    (0x0400U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn11) */
#define _PORT_PISAn11_TYPE_SHMT1_OR_SHMT4         (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn11_TYPE_TTL                    (0x0800U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn12) */
#define _PORT_PISAn12_TYPE_SHMT1_OR_SHMT4         (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn12_TYPE_TTL                    (0x1000U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn13) */
#define _PORT_PISAn13_TYPE_SHMT1_OR_SHMT4         (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn13_TYPE_TTL                    (0x2000U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn14) */
#define _PORT_PISAn14_TYPE_SHMT1_OR_SHMT4         (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn14_TYPE_TTL                    (0x4000U) /* Type 5 (TTL) */
/* PISAn1 Specifies the input buffer characteristic (PISAn15) */
#define _PORT_PISAn15_TYPE_SHMT1_OR_SHMT4         (0x0000U) /* Type 2 (SHMT4) */
#define _PORT_PISAn15_TYPE_TTL                    (0x8000U) /* Type 5 (TTL) */

/*
    Port Write Enable Register (PWE)
*/
/* P0 registers write enable selection (PWEP0) */
#define _PORT_PWEP00_WRITE_DISABLE                (0x00000000UL) /* P0 registers write enable */
#define _PORT_PWEP00_WRITE_ENABLE                 (0x00000002UL) /* P0 registers write disable */
/* P1 registers write enable selection (PWEP1) */
#define _PORT_PWEP01_WRITE_DISABLE                (0x00000000UL) /* P1 registers write enable */
#define _PORT_PWEP01_WRITE_ENABLE                 (0x00000004UL) /* P1 registers write disable */
/* P2 registers write enable selection (PWEP2) */
#define _PORT_PWEP02_WRITE_DISABLE                (0x00000000UL) /* P2 registers write enable */
#define _PORT_PWEP02_WRITE_ENABLE                 (0x00000008UL) /* P2 registers write disable */
/* P3 registers write enable selection (PWEP3) */
#define _PORT_PWEP03_WRITE_DISABLE                (0x00000000UL) /* P3 registers write enable */
#define _PORT_PWEP03_WRITE_ENABLE                 (0x00000010UL) /* P3 registers write disable */
/* P4 registers write enable selection (PWEP4) */
#define _PORT_PWEP04_WRITE_DISABLE                (0x00000000UL) /* P4 registers write enable */
#define _PORT_PWEP04_WRITE_ENABLE                 (0x00000020UL) /* P4 registers write disable */
/* P5 registers write enable selection (PWEP5) */
#define _PORT_PWEP05_WRITE_DISABLE                (0x00000000UL) /* P5 registers write enable */
#define _PORT_PWEP05_WRITE_ENABLE                 (0x00000040UL) /* P5 registers write disable */
/* P6 registers write enable selection (PWEP6) */
#define _PORT_PWEP06_WRITE_DISABLE                (0x00000000UL) /* P6 registers write enable */
#define _PORT_PWEP06_WRITE_ENABLE                 (0x00000080UL) /* P6 registers write disable */
/* P8 registers write enable selection (PWEP8) */
#define _PORT_PWEP08_WRITE_DISABLE                (0x00000000UL) /* P8 registers write enable */
#define _PORT_PWEP08_WRITE_ENABLE                 (0x00000100UL) /* P8 registers write disable */
/* P9 registers write enable selection (PWEP9) */
#define _PORT_PWEP09_WRITE_DISABLE                (0x00000000UL) /* P9 registers write enable */
#define _PORT_PWEP09_WRITE_ENABLE                 (0x00000200UL) /* P9 registers write disable */
/* P10 registers write enable selection (PWEP10) */
#define _PORT_PWEP10_WRITE_DISABLE                (0x00000000UL) /* P10registers write enable */
#define _PORT_PWEP10_WRITE_ENABLE                 (0x00000400UL) /* P10registers write disable */
/* P11 registers write enable selection (PWEP11) */
#define _PORT_PWEP11_WRITE_DISABLE                (0x00000000UL) /* P11 registers write enable */
#define _PORT_PWEP11_WRITE_ENABLE                 (0x00000800UL) /* P11 registers write disable */
/* P12 registers write enable selection (PWEP12) */
#define _PORT_PWEP12_WRITE_DISABLE                (0x00000000UL) /* P12 registers write enable */
#define _PORT_PWEP12_WRITE_ENABLE                 (0x00001000UL) /* P12 registers write disable */
/* P17 registers write enable selection (PWEP17) */
#define _PORT_PWEP17_WRITE_DISABLE                (0x00000000UL) /* P17 registers write enable */
#define _PORT_PWEP17_WRITE_ENABLE                 (0x00002000UL) /* P17 registers write disable */
/* P18 registers write enable selection (PWEP18) */
#define _PORT_PWEP18_WRITE_DISABLE                (0x00000000UL) /* P18 registers write enable */
#define _PORT_PWEP18_WRITE_ENABLE                 (0x00004000UL) /* P18 registers write disable */
/* P19 registers write enable selection (PWEP19) */
#define _PORT_PWEP19_WRITE_DISABLE                (0x00000000UL) /* P19 registers write enable */
#define _PORT_PWEP19_WRITE_ENABLE                 (0x00008000UL) /* P19 registers write disable */
/* P20 registers write enable selection (PWEP20) */
#define _PORT_PWEP20_WRITE_DISABLE                (0x00000000UL) /* P20 registers write enable */
#define _PORT_PWEP20_WRITE_ENABLE                 (0x00010000UL) /* P20 registers write disable */
/* P21 registers write enable selection (PWEP21) */
#define _PORT_PWEP21_WRITE_DISABLE                (0x00000000UL) /* P21 registers write enable */
#define _PORT_PWEP21_WRITE_ENABLE                 (0x00020000UL) /* P21 registers write disable */
/* P22 registers write enable selection (PWEP22) */
#define _PORT_PWEP22_WRITE_DISABLE                (0x00000000UL) /* P22 registers write enable */
#define _PORT_PWEP22_WRITE_ENABLE                 (0x00040000UL) /* P22 registers write disable */
/* P23 registers write enable selection (PWEP23) */
#define _PORT_PWEP23_WRITE_DISABLE                (0x00000000UL) /* P23 registers write enable */
#define _PORT_PWEP23_WRITE_ENABLE                 (0x00080000UL) /* P23 registers write disable */
/* P24 registers write enable selection (PWEP24) */
#define _PORT_PWEP24_WRITE_DISABLE                (0x00000000UL) /* P24 registers write enable */
#define _PORT_PWEP24_WRITE_ENABLE                 (0x00100000UL) /* P24 registers write disable */
/* AP0 registers write enable selection (PWEAP0) */
#define _PORT_PWEAP0_WRITE_DISABLE                (0x00000000UL) /* AP0 registers write enable */
#define _PORT_PWEAP0_WRITE_ENABLE                 (0x00200000UL) /* AP0 registers write disable */
/* AP1 registers write enable selection (PWEAP1) */
#define _PORT_PWEAP1_WRITE_DISABLE                (0x00000000UL) /* AP1 registers write enable */
#define _PORT_PWEAP1_WRITE_ENABLE                 (0x00400000UL) /* AP1 registers write disable */
/* AP2 registers write enable selection (PWEAP2) */
#define _PORT_PWEAP2_WRITE_DISABLE                (0x00000000UL) /* AP2 registers write enable */
#define _PORT_PWEAP2_WRITE_ENABLE                 (0x00800000UL) /* AP2 registers write disable */
/* AP3 registers write enable selection (PWEAP3) */
#define _PORT_PWEAP3_WRITE_DISABLE                (0x00000000UL) /* AP3 registers write enable */
#define _PORT_PWEAP3_WRITE_ENABLE                 (0x01000000UL) /* AP3 registers write disable */
/* AP4 registers write enable selection (PWEAP4) */
#define _PORT_PWEAP4_WRITE_DISABLE                (0x00000000UL) /* AP4 registers write enable */
#define _PORT_PWEAP4_WRITE_ENABLE                 (0x02000000UL) /* AP4 registers write disable */
/* AP5 registers write enable selection (PWEAP5) */
#define _PORT_PWEAP5_WRITE_DISABLE                (0x00000000UL) /* AP5 registers write enable */
#define _PORT_PWEAP5_WRITE_ENABLE                 (0x04000000UL) /* AP5 registers write disable */

#define _PORT_PMn10_ALTERNATIVE_MODE_UNUSED       (0x0000U) /* P6_10 pin unused mode */

#define _PORT_PM_INIT                             (0xFFFFU) /* Port mode init */
#define _PORT_JPM_INIT                            (0xFFU) /* JTAG Port mode init */
#define _PORT_APM_INIT                            (0xFFFFU) /* APORT Port mode init */

#define _PORT_PMC_INIT                            (0x0000U) /* PMC init */
#define _PORT_JPMC_INIT                           (0x00U) /* JTAG PMC init */

#define _PORT_PBDC_INIT                           (0x0000U) /* PBDC init */
#define _PORT_JPBDC_INIT                          (0x00U) /* JPBDC init */
#define _PORT_APBDC_INIT                          (0x0000U) /* APBDC init */

#define _PORT_PIBC_INIT                           (0x0000U) /* PIBC init */
#define _PORT_JPIBC_INIT                          (0x00U) /* JTAG PIBC init */
#define _PORT_APIBC_INIT                          (0x0000U) /* APIBC init */

#define _PORT_PIPC_INIT                           (0x0000U) /* PIPC init */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
