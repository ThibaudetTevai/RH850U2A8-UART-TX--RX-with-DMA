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
* File Name        : r_cg_dma.h
* Version          : 1.0.150
* Device(s)        : R7F702301BEBBA
* Description      : General header file for DMA controller peripheral.
***********************************************************************************************************************/

#ifndef DMAC_H
#define DMAC_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    DMA Operation Register (DMAjOR)
*/
/* DMA Master Enable (DME) */
#define _DMAC_MASTER_DISABLE                                (0x0000U) /* Disable DMA transfers on all channels */
#define _DMAC_MASTER_ENABLE                                 (0x0001U) /* Enable DMA transfers on all channels */
/* Priority Mode (PR[1:0]) */
#define _DMAC_PRIORITY_FIXED                                (0x0000U) /* DMA suspension cleared */
#define _DMAC_PRIORITY_ROUND                                (0x0300U) /* DMA suspension request/ongoing */

/*
   DMA Channel Master Setting Register n (DMAjCM_n)
*/
/* Channel master UM setting (UM) */
#define _DMAC_UM_SUPERVISOR                                 (0x00000000UL) /* Supervisor mode */
#define _DMAC_UM_USER                                       (0x00000001UL) /* User mode */

/*
   DMA Transfer Mode Register n (DMAjTMR_n)
*/
/* DMA source transaction size (STS[3:0]) */
#define _DMAC_SOURCE_TRANSFER_1                             (0x00000000UL) /* 1-byte unit transfer */
#define _DMAC_SOURCE_TRANSFER_2                             (0x00000001UL) /* 2-byte unit transfer */
#define _DMAC_SOURCE_TRANSFER_4                             (0x00000002UL) /* 4-byte unit transfer */
#define _DMAC_SOURCE_TRANSFER_8                             (0x00000003UL) /* 8-byte unit transfer */
#define _DMAC_SOURCE_TRANSFER_16                            (0x00000004UL) /* 16-byte unit transfer */
#define _DMAC_SOURCE_TRANSFER_32                            (0x00000005UL) /* 32-byte unit transfer */
#define _DMAC_SOURCE_TRANSFER_64                            (0x00000006UL) /* 64-byte unit transfer */
/* DMA destination transaction size (DTS[3:0]) */
#define _DMAC_DESTINATION_TRANSFER_1                        (0x00000000UL) /* 1-byte unit transfer */
#define _DMAC_DESTINATION_TRANSFER_2                        (0x00000010UL) /* 2-byte unit transfer */
#define _DMAC_DESTINATION_TRANSFER_4                        (0x00000020UL) /* 4-byte unit transfer */
#define _DMAC_DESTINATION_TRANSFER_8                        (0x00000030UL) /* 8-byte unit transfer */
#define _DMAC_DESTINATION_TRANSFER_16                       (0x00000040UL) /* 16-byte unit transfer */
#define _DMAC_DESTINATION_TRANSFER_32                       (0x00000050UL) /* 32-byte unit transfer */
#define _DMAC_DESTINATION_TRANSFER_64                       (0x00000060UL) /* 64-byte unit transfer */
/* Source Address Mode (SM[1:0]) */
#define _DMAC_SOURCE_ADDRESS_FIXED                          (0x00000000UL) /* Fixed source address */
#define _DMAC_SOURCE_ADDRESS_INCREASED                      (0x00000100UL) /* Source address is incremented */
/* Destination address mode (DM[1:0]) */
#define _DMAC_DESTINATION_ADDRESS_FIXED                     (0x00000000UL) /* Fixed source address */
#define _DMAC_DESTINATION_ADDRESS_INCREASED                 (0x00000400UL) /* Source address is incremented */
/* Transfer request source (TRS) */
#define _DMAC_AUTO_REQUEST                                  (0x00000000UL) /* Auto request */
#define _DMAC_HW_REQUEST                                    (0x00001000UL) /* Hardware request */
/* Request priority (PRI[3]) */
#define _DMAC_REQUEST_PRIORITY_DISABLE                      (0x00000000UL) /* Request prority disable */
#define _DMAC_REQUEST_PRIORITY_ENABLE                       (0x00080000UL) /* Request prority enable */
/* Request priority setting (PRI[2:0]) */
#define _DMAC_REQUEST_PRIORITY_LOWEST                       (0x00000000UL) /* Request prority lowest */
#define _DMAC_REQUEST_PRIORITY_LEVEL_1                      (0x00010000UL) /* Request prority level 1 */
#define _DMAC_REQUEST_PRIORITY_LEVEL_2                      (0x00020000UL) /* Request prority level 2 */
#define _DMAC_REQUEST_PRIORITY_LEVEL_3                      (0x00030000UL) /* Request prority level 3 */
#define _DMAC_REQUEST_PRIORITY_LEVEL_4                      (0x00040000UL) /* Request prority level 4 */
#define _DMAC_REQUEST_PRIORITY_LEVEL_5                      (0x00050000UL) /* Request prority level 5 */
#define _DMAC_REQUEST_PRIORITY_LEVEL_6                      (0x00060000UL) /* Request prority level 6 */
#define _DMAC_REQUEST_PRIORITY_HIGHEST                      (0x00070000UL) /* Request prority highest */
/* DMA Transfer Slow Speed mode (SLM[3:0]) */
#define _DMAC_TRANSFER_NORMAL_MODE                          (0x00000000UL) /* Transfer normal mode */
#define _DMAC_TRANSFER_CLOCK_CYCLE_256                      (0x00800000UL) /* Transfer 256 clock cycles */
#define _DMAC_TRANSFER_CLOCK_CYCLE_512                      (0x00900000UL) /* Transfer 512 clock cycles */
#define _DMAC_TRANSFER_CLOCK_CYCLE_1024                     (0x00A00000UL) /* Transfer 1024 clock cycles */
#define _DMAC_TRANSFER_CLOCK_CYCLE_2048                     (0x00B00000UL) /* Transfer 2048 clock cycles */
#define _DMAC_TRANSFER_CLOCK_CYCLE_4096                     (0x00C00000UL) /* Transfer 4096 clock cycles */
#define _DMAC_TRANSFER_CLOCK_CYCLE_8192                     (0x00D00000UL) /* Transfer 8192 clock cycles */
#define _DMAC_TRANSFER_CLOCK_CYCLE_16384                    (0x00E00000UL) /* Transfer 16384 clock cycles */
#define _DMAC_TRANSFER_CLOCK_CYCLE_32768                    (0x00F00000UL) /* Transfer 31768 clock cycles */

/*
   DMA Channel Control Register n (DMAjCHCR_n)
*/
/* DMA Enable (DE) */
#define _DMAC_TRANSFER_DISABLE                              (0x0000U) /* DMA transfer disabled */
#define _DMAC_TRANSFER_ENABLE                               (0x0001U) /* DMA transfer enabled */
/* Transfer end interrupt enable (IE) */
#define _DMAC_TRANSFER_END_INT_DISABLE                      (0x0000U) /* Interrupt request is disabled */
#define _DMAC_TRANSFER_END_INT_ENABLE                       (0x0002U) /* Interrupt request is enabled */
/* Descriptor step end interrupt master enable (DSIE) */
#define _DMAC_STEP_END_INT_MASTER_DISABLE                   (0x0000U) /* Interrupt request is disabled */
#define _DMAC_STEP_END_INT_MASTER_ENABLE                    (0x0004U) /* Interrupt request is enabled */
/* Channel address error interrupt INTSDMACjCHn enable (CAIE) */
#define _DMAC_CHANNEL_ADDRESS_ERR_INT_DISABLE               (0x0000U) /* Interrupt request is disabled */
#define _DMAC_CHANNEL_ADDRESS_ERR_INT_ENABLE                (0x0008U) /* Interrupt request is enabled */
/* Channel address error interrupt INTSDMACERR enable (CAEE) */
#define _DMAC_ADDRESS_ERR_INT_DISABLE                       (0x0000U) /* Interrupt request is disabled */
#define _DMAC_ADDRESS_ERR_INT_ENABLE                        (0x0010U) /* Interrupt request is enabled */
/* Descriptor start bit (DPB) */
#define _DMAC_DESCRIPTOR_START_REGISTER                     (0x0000U) /* Start DMA transfer via register setting */
#define _DMAC_DESCRIPTOR_START_RAM                          (0x0100U) /* Start DMA transfer via descriptor memory */
/* Descriptor enable bit (DPE) */
#define _DMAC_DESCRIPTOR_DISABLE                            (0x0000U) /* Descriptor is disabled */
#define _DMAC_DESCRIPTOR_ENABLE                             (0x0200U) /* Descriptor is enabled */

/*
    DMA Channel Stop Register (DMAjCHSTP_n)
*/
/* DMA transmission stop (STP) */
#define _DMAC_CHANNEL_RESUME                                (0x0000U) /* DMA transmission resume */
#define _DMAC_CHANNEL_SUSPEND                               (0x0001U) /* DMA transmission suspend */

/*
    DMA Channel Flag Clear Register (DMAjCHFCR_n)
*/
/* DMA enable clear (DEC) */
#define _DMAC_ENABLE_CLEAR                                  (0x00000001UL) /* DMA enable clear */
/* Transfer end flag clear (TEC) */
#define _DMAC_TRANSFER_END_CLEAR                            (0x00000002UL) /* Transfer end flag clear */
/* Descriptor step end flag clear (DSEC) */
#define _DMAC_DESCRIPTOR_STEP_END_CLEAR                     (0x00000004UL) /* Descriptor step end flag clear */
/* Address error flag clear (CAEC) */
#define _DMAC_ADDRESS_ERROR_CLEAR                           (0x00000008UL) /* Address error flag clear */
/* Descriptor enable clear (DPEC) */
#define _DMAC_DESCRIPTOR_ENABLE_CLEAR                       (0x00000200UL) /* Descriptor enable clear */
/* Hardware transfer request clear (DRQC) */
#define _DMAC_HW_TRANSFER_REQUEST_CLEAR                     (0x00001000UL) /* Hardware transfer request clear */
/* Hardware transfer request overflow flag clear (OVFC) */
#define _DMAC_HW_OVERFLOW_CLEAR                             (0x00002000UL) /* Hardware transfer overflow flag clear */

/*
   DMA Scatter Gather Control Register n (DMAjSGCR_n)
*/
/* Clear gather count (GIRPT[13:0]) */
#define _DMAC_GATHER_COUNT_CLEAR                            (0xFFFFC000UL) /* Clear gather count */
/* Gather enable on destination side (GEN) */
#define _DMAC_GATHER_DISABLE                                (0x00000000UL) /* Gathering is disabled */
#define _DMAC_GATHER_ENABLE                                 (0x00008000UL) /* Gathering is enabled */
/* Clear scatter count (SIRPT[13:0]) */
#define _DMAC_SCATTER_COUNT_CLEAR                           (0xC000FFFFUL) /* Clear scatter count */
/* Zero fill (ZF) */
#define _DMAC_ZERO_FILL_DISABLE                             (0x00000000UL) /* Zero fill is disabled */
#define _DMAC_ZERO_FILL_ENABLE                              (0x40000000UL) /* Zero fill is enabled */
/* Scatter enable on source side (SEN) */
#define _DMAC_SCATTER_DISABLE                               (0x00000000UL) /* Scattering is disabled */
#define _DMAC_SCATTER_ENABLE                                (0x80000000UL) /* Scattering is enabled */

/*
   DMA Resource Select Register n (DMAjRS_n)
*/
/* DMA request source (RS[7:0]) */
#define _DMAC_GRP0_REQUEST_INTADCJ0I0                       (0x00000000UL) /* DMAC group 0 INTADCJ0I0 */
#define _DMAC_GRP0_REQUEST_INTADCJ0I1                       (0x00000001UL) /* DMAC group 0 INTADCJ0I1 */
#define _DMAC_GRP0_REQUEST_INTADCJ0I2                       (0x00000002UL) /* DMAC group 0 INTADCJ0I2 */
#define _DMAC_GRP0_REQUEST_INTADCJ0I3                       (0x00000003UL) /* DMAC group 0 INTADCJ0I3 */
#define _DMAC_GRP0_REQUEST_INTADCJ0I4                       (0x00000004UL) /* DMAC group 0 INTADCJ0I4 */
#define _DMAC_GRP0_REQUEST_ADMPXI0                          (0x00000005UL) /* DMAC group 0 ADMPXI0 */
#define _DMAC_GRP0_REQUEST_ADC_CONV_END0                    (0x00000006UL) /* DMAC group 0 ADC_CONV_END0 */
#define _DMAC_GRP0_REQUEST_INTADCJ1I0                       (0x00000007UL) /* DMAC group 0 INTADCJ1I0 */
#define _DMAC_GRP0_REQUEST_INTADCJ1I1                       (0x00000008UL) /* DMAC group 0 INTADCJ1I1 */
#define _DMAC_GRP0_REQUEST_INTADCJ1I2                       (0x00000009UL) /* DMAC group 0 INTADCJ1I2 */
#define _DMAC_GRP0_REQUEST_INTADCJ1I3                       (0x0000000AUL) /* DMAC group 0 INTADCJ1I3 */
#define _DMAC_GRP0_REQUEST_INTADCJ1I4                       (0x0000000BUL) /* DMAC group 0 INTADCJ1I4 */
#define _DMAC_GRP0_REQUEST_ADMPXI1                          (0x0000000CUL) /* DMAC group 0 ADMPXI1 */
#define _DMAC_GRP0_REQUEST_ADC_CONV_END1                    (0x0000000DUL) /* DMAC group 0 ADC_CONV_END1 */
#define _DMAC_GRP0_REQUEST_INTADCJ2I0                       (0x0000000EUL) /* DMAC group 0 INTADCJ2I0 */
#define _DMAC_GRP0_REQUEST_INTADCJ2I1                       (0x0000000FUL) /* DMAC group 0 INTADCJ2I1 */
#define _DMAC_GRP0_REQUEST_INTADCJ2I2                       (0x00000010UL) /* DMAC group 0 INTADCJ2I2 */
#define _DMAC_GRP0_REQUEST_INTADCJ2I3                       (0x00000011UL) /* DMAC group 0 INTADCJ2I3 */
#define _DMAC_GRP0_REQUEST_INTADCJ2I4                       (0x00000012UL) /* DMAC group 0 INTADCJ2I4 */
#define _DMAC_GRP0_REQUEST_ADMPXI2                          (0x00000013UL) /* DMAC group 0 ADMPXI2 */
#define _DMAC_GRP0_REQUEST_ADC_CONV_END2                    (0x00000014UL) /* DMAC group 0 ADC_CONV_END2 */
#define _DMAC_GRP0_REQUEST_INTRSENT0RI                      (0x00000015UL) /* DMAC group 0 INTRSENT0RI */
#define _DMAC_GRP0_REQUEST_INTRSENT1RI                      (0x00000016UL) /* DMAC group 0 INTRSENT1RI */
#define _DMAC_GRP0_REQUEST_INTRSENT2RI                      (0x00000017UL) /* DMAC group 0 INTRSENT2RI */
#define _DMAC_GRP0_REQUEST_INTRSENT3RI                      (0x00000018UL) /* DMAC group 0 INTRSENT3RI */
#define _DMAC_GRP0_REQUEST_INTRSENT4RI                      (0x00000019UL) /* DMAC group 0 INTRSENT4RI */
#define _DMAC_GRP0_REQUEST_INTRSENT5RI                      (0x0000001AUL) /* DMAC group 0 INTRSENT5RI */
#define _DMAC_GRP0_REQUEST_INTRSENT6RI                      (0x0000001BUL) /* DMAC group 0 INTRSENT6RI */
#define _DMAC_GRP0_REQUEST_INTRSENT7RI                      (0x0000001CUL) /* DMAC group 0 INTRSENT7RI */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ0                   (0x0000001DUL) /* DMAC group 0 INTRCANCFDREQ0 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ1                   (0x0000001EUL) /* DMAC group 0 INTRCANCFDREQ1 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ2                   (0x0000001FUL) /* DMAC group 0 INTRCANCFDREQ2 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ3                   (0x00000020UL) /* DMAC group 0 INTRCANCFDREQ3 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ4                   (0x00000021UL) /* DMAC group 0 INTRCANCFDREQ4 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ5                   (0x00000022UL) /* DMAC group 0 INTRCANCFDREQ5 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ6                   (0x00000023UL) /* DMAC group 0 INTRCANCFDREQ6 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ7                   (0x00000024UL) /* DMAC group 0 INTRCANCFDREQ7 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ8                   (0x00000025UL) /* DMAC group 0 INTRCANCFDREQ8 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ9                   (0x00000026UL) /* DMAC group 0 INTRCANCFDREQ9 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ10                  (0x00000027UL) /* DMAC group 0 INTRCANCFDREQ10 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ11                  (0x00000028UL) /* DMAC group 0 INTRCANCFDREQ11 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ12                  (0x00000029UL) /* DMAC group 0 INTRCANCFDREQ12 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ13                  (0x0000002AUL) /* DMAC group 0 INTRCANCFDREQ13 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ14                  (0x0000002BUL) /* DMAC group 0 INTRCANCFDREQ14 */
#define _DMAC_GRP0_REQUEST_INTRCANCFDREQ15                  (0x0000002CUL) /* DMAC group 0 INTRCANCFDREQ15 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ0                   (0x0000002DUL) /* DMAC group 0 INTRCANRFDREQ0 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ1                   (0x0000002EUL) /* DMAC group 0 INTRCANRFDREQ1 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ2                   (0x0000002FUL) /* DMAC group 0 INTRCANRFDREQ2 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ3                   (0x00000030UL) /* DMAC group 0 INTRCANRFDREQ3 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ4                   (0x00000031UL) /* DMAC group 0 INTRCANRFDREQ4 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ5                   (0x00000032UL) /* DMAC group 0 INTRCANRFDREQ5 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ6                   (0x00000033UL) /* DMAC group 0 INTRCANRFDREQ6 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ7                   (0x00000034UL) /* DMAC group 0 INTRCANRFDREQ7 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ8                   (0x00000035UL) /* DMAC group 0 INTRCANRFDREQ8 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ9                   (0x00000036UL) /* DMAC group 0 INTRCANRFDREQ9 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ10                  (0x00000037UL) /* DMAC group 0 INTRCANRFDREQ10 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ11                  (0x00000038UL) /* DMAC group 0 INTRCANRFDREQ11 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ12                  (0x00000039UL) /* DMAC group 0 INTRCANRFDREQ12 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ13                  (0x0000003AUL) /* DMAC group 0 INTRCANRFDREQ13 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ14                  (0x0000003BUL) /* DMAC group 0 INTRCANRFDREQ14 */
#define _DMAC_GRP0_REQUEST_INTRCANRFDREQ15                  (0x0000003CUL) /* DMAC group 0 INTRCANRFDREQ15 */
#define _DMAC_GRP0_REQUEST_INTRLIN30UR0                     (0x0000003DUL) /* DMAC group 0 INTRLIN30UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN30UR1                     (0x0000003EUL) /* DMAC group 0 INTRLIN30UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN31UR0                     (0x0000003FUL) /* DMAC group 0 INTRLIN31UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN31UR1                     (0x00000040UL) /* DMAC group 0 INTRLIN31UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN32UR0                     (0x00000041UL) /* DMAC group 0 INTRLIN32UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN32UR1                     (0x00000042UL) /* DMAC group 0 INTRLIN32UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN33UR0                     (0x00000043UL) /* DMAC group 0 INTRLIN33UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN33UR1                     (0x00000044UL) /* DMAC group 0 INTRLIN33UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN34UR0                     (0x00000045UL) /* DMAC group 0 INTRLIN34UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN34UR1                     (0x00000046UL) /* DMAC group 0 INTRLIN34UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN35UR0                     (0x00000047UL) /* DMAC group 0 INTRLIN35UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN35UR1                     (0x00000048UL) /* DMAC group 0 INTRLIN35UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN36UR0                     (0x00000049UL) /* DMAC group 0 INTRLIN36UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN36UR1                     (0x0000004AUL) /* DMAC group 0 INTRLIN36UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN37UR0                     (0x0000004BUL) /* DMAC group 0 INTRLIN37UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN37UR1                     (0x0000004CUL) /* DMAC group 0 INTRLIN37UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN38UR0                     (0x0000004DUL) /* DMAC group 0 INTRLIN38UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN38UR1                     (0x0000004EUL) /* DMAC group 0 INTRLIN38UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN39UR0                     (0x0000004FUL) /* DMAC group 0 INTRLIN39UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN39UR1                     (0x00000050UL) /* DMAC group 0 INTRLIN39UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN310UR0                    (0x00000051UL) /* DMAC group 0 INTRLIN310UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN310UR1                    (0x00000052UL) /* DMAC group 0 INTRLIN310UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN311UR0                    (0x00000053UL) /* DMAC group 0 INTRLIN311UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN311UR1                    (0x00000054UL) /* DMAC group 0 INTRLIN311UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN312UR0                    (0x00000055UL) /* DMAC group 0 INTRLIN312UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN312UR1                    (0x00000056UL) /* DMAC group 0 INTRLIN312UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN313UR0                    (0x00000057UL) /* DMAC group 0 INTRLIN313UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN313UR1                    (0x00000058UL) /* DMAC group 0 INTRLIN313UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN314UR0                    (0x00000059UL) /* DMAC group 0 INTRLIN314UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN314UR1                    (0x0000005AUL) /* DMAC group 0 INTRLIN314UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN315UR0                    (0x0000005BUL) /* DMAC group 0 INTRLIN315UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN315UR1                    (0x0000005CUL) /* DMAC group 0 INTRLIN315UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN316UR0                    (0x0000005DUL) /* DMAC group 0 INTRLIN316UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN316UR1                    (0x0000005EUL) /* DMAC group 0 INTRLIN316UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN317UR0                    (0x0000005FUL) /* DMAC group 0 INTRLIN317UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN317UR1                    (0x00000060UL) /* DMAC group 0 INTRLIN317UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN318UR0                    (0x00000061UL) /* DMAC group 0 INTRLIN318UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN318UR1                    (0x00000062UL) /* DMAC group 0 INTRLIN318UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN319UR0                    (0x00000063UL) /* DMAC group 0 INTRLIN319UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN319UR1                    (0x00000064UL) /* DMAC group 0 INTRLIN319UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN320UR0                    (0x00000065UL) /* DMAC group 0 INTRLIN320UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN320UR1                    (0x00000066UL) /* DMAC group 0 INTRLIN320UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN321UR0                    (0x00000067UL) /* DMAC group 0 INTRLIN321UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN321UR1                    (0x00000068UL) /* DMAC group 0 INTRLIN321UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN322UR0                    (0x00000069UL) /* DMAC group 0 INTRLIN322UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN322UR1                    (0x0000006AUL) /* DMAC group 0 INTRLIN322UR1 */
#define _DMAC_GRP0_REQUEST_INTRLIN323UR0                    (0x0000006BUL) /* DMAC group 0 INTRLIN323UR0 */
#define _DMAC_GRP0_REQUEST_INTRLIN323UR1                    (0x0000006CUL) /* DMAC group 0 INTRLIN323UR1 */
#define _DMAC_GRP0_REQUEST_DMAMSPI0                         (0x0000006DUL) /* DMAC group 0 DMAMSPI0 */
#define _DMAC_GRP0_REQUEST_DMAMSPI1                         (0x0000006EUL) /* DMAC group 0 DMAMSPI1 */
#define _DMAC_GRP0_REQUEST_DMAMSPI2                         (0x0000006FUL) /* DMAC group 0 DMAMSPI2 */
#define _DMAC_GRP0_REQUEST_DMAMSPI3                         (0x00000070UL) /* DMAC group 0 DMAMSPI3 */
#define _DMAC_GRP0_REQUEST_DMAMSPI4                         (0x00000071UL) /* DMAC group 0 DMAMSPI4 */
#define _DMAC_GRP0_REQUEST_DMAMSPI5                         (0x00000072UL) /* DMAC group 0 DMAMSPI5 */
#define _DMAC_GRP0_REQUEST_DMAMSPI6                         (0x00000073UL) /* DMAC group 0 DMAMSPI6 */
#define _DMAC_GRP0_REQUEST_DMAMSPI7                         (0x00000074UL) /* DMAC group 0 DMAMSPI7 */
#define _DMAC_GRP0_REQUEST_DMAMSPI8                         (0x00000075UL) /* DMAC group 0 DMAMSPI8 */
#define _DMAC_GRP0_REQUEST_DMAMSPI9                         (0x00000076UL) /* DMAC group 0 DMAMSPI9 */
#define _DMAC_GRP0_REQUEST_DMAMSPI10                        (0x00000077UL) /* DMAC group 0 DMAMSPI10 */
#define _DMAC_GRP0_REQUEST_DMAMSPI11                        (0x00000078UL) /* DMAC group 0 DMAMSPI11 */
#define _DMAC_GRP0_REQUEST_DMAMSPI12                        (0x00000079UL) /* DMAC group 0 DMAMSPI12 */
#define _DMAC_GRP0_REQUEST_DMAMSPI13                        (0x0000007AUL) /* DMAC group 0 DMAMSPI13 */
#define _DMAC_GRP0_REQUEST_DMAMSPI14                        (0x0000007BUL) /* DMAC group 0 DMAMSPI14 */
#define _DMAC_GRP0_REQUEST_DMAMSPI15                        (0x0000007CUL) /* DMAC group 0 DMAMSPI15 */
#define _DMAC_GRP0_REQUEST_DMAMSPI16                        (0x0000007DUL) /* DMAC group 0 DMAMSPI16 */
#define _DMAC_GRP0_REQUEST_DMAMSPI17                        (0x0000007EUL) /* DMAC group 0 DMAMSPI17 */
#define _DMAC_GRP0_REQUEST_DMAMSPI18                        (0x0000007FUL) /* DMAC group 0 DMAMSPI18 */
#define _DMAC_GRP0_REQUEST_DMAMSPI19                        (0x00000080UL) /* DMAC group 0 DMAMSPI19 */
#define _DMAC_GRP0_REQUEST_DMAMSPI20                        (0x00000081UL) /* DMAC group 0 DMAMSPI20 */
#define _DMAC_GRP0_REQUEST_DMAMSPI21                        (0x00000082UL) /* DMAC group 0 DMAMSPI21 */
#define _DMAC_GRP0_REQUEST_DMAMSPI22                        (0x00000083UL) /* DMAC group 0 DMAMSPI22 */
#define _DMAC_GRP0_REQUEST_DMAMSPI23                        (0x00000084UL) /* DMAC group 0 DMAMSPI23 */
#define _DMAC_GRP0_REQUEST_DMAMSPI24                        (0x00000085UL) /* DMAC group 0 DMAMSPI24 */
#define _DMAC_GRP0_REQUEST_DMAMSPI25                        (0x00000086UL) /* DMAC group 0 DMAMSPI25 */
#define _DMAC_GRP0_REQUEST_DMAMSPI26                        (0x00000087UL) /* DMAC group 0 DMAMSPI26 */
#define _DMAC_GRP0_REQUEST_DMAMSPI27                        (0x00000088UL) /* DMAC group 0 DMAMSPI27 */
#define _DMAC_GRP0_REQUEST_DMAMSPI28                        (0x00000089UL) /* DMAC group 0 DMAMSPI28 */
#define _DMAC_GRP0_REQUEST_DMAMSPI29                        (0x0000008AUL) /* DMAC group 0 DMAMSPI29 */
#define _DMAC_GRP0_REQUEST_INTSCI30RXI                      (0x0000008CUL) /* DMAC group 0 INTSCI30RXI */
#define _DMAC_GRP0_REQUEST_INTSCI30TXI                      (0x0000008DUL) /* DMAC group 0 INTSCI30TXI */
#define _DMAC_GRP0_REQUEST_INTSCI31RXI                      (0x0000008EUL) /* DMAC group 0 INTSCI31RXI */
#define _DMAC_GRP0_REQUEST_INTSCI31TXI                      (0x0000008FUL) /* DMAC group 0 INTSCI31TXI */
#define _DMAC_GRP0_REQUEST_INTSCI32RXI                      (0x00000090UL) /* DMAC group 0 INTSCI32RXI */
#define _DMAC_GRP0_REQUEST_INTSCI32TXI                      (0x00000091UL) /* DMAC group 0 INTSCI32TXI */
#define _DMAC_GRP0_REQUEST_INTPSI50RI                       (0x00000092UL) /* DMAC group 0 INTPSI50RI */
#define _DMAC_GRP0_REQUEST_INTPSI51RI                       (0x00000093UL) /* DMAC group 0 INTPSI51RI */
#define _DMAC_GRP0_REQUEST_INTPSI52RI                       (0x00000094UL) /* DMAC group 0 INTPSI52RI */
#define _DMAC_GRP0_REQUEST_INTPSI53RI                       (0x00000095UL) /* DMAC group 0 INTPSI53RI */
#define _DMAC_GRP0_REQUEST_INTRIIC0RI                       (0x00000096UL) /* DMAC group 0 INTRIIC0RI */
#define _DMAC_GRP0_REQUEST_INTRIIC0TI                       (0x00000097UL) /* DMAC group 0 INTRIIC0TI */
#define _DMAC_GRP0_REQUEST_INTRIIC1RI                       (0x00000098UL) /* DMAC group 0 INTRIIC1RI */
#define _DMAC_GRP0_REQUEST_INTRIIC1TI                       (0x00000099UL) /* DMAC group 0 INTRIIC1TI */
#define _DMAC_GRP0_REQUEST_INTDMAFL0                        (0x0000009AUL) /* DMAC group 0 INTDMAFL0 */
#define _DMAC_GRP0_REQUEST_INTDMAFL1                        (0x0000009BUL) /* DMAC group 0 INTDMAFL1 */
#define _DMAC_GRP0_REQUEST_INTDMAFL2                        (0x0000009CUL) /* DMAC group 0 INTDMAFL2 */
#define _DMAC_GRP0_REQUEST_INTOSTM0TINT                     (0x0000009DUL) /* DMAC group 0 INTOSTM0TINT */
#define _DMAC_GRP0_REQUEST_INTOSTM1TINT                     (0x0000009EUL) /* DMAC group 0 INTOSTM1TINT */
#define _DMAC_GRP0_REQUEST_INTOSTM2TINT                     (0x0000009FUL) /* DMAC group 0 INTOSTM2TINT */
#define _DMAC_GRP0_REQUEST_INTOSTM3TINT                     (0x000000A0UL) /* DMAC group 0 INTOSTM3TINT */
#define _DMAC_GRP0_REQUEST_INTOSTM4TINT                     (0x000000A1UL) /* DMAC group 0 INTOSTM4TINT */
#define _DMAC_GRP0_REQUEST_INTOSTM5TINT                     (0x000000A2UL) /* DMAC group 0 INTOSTM5TINT */
#define _DMAC_GRP0_REQUEST_INTOSTM6TINT                     (0x000000A3UL) /* DMAC group 0 INTOSTM6TINT */
#define _DMAC_GRP0_REQUEST_INTOSTM7TINT                     (0x000000A4UL) /* DMAC group 0 INTOSTM7TINT */
#define _DMAC_GRP0_REQUEST_INTOSTM8TINT                     (0x000000A5UL) /* DMAC group 0 INTOSTM8TINT */
#define _DMAC_GRP0_REQUEST_INTOSTM9TINT                     (0x000000A6UL) /* DMAC group 0 INTOSTM9TINT */
#define _DMAC_GRP0_REQUEST_INTTPBA0IPRD                     (0x000000A7UL) /* DMAC group 0 INTTPBA0IPRD */
#define _DMAC_GRP0_REQUEST_INTTPBA0IDTY                     (0x000000A8UL) /* DMAC group 0 INTTPBA0IDTY */
#define _DMAC_GRP0_REQUEST_INTTPBA0IPAT                     (0x000000A9UL) /* DMAC group 0 INTTPBA0IPAT */
#define _DMAC_GRP0_REQUEST_INTTPBA1IPRD                     (0x000000AAUL) /* DMAC group 0 INTTPBA1IPRD */
#define _DMAC_GRP0_REQUEST_INTTPBA1IDTY                     (0x000000ABUL) /* DMAC group 0 INTTPBA1IDTY */
#define _DMAC_GRP0_REQUEST_INTTPBA1IPAT                     (0x000000ACUL) /* DMAC group 0 INTTPBA1IPAT */
#define _DMAC_GRP0_REQUEST_INTTSG30I11                      (0x000000ADUL) /* DMAC group 0 INTTSG30I11 */
#define _DMAC_GRP0_REQUEST_INTTSG30I12                      (0x000000AEUL) /* DMAC group 0 INTTSG30I12 */
#define _DMAC_GRP0_REQUEST_INTTSG30IPEK                     (0x000000AFUL) /* DMAC group 0 INTTSG30IPEK */
#define _DMAC_GRP0_REQUEST_INTTSG30IVLY                     (0x000000B0UL) /* DMAC group 0 INTTSG30IVLY */
#define _DMAC_GRP0_REQUEST_INTTSG31I11                      (0x000000B1UL) /* DMAC group 0 INTTSG31I11 */
#define _DMAC_GRP0_REQUEST_INTTSG31I12                      (0x000000B2UL) /* DMAC group 0 INTTSG31I12 */
#define _DMAC_GRP0_REQUEST_INTTSG31IPEK                     (0x000000B3UL) /* DMAC group 0 INTTSG31IPEK */
#define _DMAC_GRP0_REQUEST_INTTSG31IVLY                     (0x000000B4UL) /* DMAC group 0 INTTSG31IVLY */
#define _DMAC_GRP0_REQUEST_INTENCA0IOV                      (0x000000B5UL) /* DMAC group 0 INTENCA0IOV */
#define _DMAC_GRP0_REQUEST_INTENCA0IUD                      (0x000000B6UL) /* DMAC group 0 INTENCA0IUD */
#define _DMAC_GRP0_REQUEST_INTENCA0I0                       (0x000000B7UL) /* DMAC group 0 INTENCA0I0 */
#define _DMAC_GRP0_REQUEST_INTENCA0I1                       (0x000000B8UL) /* DMAC group 0 INTENCA0I1 */
#define _DMAC_GRP0_REQUEST_INTENCA0IEC                      (0x000000B9UL) /* DMAC group 0 INTENCA0IEC */
#define _DMAC_GRP0_REQUEST_INTENCA1IOV                      (0x000000BAUL) /* DMAC group 0 INTENCA1IOV */
#define _DMAC_GRP0_REQUEST_INTENCA1IUD                      (0x000000BBUL) /* DMAC group 0 INTENCA1IUD */
#define _DMAC_GRP0_REQUEST_INTENCA1I0                       (0x000000BCUL) /* DMAC group 0 INTENCA1I0 */
#define _DMAC_GRP0_REQUEST_INTENCA1I1                       (0x000000BDUL) /* DMAC group 0 INTENCA1I1 */
#define _DMAC_GRP0_REQUEST_INTENCA1IEC                      (0x000000BEUL) /* DMAC group 0 INTENCA1IEC */
#define _DMAC_GRP0_REQUEST_DMAMMCA0                         (0x000000BFUL) /* DMAC group 0 DMAMMCA0 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I0                       (0x000000C0UL) /* DMAC group 0 INTTAUD0I0 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I1                       (0x000000C1UL) /* DMAC group 0 INTTAUD0I1 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I2                       (0x000000C2UL) /* DMAC group 0 INTTAUD0I2 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I3                       (0x000000C3UL) /* DMAC group 0 INTTAUD0I3 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I4                       (0x000000C4UL) /* DMAC group 0 INTTAUD0I4 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I5                       (0x000000C5UL) /* DMAC group 0 INTTAUD0I5 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I6                       (0x000000C6UL) /* DMAC group 0 INTTAUD0I6 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I7                       (0x000000C7UL) /* DMAC group 0 INTTAUD0I7 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I8                       (0x000000C8UL) /* DMAC group 0 INTTAUD0I8 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I9                       (0x000000C9UL) /* DMAC group 0 INTTAUD0I9 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I10                      (0x000000CAUL) /* DMAC group 0 INTTAUD0I10 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I11                      (0x000000CBUL) /* DMAC group 0 INTTAUD0I11 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I12                      (0x000000CCUL) /* DMAC group 0 INTTAUD0I12 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I13                      (0x000000CDUL) /* DMAC group 0 INTTAUD0I13 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I14                      (0x000000CEUL) /* DMAC group 0 INTTAUD0I14 */
#define _DMAC_GRP0_REQUEST_INTTAUD0I15                      (0x000000CFUL) /* DMAC group 0 INTTAUD0I15 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I0                       (0x000000D0UL) /* DMAC group 0 INTTAUD1I0 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I1                       (0x000000D1UL) /* DMAC group 0 INTTAUD1I1 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I2                       (0x000000D2UL) /* DMAC group 0 INTTAUD1I2 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I3                       (0x000000D3UL) /* DMAC group 0 INTTAUD1I3 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I4                       (0x000000D4UL) /* DMAC group 0 INTTAUD1I4 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I5                       (0x000000D5UL) /* DMAC group 0 INTTAUD1I5 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I6                       (0x000000D6UL) /* DMAC group 0 INTTAUD1I6 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I7                       (0x000000D7UL) /* DMAC group 0 INTTAUD1I7 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I8                       (0x000000D8UL) /* DMAC group 0 INTTAUD1I8 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I9                       (0x000000D9UL) /* DMAC group 0 INTTAUD1I9 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I10                      (0x000000DAUL) /* DMAC group 0 INTTAUD1I10 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I11                      (0x000000DBUL) /* DMAC group 0 INTTAUD1I11 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I12                      (0x000000DCUL) /* DMAC group 0 INTTAUD1I12 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I13                      (0x000000DDUL) /* DMAC group 0 INTTAUD1I13 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I14                      (0x000000DEUL) /* DMAC group 0 INTTAUD1I14 */
#define _DMAC_GRP0_REQUEST_INTTAUD1I15                      (0x000000DFUL) /* DMAC group 0 INTTAUD1I15 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I0                       (0x000000E0UL) /* DMAC group 0 INTTAUD2I0 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I1                       (0x000000E1UL) /* DMAC group 0 INTTAUD2I1 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I2                       (0x000000E2UL) /* DMAC group 0 INTTAUD2I2 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I3                       (0x000000E3UL) /* DMAC group 0 INTTAUD2I3 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I4                       (0x000000E4UL) /* DMAC group 0 INTTAUD2I4 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I5                       (0x000000E5UL) /* DMAC group 0 INTTAUD2I5 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I6                       (0x000000E6UL) /* DMAC group 0 INTTAUD2I6 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I7                       (0x000000E7UL) /* DMAC group 0 INTTAUD2I7 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I8                       (0x000000E8UL) /* DMAC group 0 INTTAUD2I8 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I9                       (0x000000E9UL) /* DMAC group 0 INTTAUD2I9 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I10                      (0x000000EAUL) /* DMAC group 0 INTTAUD2I10 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I11                      (0x000000EBUL) /* DMAC group 0 INTTAUD2I11 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I12                      (0x000000ECUL) /* DMAC group 0 INTTAUD2I12 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I13                      (0x000000EDUL) /* DMAC group 0 INTTAUD2I13 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I14                      (0x000000EEUL) /* DMAC group 0 INTTAUD2I14 */
#define _DMAC_GRP0_REQUEST_INTTAUD2I15                      (0x000000EFUL) /* DMAC group 0 INTTAUD2I15 */
#define _DMAC_GRP0_REQUEST_INTTAUJ0I0                       (0x000000F0UL) /* DMAC group 0 INTTAUJ0I0 */
#define _DMAC_GRP0_REQUEST_INTTAUJ0I1                       (0x000000F1UL) /* DMAC group 0 INTTAUJ0I1 */
#define _DMAC_GRP0_REQUEST_INTTAUJ0I2                       (0x000000F2UL) /* DMAC group 0 INTTAUJ0I2 */
#define _DMAC_GRP0_REQUEST_INTTAUJ0I3                       (0x000000F3UL) /* DMAC group 0 INTTAUJ0I3 */
#define _DMAC_GRP0_REQUEST_INTTAUJ1I0                       (0x000000F4UL) /* DMAC group 0 INTTAUJ1I0 */
#define _DMAC_GRP0_REQUEST_INTTAUJ1I1                       (0x000000F5UL) /* DMAC group 0 INTTAUJ1I1 */
#define _DMAC_GRP0_REQUEST_INTTAUJ1I2                       (0x000000F6UL) /* DMAC group 0 INTTAUJ1I2 */
#define _DMAC_GRP0_REQUEST_INTTAUJ1I3                       (0x000000F7UL) /* DMAC group 0 INTTAUJ1I3 */
#define _DMAC_GRP0_REQUEST_INTTAUJ2I0                       (0x000000F8UL) /* DMAC group 0 INTTAUJ2I0 */
#define _DMAC_GRP0_REQUEST_INTTAUJ2I1                       (0x000000F9UL) /* DMAC group 0 INTTAUJ2I1 */
#define _DMAC_GRP0_REQUEST_INTTAUJ2I2                       (0x000000FAUL) /* DMAC group 0 INTTAUJ2I2 */
#define _DMAC_GRP0_REQUEST_INTTAUJ2I3                       (0x000000FBUL) /* DMAC group 0 INTTAUJ2I3 */
#define _DMAC_GRP0_REQUEST_INTTAUJ3I0                       (0x000000FCUL) /* DMAC group 0 INTTAUJ3I0 */
#define _DMAC_GRP0_REQUEST_INTTAUJ3I1                       (0x000000FDUL) /* DMAC group 0 INTTAUJ3I1 */
#define _DMAC_GRP0_REQUEST_INTTAUJ3I2                       (0x000000FEUL) /* DMAC group 0 INTTAUJ3I2 */
#define _DMAC_GRP0_REQUEST_INTTAUJ3I3                       (0x000000FFUL) /* DMAC group 0 INTTAUJ3I3 */
#define _DMAC_GRP1_REQUEST_INTP0                            (0x00000000UL) /* DMAC group 1 INTP0 */
#define _DMAC_GRP1_REQUEST_INTP1                            (0x00000001UL) /* DMAC group 1 INTP1 */
#define _DMAC_GRP1_REQUEST_INTP2                            (0x00000002UL) /* DMAC group 1 INTP2 */
#define _DMAC_GRP1_REQUEST_INTP3                            (0x00000003UL) /* DMAC group 1 INTP3 */
#define _DMAC_GRP1_REQUEST_INTP4                            (0x00000004UL) /* DMAC group 1 INTP4 */
#define _DMAC_GRP1_REQUEST_INTP5                            (0x00000005UL) /* DMAC group 1 INTP5 */
#define _DMAC_GRP1_REQUEST_INTP6                            (0x00000006UL) /* DMAC group 1 INTP6 */
#define _DMAC_GRP1_REQUEST_INTP7                            (0x00000007UL) /* DMAC group 1 INTP7 */
#define _DMAC_GRP1_REQUEST_INTP8                            (0x00000008UL) /* DMAC group 1 INTP8 */
#define _DMAC_GRP1_REQUEST_INTP9                            (0x00000009UL) /* DMAC group 1 INTP9 */
#define _DMAC_GRP1_REQUEST_INTP10                           (0x0000000AUL) /* DMAC group 1 INTP10 */
#define _DMAC_GRP1_REQUEST_INTP11                           (0x0000000BUL) /* DMAC group 1 INTP11 */
#define _DMAC_GRP1_REQUEST_INTP12                           (0x0000000CUL) /* DMAC group 1 INTP12 */
#define _DMAC_GRP1_REQUEST_INTP13                           (0x0000000DUL) /* DMAC group 1 INTP13 */
#define _DMAC_GRP1_REQUEST_INTP14                           (0x0000000EUL) /* DMAC group 1 INTP14 */
#define _DMAC_GRP1_REQUEST_INTP15                           (0x0000000FUL) /* DMAC group 1 INTP15 */
#define _DMAC_GRP1_REQUEST_INTP16                           (0x00000010UL) /* DMAC group 1 INTP16 */
#define _DMAC_GRP1_REQUEST_INTP17                           (0x00000011UL) /* DMAC group 1 INTP17 */
#define _DMAC_GRP1_REQUEST_INTP18                           (0x00000012UL) /* DMAC group 1 INTP18 */
#define _DMAC_GRP1_REQUEST_INTP19                           (0x00000013UL) /* DMAC group 1 INTP19 */
#define _DMAC_GRP1_REQUEST_INTP20                           (0x00000014UL) /* DMAC group 1 INTP20 */
#define _DMAC_GRP1_REQUEST_INTP21                           (0x00000015UL) /* DMAC group 1 INTP21 */
#define _DMAC_GRP1_REQUEST_INTP22                           (0x00000016UL) /* DMAC group 1 INTP22 */
#define _DMAC_GRP1_REQUEST_INTP23                           (0x00000017UL) /* DMAC group 1 INTP23 */
#define _DMAC_GRP1_REQUEST_INTP24                           (0x00000018UL) /* DMAC group 1 INTP24 */
#define _DMAC_GRP1_REQUEST_INTP25                           (0x00000019UL) /* DMAC group 1 INTP25 */
#define _DMAC_GRP1_REQUEST_INTP26                           (0x0000001AUL) /* DMAC group 1 INTP26 */
#define _DMAC_GRP1_REQUEST_INTP27                           (0x0000001BUL) /* DMAC group 1 INTP27 */
#define _DMAC_GRP1_REQUEST_INTP28                           (0x0000001CUL) /* DMAC group 1 INTP28 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0RXDMACH0                (0x0000003DUL) /* DMAC group 1 INTPSI5S0RXDMACH0 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0RXDMACH1                (0x0000003EUL) /* DMAC group 1 INTPSI5S0RXDMACH1 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0RXDMACH2                (0x0000003FUL) /* DMAC group 1 INTPSI5S0RXDMACH2 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0RXDMACH3                (0x00000040UL) /* DMAC group 1 INTPSI5S0RXDMACH3 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0RXDMACH4                (0x00000041UL) /* DMAC group 1 INTPSI5S0RXDMACH4 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0RXDMACH5                (0x00000042UL) /* DMAC group 1 INTPSI5S0RXDMACH5 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0RXDMACH6                (0x00000043UL) /* DMAC group 1 INTPSI5S0RXDMACH6 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0RXDMACH7                (0x00000044UL) /* DMAC group 1 INTPSI5S0RXDMACH7 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0TXDMACH1                (0x00000045UL) /* DMAC group 1 INTPSI5S0TXDMACH1 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0TXDMACH2                (0x00000046UL) /* DMAC group 1 INTPSI5S0TXDMACH2 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0TXDMACH3                (0x00000047UL) /* DMAC group 1 INTPSI5S0TXDMACH3 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0TXDMACH4                (0x00000048UL) /* DMAC group 1 INTPSI5S0TXDMACH4 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0TXDMACH5                (0x00000049UL) /* DMAC group 1 INTPSI5S0TXDMACH5 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0TXDMACH6                (0x0000004AUL) /* DMAC group 1 INTPSI5S0TXDMACH6 */
#define _DMAC_GRP1_REQUEST_INTPSI5S0TXDMACH7                (0x0000004BUL) /* DMAC group 1 INTPSI5S0TXDMACH7 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1RXDMACH0                (0x0000004CUL) /* DMAC group 1 INTPSI5S1RXDMACH0 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1RXDMACH1                (0x0000004DUL) /* DMAC group 1 INTPSI5S1RXDMACH1 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1RXDMACH2                (0x0000004EUL) /* DMAC group 1 INTPSI5S1RXDMACH2 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1RXDMACH3                (0x0000004FUL) /* DMAC group 1 INTPSI5S1RXDMACH3 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1RXDMACH4                (0x00000050UL) /* DMAC group 1 INTPSI5S1RXDMACH4 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1RXDMACH5                (0x00000051UL) /* DMAC group 1 INTPSI5S1RXDMACH5 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1RXDMACH6                (0x00000052UL) /* DMAC group 1 INTPSI5S1RXDMACH6 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1RXDMACH7                (0x00000053UL) /* DMAC group 1 INTPSI5S1RXDMACH7 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1TXDMACH1                (0x00000054UL) /* DMAC group 1 INTPSI5S1TXDMACH1 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1TXDMACH2                (0x00000055UL) /* DMAC group 1 INTPSI5S1TXDMACH2 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1TXDMACH3                (0x00000056UL) /* DMAC group 1 INTPSI5S1TXDMACH3 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1TXDMACH4                (0x00000057UL) /* DMAC group 1 INTPSI5S1TXDMACH4 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1TXDMACH5                (0x00000058UL) /* DMAC group 1 INTPSI5S1TXDMACH5 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1TXDMACH6                (0x00000059UL) /* DMAC group 1 INTPSI5S1TXDMACH6 */
#define _DMAC_GRP1_REQUEST_INTPSI5S1TXDMACH7                (0x0000005AUL) /* DMAC group 1 INTPSI5S1TXDMACH7 */
#define _DMAC_GRP1_REQUEST_INTP29                           (0x0000006DUL) /* DMAC group 1 INTP29 */
#define _DMAC_GRP1_REQUEST_INTP30                           (0x0000006EUL) /* DMAC group 1 INTP30 */
#define _DMAC_GRP1_REQUEST_INTP31                           (0x0000006FUL) /* DMAC group 1 INTP31 */
#define _DMAC_GRP1_REQUEST_INTP32                           (0x00000070UL) /* DMAC group 1 INTP32 */
#define _DMAC_GRP1_REQUEST_INTP33                           (0x00000071UL) /* DMAC group 1 INTP33 */
#define _DMAC_GRP1_REQUEST_INTP34                           (0x00000072UL) /* DMAC group 1 INTP34 */
#define _DMAC_GRP1_REQUEST_INTP35                           (0x00000073UL) /* DMAC group 1 INTP35 */
#define _DMAC_GRP1_REQUEST_INTP36                           (0x00000074UL) /* DMAC group 1 INTP36 */
#define _DMAC_GRP1_REQUEST_INTP37                           (0x00000075UL) /* DMAC group 1 INTP37 */
#define _DMAC_GRP1_REQUEST_INTP38                           (0x00000076UL) /* DMAC group 1 INTP38 */
#define _DMAC_GRP1_REQUEST_INTP39                           (0x00000077UL) /* DMAC group 1 INTP39 */
#define _DMAC_GRP1_REQUEST_INTRHSIF0INTCH0                  (0x00000078UL) /* DMAC group 1 INTRHSIF0INTCH0 */
#define _DMAC_GRP1_REQUEST_INTRHSIF0INTCH1                  (0x00000079UL) /* DMAC group 1 INTRHSIF0INTCH1 */
#define _DMAC_GRP1_REQUEST_INTRHSIF0INTCH2                  (0x0000007AUL) /* DMAC group 1 INTRHSIF0INTCH2 */
#define _DMAC_GRP1_REQUEST_INTRHSIF0INTCH3                  (0x0000007BUL) /* DMAC group 1 INTRHSIF0INTCH3 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM00                    (0x0000008CUL) /* DMAC group 1 INTGTMA0TIM00 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM01                    (0x0000008DUL) /* DMAC group 1 INTGTMA0TIM01 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM02                    (0x0000008EUL) /* DMAC group 1 INTGTMA0TIM02 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM03                    (0x0000008FUL) /* DMAC group 1 INTGTMA0TIM03 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM04                    (0x00000090UL) /* DMAC group 1 INTGTMA0TIM04 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM05                    (0x00000091UL) /* DMAC group 1 INTGTMA0TIM05 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM06                    (0x00000092UL) /* DMAC group 1 INTGTMA0TIM06 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM07                    (0x00000093UL) /* DMAC group 1 INTGTMA0TIM07 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM10                    (0x00000094UL) /* DMAC group 1 INTGTMA0TIM10 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM11                    (0x00000095UL) /* DMAC group 1 INTGTMA0TIM11 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM12                    (0x00000096UL) /* DMAC group 1 INTGTMA0TIM12 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM13                    (0x00000097UL) /* DMAC group 1 INTGTMA0TIM13 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM14                    (0x00000098UL) /* DMAC group 1 INTGTMA0TIM14 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM15                    (0x00000099UL) /* DMAC group 1 INTGTMA0TIM15 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM16                    (0x0000009AUL) /* DMAC group 1 INTGTMA0TIM16 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM17                    (0x0000009BUL) /* DMAC group 1 INTGTMA0TIM17 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM20                    (0x0000009CUL) /* DMAC group 1 INTGTMA0TIM20 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM21                    (0x0000009DUL) /* DMAC group 1 INTGTMA0TIM21 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM22                    (0x0000009EUL) /* DMAC group 1 INTGTMA0TIM22 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM23                    (0x0000009FUL) /* DMAC group 1 INTGTMA0TIM23 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM24                    (0x000000A0UL) /* DMAC group 1 INTGTMA0TIM24 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM25                    (0x000000A1UL) /* DMAC group 1 INTGTMA0TIM25 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM26                    (0x000000A2UL) /* DMAC group 1 INTGTMA0TIM26 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM27                    (0x000000A3UL) /* DMAC group 1 INTGTMA0TIM27 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM30                    (0x000000A4UL) /* DMAC group 1 INTGTMA0TIM30 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM31                    (0x000000A5UL) /* DMAC group 1 INTGTMA0TIM31 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM32                    (0x000000A6UL) /* DMAC group 1 INTGTMA0TIM32 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM33                    (0x000000A7UL) /* DMAC group 1 INTGTMA0TIM33 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM34                    (0x000000A8UL) /* DMAC group 1 INTGTMA0TIM34 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM35                    (0x000000A9UL) /* DMAC group 1 INTGTMA0TIM35 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM36                    (0x000000AAUL) /* DMAC group 1 INTGTMA0TIM36 */
#define _DMAC_GRP1_REQUEST_INTGTMA0TIM37                    (0x000000ABUL) /* DMAC group 1 INTGTMA0TIM37 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS00                    (0x000000ACUL) /* DMAC group 1 INTGTMA0MCS00 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS01                    (0x000000ADUL) /* DMAC group 1 INTGTMA0MCS01 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS02                    (0x000000AEUL) /* DMAC group 1 INTGTMA0MCS02 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS03                    (0x000000AFUL) /* DMAC group 1 INTGTMA0MCS03 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS04                    (0x000000B0UL) /* DMAC group 1 INTGTMA0MCS04 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS05                    (0x000000B1UL) /* DMAC group 1 INTGTMA0MCS05 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS06                    (0x000000B2UL) /* DMAC group 1 INTGTMA0MCS06 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS07                    (0x000000B3UL) /* DMAC group 1 INTGTMA0MCS07 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS10                    (0x000000B4UL) /* DMAC group 1 INTGTMA0MCS10 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS11                    (0x000000B5UL) /* DMAC group 1 INTGTMA0MCS11 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS12                    (0x000000B6UL) /* DMAC group 1 INTGTMA0MCS12 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS13                    (0x000000B7UL) /* DMAC group 1 INTGTMA0MCS13 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS14                    (0x000000B8UL) /* DMAC group 1 INTGTMA0MCS14 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS15                    (0x000000B9UL) /* DMAC group 1 INTGTMA0MCS15 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS16                    (0x000000BAUL) /* DMAC group 1 INTGTMA0MCS16 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS17                    (0x000000BBUL) /* DMAC group 1 INTGTMA0MCS17 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS20                    (0x000000BCUL) /* DMAC group 1 INTGTMA0MCS20 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS21                    (0x000000BDUL) /* DMAC group 1 INTGTMA0MCS21 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS22                    (0x000000BEUL) /* DMAC group 1 INTGTMA0MCS22 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS23                    (0x000000BFUL) /* DMAC group 1 INTGTMA0MCS23 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS24                    (0x000000C0UL) /* DMAC group 1 INTGTMA0MCS24 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS25                    (0x000000C1UL) /* DMAC group 1 INTGTMA0MCS25 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS26                    (0x000000C2UL) /* DMAC group 1 INTGTMA0MCS26 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS27                    (0x000000C3UL) /* DMAC group 1 INTGTMA0MCS27 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS30                    (0x000000C4UL) /* DMAC group 1 INTGTMA0MCS30 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS31                    (0x000000C5UL) /* DMAC group 1 INTGTMA0MCS31 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS32                    (0x000000C6UL) /* DMAC group 1 INTGTMA0MCS32 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS33                    (0x000000C7UL) /* DMAC group 1 INTGTMA0MCS33 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS34                    (0x000000C8UL) /* DMAC group 1 INTGTMA0MCS34 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS35                    (0x000000C9UL) /* DMAC group 1 INTGTMA0MCS35 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS36                    (0x000000CAUL) /* DMAC group 1 INTGTMA0MCS36 */
#define _DMAC_GRP1_REQUEST_INTGTMA0MCS37                    (0x000000CBUL) /* DMAC group 1 INTGTMA0MCS37 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM00                   (0x000000CCUL) /* DMAC group 1 INTGTMA0ATOM00 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM01                   (0x000000CDUL) /* DMAC group 1 INTGTMA0ATOM01 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM02                   (0x000000CEUL) /* DMAC group 1 INTGTMA0ATOM02 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM03                   (0x000000CFUL) /* DMAC group 1 INTGTMA0ATOM03 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ00                       (0x000000D0UL) /* DMAC group 1 ATOMDREQ00 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ01                       (0x000000D1UL) /* DMAC group 1 ATOMDREQ01 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ02                       (0x000000D2UL) /* DMAC group 1 ATOMDREQ02 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ03                       (0x000000D3UL) /* DMAC group 1 ATOMDREQ03 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ04                       (0x000000D4UL) /* DMAC group 1 ATOMDREQ04 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ05                       (0x000000D5UL) /* DMAC group 1 ATOMDREQ05 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ06                       (0x000000D6UL) /* DMAC group 1 ATOMDREQ06 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ07                       (0x000000D7UL) /* DMAC group 1 ATOMDREQ07 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM10                   (0x000000D8UL) /* DMAC group 1 INTGTMA0ATOM10 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM11                   (0x000000D9UL) /* DMAC group 1 INTGTMA0ATOM11 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM12                   (0x000000DAUL) /* DMAC group 1 INTGTMA0ATOM12 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM13                   (0x000000DBUL) /* DMAC group 1 INTGTMA0ATOM13 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ10                       (0x000000DCUL) /* DMAC group 1 ATOMDREQ10 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ11                       (0x000000DDUL) /* DMAC group 1 ATOMDREQ11 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ12                       (0x000000DEUL) /* DMAC group 1 ATOMDREQ12 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ13                       (0x000000DFUL) /* DMAC group 1 ATOMDREQ13 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ14                       (0x000000E0UL) /* DMAC group 1 ATOMDREQ14 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ15                       (0x000000E1UL) /* DMAC group 1 ATOMDREQ15 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ16                       (0x000000E2UL) /* DMAC group 1 ATOMDREQ16 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ17                       (0x000000E3UL) /* DMAC group 1 ATOMDREQ17 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM20                   (0x000000E4UL) /* DMAC group 1 INTGTMA0ATOM20 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM21                   (0x000000E5UL) /* DMAC group 1 INTGTMA0ATOM21 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM22                   (0x000000E6UL) /* DMAC group 1 INTGTMA0ATOM22 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM23                   (0x000000E7UL) /* DMAC group 1 INTGTMA0ATOM23 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ20                       (0x000000E8UL) /* DMAC group 1 ATOMDREQ20 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ21                       (0x000000E9UL) /* DMAC group 1 ATOMDREQ21 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ22                       (0x000000EAUL) /* DMAC group 1 ATOMDREQ22 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ23                       (0x000000EBUL) /* DMAC group 1 ATOMDREQ23 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ24                       (0x000000ECUL) /* DMAC group 1 ATOMDREQ24 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ25                       (0x000000EDUL) /* DMAC group 1 ATOMDREQ25 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ26                       (0x000000EEUL) /* DMAC group 1 ATOMDREQ26 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ27                       (0x000000EFUL) /* DMAC group 1 ATOMDREQ27 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM30                   (0x000000F0UL) /* DMAC group 1 INTGTMA0ATOM30 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM31                   (0x000000F1UL) /* DMAC group 1 INTGTMA0ATOM31 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM32                   (0x000000F2UL) /* DMAC group 1 INTGTMA0ATOM32 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ATOM33                   (0x000000F3UL) /* DMAC group 1 INTGTMA0ATOM33 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ30                       (0x000000F4UL) /* DMAC group 1 ATOMDREQ30 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ31                       (0x000000F5UL) /* DMAC group 1 ATOMDREQ31 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ32                       (0x000000F6UL) /* DMAC group 1 ATOMDREQ32 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ33                       (0x000000F7UL) /* DMAC group 1 ATOMDREQ33 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ34                       (0x000000F8UL) /* DMAC group 1 ATOMDREQ34 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ35                       (0x000000F9UL) /* DMAC group 1 ATOMDREQ35 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ36                       (0x000000FAUL) /* DMAC group 1 ATOMDREQ36 */
#define _DMAC_GRP1_REQUEST_ATOMDREQ37                       (0x000000FBUL) /* DMAC group 1 ATOMDREQ37 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ARU0                     (0x000000FCUL) /* DMAC group 1 INTGTMA0ARU0 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ARU1                     (0x000000FDUL) /* DMAC group 1 INTGTMA0ARU1 */
#define _DMAC_GRP1_REQUEST_INTGTMA0ARU2                     (0x000000FEUL) /* DMAC group 1 INTGTMA0ARU2 */
#define _DMAC_GRP1_REQUEST_INTGTMA0CMP                      (0x000000FFUL) /* DMAC group 1 INTGTMA0CMP */
/* DMA request initialization (DRQI) */
#define _DMAC_HW_DRQ_INIT_DISABLE                           (0x00000000UL) /* DRQ initialize disabled */
#define _DMAC_HW_DRQ_INIT_ENABLE                            (0x00000200UL) /* DRQ initialize enabled */
/* Pre-load enable (PLE) */
#define _DMAC_HW_PRE_LOAD_DISABLE                           (0x00000000UL) /* Pre-load disabled */
#define _DMAC_HW_PRE_LOAD_ENABLE                            (0x00000400UL) /* Pre-load enabled*/
/* First pre-load trigger (FPT) */
#define _DMAC_HW_FIRST_PRELOAD_DE                           (0x00000000UL) /* Start when set DE to 1 */
#define _DMAC_HW_FIRST_PRELOAD_HW                           (0x00000800UL) /* Start from HW request */
/* Transfer limit per hardware request (TL[2:0]) */
#define _DMAC_TRANSFER_SIZE_STS_TC                          (0x00000000UL) /* DMAjTMR_n.STS * DMAjRS_n.TC */
#define _DMAC_TRANSFER_SIZE_DTS_TC                          (0x00001000UL) /* DMAjTMR_n.DTS * DMAjRS_n.TC */
#define _DMAC_TRANSFER_SIZE_TSR                             (0x00002000UL) /* DMAjTSR_n.TSR */
#define _DMAC_TRANSFER_SIZE_DSE                             (0x00003000UL) /* Until the DSE flag is asserted */
#define _DMAC_TRANSFER_SIZE_TE                              (0x00004000UL) /* Until the TE flag is asserted */

/*
    DMA Descriptor Pointer Register n (DMAjDPPTR_n)
*/
/* Continuation flag of descriptor (CF) */
#define _DMAC_DESCRIPTOR_CONTINUE_DISABLE                   (0x00000000UL) /* DMAC descriptor continue disabled */
#define _DMAC_DESCRIPTOR_CONTINUE_ENABLE                    (0x00000001UL) /* DMAC descriptor continue enabled */
/* Descriptor interrupt enable (DIE) */
#define _DMAC_STEP_END_INT_DISABLE                          (0x00000000UL) /* DMAC descriptor interrupt disabled */
#define _DMAC_STEP_END_INT_ENABLE                           (0x00000002UL) /* DMAC descriptor interrupt enabled */

/*
    DMA Descriptor Control Register n (DMAjDPCR_n)
*/
/* Update the DMAjSAR_n register (UPF[0]) */
#define _DMAC_DMAJSAR_UPDATE_DISABLE                        (0x00000000UL) /* DMAC DMAjSAR_n update disabled */
#define _DMAC_DMAJSAR_UPDATE_ENABLE                         (0x00000001UL) /* DMAC DMAjSAR_n update enabled */
/* Update the DMAjDAR_n register (UPF[1]) */
#define _DMAC_DMAJDAR_UPDATE_DISABLE                        (0x00000000UL) /* DMAC DMAjDAR_n update disabled */
#define _DMAC_DMAJDAR_UPDATE_ENABLE                         (0x00000002UL) /* DMAC DMAjDAR_n update enabled */
/* Update the DMAjTSR_n register (UPF[2]) */
#define _DMAC_DMAJTSR_UPDATE_DISABLE                        (0x00000000UL) /* DMAC DMAjTSR_n update disabled */
#define _DMAC_DMAJTSR_UPDATE_ENABLE                         (0x00000004UL) /* DMAC DMAjTSR_n update enabled */
/* Update the DMAjTMR_n register (UPF[3]) */
#define _DMAC_DMAJTMR_UPDATE_DISABLE                        (0x00000000UL) /* DMAC DMAjTMR_n update disabled */
#define _DMAC_DMAJTMR_UPDATE_ENABLE                         (0x00000008UL) /* DMAC DMAjTMR_n update enabled */
/* Update the DMAjGIAI_n register (UPF[4]) */
#define _DMAC_DMAJGIAI_UPDATE_DISABLE                       (0x00000000UL) /* DMAC DMAjGIAI_n update disabled */
#define _DMAC_DMAJGIAI_UPDATE_ENABLE                        (0x00000010UL) /* DMAC DMAjGIAI_n update enabled */
/* Update the DMAjGOAI_n register (UPF[5]) */
#define _DMAC_DMAJGOAI_UPDATE_DISABLE                       (0x00000000UL) /* DMAC DMAjGOAI_n update disabled */
#define _DMAC_DMAJGOAI_UPDATE_ENABLE                        (0x00000020UL) /* DMAC DMAjGOAI_n update enabled */
/* Update the DMAjSIAI_n register (UPF[6]) */
#define _DMAC_DMAJSIAI_UPDATE_DISABLE                       (0x00000000UL) /* DMAC DMAjSIAI_n update disabled */
#define _DMAC_DMAJSIAI_UPDATE_ENABLE                        (0x00000040UL) /* DMAC DMAjSIAI_n update enabled */
/* Update the DMAjSOAI_n register (UPF[7]) */
#define _DMAC_DMAJSOAI_UPDATE_DISABLE                       (0x00000000UL) /* DMAC DMAjSOAI_n update disabled */
#define _DMAC_DMAJSOAI_UPDATE_ENABLE                        (0x00000080UL) /* DMAC DMAjSOAI_n update enabled */
/* Update the DMAjSGCR_n register (UPF[8]) */
#define _DMAC_DMAJSGCR_UPDATE_DISABLE                       (0x00000000UL) /* DMAC DMAjSGCR_n update disabled */
#define _DMAC_DMAJSGCR_UPDATE_ENABLE                        (0x00000100UL) /* DMAC DMAjSGCR_n update enabled */
/* Update the DMAjRS_n register (UPF[9]) */
#define _DMAC_DMAJRS_UPDATE_DISABLE                         (0x00000000UL) /* DMAC DMAjRS_n update disabled */
#define _DMAC_DMAJRS_UPDATE_ENABLE                          (0x00000200UL) /* DMAC DMAjRS_n update enabled */
/* Update the DMAjBUFCR_n register (UPF[10]) */
#define _DMAC_DMAJBUFCR_UPDATE_DISABLE                      (0x00000000UL) /* DMAC DMAjBUFCR_n update disabled */
#define _DMAC_DMAJBUFCR_UPDATE_ENABLE                       (0x00000400UL) /* DMAC DMAjBUFCR_n update enabled */

/*
    sDMACj Transfer Request Group Selection Register m (DMACSELj_m)
*/
/* Selects the DMA transfer request group (SEL0) */
#define _DMAC_REQUEST_16M_0_GRP0                            (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_0_GRP1                            (0x00000001UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL1) */
#define _DMAC_REQUEST_16M_1_GRP0                            (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_1_GRP1                            (0x00000004UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL2) */
#define _DMAC_REQUEST_16M_2_GRP0                            (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_2_GRP1                            (0x00000010UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL3) */
#define _DMAC_REQUEST_16M_3_GRP0                            (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_3_GRP1                            (0x00000040UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL4) */
#define _DMAC_REQUEST_16M_4_GRP0                            (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_4_GRP1                            (0x00000100UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL5) */
#define _DMAC_REQUEST_16M_5_GRP0                            (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_5_GRP1                            (0x00000400UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL6) */
#define _DMAC_REQUEST_16M_6_GRP0                            (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_6_GRP1                            (0x00001000UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL7) */
#define _DMAC_REQUEST_16M_7_GRP0                            (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_7_GRP1                            (0x00004000UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL8) */
#define _DMAC_REQUEST_16M_8_GRP0                            (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_8_GRP1                            (0x00010000UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL9) */
#define _DMAC_REQUEST_16M_9_GRP0                            (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_9_GRP1                            (0x00040000UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL10) */
#define _DMAC_REQUEST_16M_10_GRP0                           (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_10_GRP1                           (0x00100000UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL11) */
#define _DMAC_REQUEST_16M_11_GRP0                           (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_11_GRP1                           (0x00400000UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL12) */
#define _DMAC_REQUEST_16M_12_GRP0                           (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_12_GRP1                           (0x01000000UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL13) */
#define _DMAC_REQUEST_16M_13_GRP0                           (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_13_GRP1                           (0x04000000UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL14) */
#define _DMAC_REQUEST_16M_14_GRP0                           (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_14_GRP1                           (0x10000000UL) /* Select DMA transfer request group 1 */
/* Selects the DMA transfer request group (SEL15) */
#define _DMAC_REQUEST_16M_15_GRP0                           (0x00000000UL) /* Select DMA transfer request group 0 */
#define _DMAC_REQUEST_16M_15_GRP1                           (0x40000000UL) /* Select DMA transfer request group 1 */

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
