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
* File Name        : r_cg_intvector_PE0.c
* Version          : 1.0.150
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
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
/***********************************************************************************************************************
Private global variables and functions
***********************************************************************************************************************/
/* IPIR CH0 interrupt; */
extern void eiint0(void);
/* IPIR CH1 interrupt; */
extern void eiint1(void);
/* IPIR CH2 interrupt; */
extern void eiint2(void);
/* IPIR CH3 interrupt; */
extern void eiint3(void);
/* Broadcast notification 0; */
extern void eiint4(void);
/* Broadcast notification 1; */
extern void eiint5(void);
/* Broadcast notification 2; */
extern void eiint6(void);
/* Broadcast notification 3; */
extern void eiint7(void);
/* ECM maskable interrupt (EI level); */
extern void eiint8(void);
/* DCLS error interrupt (EI level); */
extern void eiint9(void);
/* TAUD0 Channel 0 interrupt; */
extern void eiint10(void);
/* TAUD0 Channel 2 interrupt; */
extern void eiint11(void);
/* TAUD0 Channel 4 interrupt; */
extern void eiint12(void);
/* TAUD0 Channel 6 interrupt; */
extern void eiint13(void);
/* Software interrupt 0; */
extern void eiint14(void);
/* Software interrupt 1; */
extern void eiint15(void);
/* Software interrupt 2; */
extern void eiint16(void);
/* Software interrupt 3; */
extern void eiint17(void);
/* Reserved; */
extern void eiint18(void);
/* Reserved; */
extern void eiint19(void);
/* Single interrupt request from ICUP to CPU (PE); */
extern void eiint20(void);
/* Interrupt request from ICUP to CPU (PE); */
extern void eiint21(void);
/* WDTB0 interrupt; */
extern void eiint22_0(void);
/* TAUD0 Channel 8 interrupt; */
extern void eiint23(void);
/* TAUD0 Channel 10 interrupt; */
extern void eiint24(void);
/* TAUD0 Channel 12 interrupt; */
extern void eiint25(void);
/* TAUD0 Channel 14 interrupt; */
extern void eiint26(void);
/* TAPA0 peak interrupt 0; */
extern void eiint27(void);
/* TAPA0 valley interrupt 0; */
extern void eiint28(void);
/* sDMAC0 address error or sDMAC1 address error interrupt; */
extern void r_sdmac_address_error_interrupt_pe0(void);
/* DTS transfer error; */
extern void eiint30(void);
/* TPTM0 Timing Protection Violation; */
extern void eiint31_0(void);
/* Reserved; */
extern void eiint32(void);
/* Reserved; */
extern void eiint33(void);
/* FPSYS0 Flash sequencer processing end interrupt; */
extern void eiint34(void);
/* Reserved; */
extern void eiint35(void);
/* FPSYS1 Flash sequencer processing end interrupt; */
extern void eiint36(void);
/* Reserved; */
extern void eiint37(void);
/* FPSYS2 Flash sequencer processing end interrupt; */
extern void eiint38(void);
/* DTS ch31-0 transfer end; */
extern void eiint39(void);
/* DTS ch63-32 transfer end; */
extern void eiint40(void);
/* DTS ch95-64 transfer end; */
extern void eiint41(void);
/* DTS ch127-96 transfer end; */
extern void eiint42(void);
/* DTS ch31-0 transfer count match; */
extern void eiint43(void);
/* DTS ch63-32 transfer count match; */
extern void eiint44(void);
/* DTS ch95-64 transfer count match; */
extern void eiint45(void);
/* DTS ch127-96 transfer count match; */
extern void eiint46(void);
/* sDMAC0 channel 0 transfer end interrupt or sDMAC0 channel 0 descriptor step end interrupt or sDMAC0 channel 0 address error interrupt; */
extern void r_Config_SDMAC10_end_interrupt(void);
/* sDMAC0 channel 1 transfer end interrupt or sDMAC0 channel 1 descriptor step end interrupt or sDMAC0 channel 1 address error interrupt; */
extern void r_Config_SDMAC11_end_interrupt(void);
/* sDMAC0 channel 2 transfer end interrupt or sDMAC0 channel 2 descriptor step end interrupt or sDMAC0 channel 2 address error interrupt; */
extern void eiint49(void);
/* sDMAC0 channel 3 transfer end interrupt or sDMAC0 channel 3 descriptor step end interrupt or sDMAC0 channel 3 address error interrupt; */
extern void eiint50(void);
/* sDMAC0 channel 4 transfer end interrupt or sDMAC0 channel 4 descriptor step end interrupt or sDMAC0 channel 4 address error interrupt; */
extern void eiint51(void);
/* sDMAC0 channel 5 transfer end interrupt or sDMAC0 channel 5 descriptor step end interrupt or sDMAC0 channel 5 address error interrupt; */
extern void eiint52(void);
/* sDMAC0 channel 6 transfer end interrupt or sDMAC0 channel 6 descriptor step end interrupt or sDMAC0 channel 6 address error interrupt; */
extern void eiint53(void);
/* sDMAC0 channel 7 transfer end interrupt or sDMAC0 channel 7 descriptor step end interrupt or sDMAC0 channel 7 address error interrupt; */
extern void eiint54(void);
/* sDMAC0 channel 8 transfer end interrupt or sDMAC0 channel 8 descriptor step end interrupt or sDMAC0 channel 8 address error interrupt; */
extern void eiint55(void);
/* sDMAC0 channel 9 transfer end interrupt or sDMAC0 channel 9 descriptor step end interrupt or sDMAC0 channel 9 address error interrupt; */
extern void eiint56(void);
/* sDMAC0 channel 10 transfer end interrupt or sDMAC0 channel 10 descriptor step end interrupt or sDMAC0 channel 10 address error interrupt; */
extern void eiint57(void);
/* sDMAC0 channel 11 transfer end interrupt or sDMAC0 channel 11 descriptor step end interrupt or sDMAC0 channel 11 address error interrupt; */
extern void eiint58(void);
/* sDMAC0 channel 12 transfer end interrupt or sDMAC0 channel 12 descriptor step end interrupt or sDMAC0 channel 12 address error interrupt; */
extern void eiint59(void);
/* sDMAC0 channel 13 transfer end interrupt or sDMAC0 channel 13 descriptor step end interrupt or sDMAC0 channel 13 address error interrupt; */
extern void eiint60(void);
/* sDMAC0 channel 14 transfer end interrupt or sDMAC0 channel 14 descriptor step end interrupt or sDMAC0 channel 14 address error interrupt; */
extern void eiint61(void);
/* sDMAC0 channel 15 transfer end interrupt or sDMAC0 channel 15 descriptor step end interrupt or sDMAC0 channel 15 address error interrupt; */
extern void eiint62(void);
/* sDMAC1 channel 0 transfer end interrupt or sDMAC1 channel 0 descriptor step end interrupt or sDMAC1 channel 0 address error interrupt; */
extern void eiint63(void);
/* sDMAC1 channel 1 transfer end interrupt or sDMAC1 channel 1 descriptor step end interrupt or sDMAC1 channel 1 address error interrupt; */
extern void eiint64(void);
/* sDMAC1 channel 2 transfer end interrupt or sDMAC1 channel 2 descriptor step end interrupt or sDMAC1 channel 2 address error interrupt; */
extern void eiint65(void);
/* sDMAC1 channel 3 transfer end interrupt or sDMAC1 channel 3 descriptor step end interrupt or sDMAC1 channel 3 address error interrupt; */
extern void eiint66(void);
/* sDMAC1 channel 4 transfer end interrupt or sDMAC1 channel 4 descriptor step end interrupt or sDMAC1 channel 4 address error interrupt; */
extern void eiint67(void);
/* sDMAC1 channel 5 transfer end interrupt or sDMAC1 channel 5 descriptor step end interrupt or sDMAC1 channel 5 address error interrupt; */
extern void eiint68(void);
/* sDMAC1 channel 6 transfer end interrupt or sDMAC1 channel 6 descriptor step end interrupt or sDMAC1 channel 6 address error interrupt; */
extern void eiint69(void);
/* sDMAC1 channel 7 transfer end interrupt or sDMAC1 channel 7 descriptor step end interrupt or sDMAC1 channel 7 address error interrupt; */
extern void eiint70(void);
/* sDMAC1 channel 8 transfer end interrupt or sDMAC1 channel 8 descriptor step end interrupt or sDMAC1 channel 8 address error interrupt; */
extern void eiint71(void);
/* sDMAC1 channel 9 transfer end interrupt or sDMAC1 channel 9 descriptor step end interrupt or sDMAC1 channel 9 address error interrupt; */
extern void eiint72(void);
/* sDMAC1 channel 10 transfer end interrupt or sDMAC1 channel 10 descriptor step end interrupt or sDMAC1 channel 10 address error interrupt; */
extern void eiint73(void);
/* sDMAC1 channel 11 transfer end interrupt or sDMAC1 channel 11 descriptor step end interrupt or sDMAC1 channel 11 address error interrupt; */
extern void eiint74(void);
/* sDMAC1 channel 12 transfer end interrupt or sDMAC1 channel 12 descriptor step end interrupt or sDMAC1 channel 12 address error interrupt; */
extern void eiint75(void);
/* sDMAC1 channel 13 transfer end interrupt or sDMAC1 channel 13 descriptor step end interrupt or sDMAC1 channel 13 address error interrupt; */
extern void eiint76(void);
/* sDMAC1 channel 14 transfer end interrupt or sDMAC1 channel 14 descriptor step end interrupt or sDMAC1 channel 14 address error interrupt; */
extern void eiint77(void);
/* sDMAC1 channel 15 transfer end interrupt or sDMAC1 channel 15 descriptor step end interrupt or sDMAC1 channel 15 address error interrupt; */
extern void eiint78(void);
/* TIM0 Shared interrupts (TIM0_IRQ0); */
extern void eiint79(void);
/* TIM0 Shared interrupts (TIM0_IRQ1); */
extern void eiint80(void);
/* TIM0 Shared interrupts (TIM0_IRQ2); */
extern void eiint81(void);
/* TIM0 Shared interrupts (TIM0_IRQ3); */
extern void eiint82(void);
/* TIM0 Shared interrupts (TIM0_IRQ4); */
extern void eiint83(void);
/* TIM0 Shared interrupts (TIM0_IRQ5); */
extern void eiint84(void);
/* TIM0 Shared interrupts (TIM0_IRQ6); */
extern void eiint85(void);
/* TIM0 Shared interrupts (TIM0_IRQ7); */
extern void eiint86(void);
/* TIM1 Shared interrupts (TIM1_IRQ0); */
extern void eiint87(void);
/* TIM1 Shared interrupts (TIM1_IRQ1); */
extern void eiint88(void);
/* TIM1 Shared interrupts (TIM1_IRQ2); */
extern void eiint89(void);
/* TIM1 Shared interrupts (TIM1_IRQ3); */
extern void eiint90(void);
/* TIM1 Shared interrupts (TIM1_IRQ4); */
extern void eiint91(void);
/* TIM1 Shared interrupts (TIM1_IRQ5); */
extern void eiint92(void);
/* TIM1 Shared interrupts (TIM1_IRQ6); */
extern void eiint93(void);
/* TIM1 Shared interrupts (TIM1_IRQ7); */
extern void eiint94(void);
/* TIM2 Shared interrupts (TIM2_IRQ0); */
extern void eiint95(void);
/* TIM2 Shared interrupts (TIM2_IRQ1); */
extern void eiint96(void);
/* TIM2 Shared interrupts (TIM2_IRQ2); */
extern void eiint97(void);
/* TIM2 Shared interrupts (TIM2_IRQ3); */
extern void eiint98(void);
/* TIM2 Shared interrupts (TIM2_IRQ4); */
extern void eiint99(void);
/* TIM2 Shared interrupts (TIM2_IRQ5); */
extern void eiint100(void);
/* TIM2 Shared interrupts (TIM2_IRQ6); */
extern void eiint101(void);
/* TIM2 Shared interrupts (TIM2_IRQ7); */
extern void eiint102(void);
/* TIM3 Shared interrupts (TIM3_IRQ0); */
extern void eiint103(void);
/* TIM3 Shared interrupts (TIM3_IRQ1); */
extern void eiint104(void);
/* TIM3 Shared interrupts (TIM3_IRQ2); */
extern void eiint105(void);
/* TIM3 Shared interrupts (TIM3_IRQ3); */
extern void eiint106(void);
/* TIM3 Shared interrupts (TIM3_IRQ4); */
extern void eiint107(void);
/* TIM3 Shared interrupts (TIM3_IRQ5); */
extern void eiint108(void);
/* TIM3 Shared interrupts (TIM3_IRQ6); */
extern void eiint109(void);
/* TIM3 Shared interrupts (TIM3_IRQ7); */
extern void eiint110(void);
/* MCS0 Interrupt for channel (MCS0_IRQ0); */
extern void eiint111(void);
/* MCS0 Interrupt for channel (MCS0_IRQ1); */
extern void eiint112(void);
/* MCS0 Interrupt for channel (MCS0_IRQ2); */
extern void eiint113(void);
/* MCS0 Interrupt for channel (MCS0_IRQ3); */
extern void eiint114(void);
/* MCS0 Interrupt for channel (MCS0_IRQ4); */
extern void eiint115(void);
/* MCS0 Interrupt for channel (MCS0_IRQ5); */
extern void eiint116(void);
/* MCS0 Interrupt for channel (MCS0_IRQ6); */
extern void eiint117(void);
/* MCS0 Interrupt for channel (MCS0_IRQ7); */
extern void eiint118(void);
/* MCS1 Interrupt for channel (MCS1_IRQ0); */
extern void eiint119(void);
/* MCS1 Interrupt for channel (MCS1_IRQ1); */
extern void eiint120(void);
/* MCS1 Interrupt for channel (MCS1_IRQ2); */
extern void eiint121(void);
/* MCS1 Interrupt for channel (MCS1_IRQ3); */
extern void eiint122(void);
/* MCS1 Interrupt for channel (MCS1_IRQ4); */
extern void eiint123(void);
/* MCS1 Interrupt for channel (MCS1_IRQ5); */
extern void eiint124(void);
/* MCS1 Interrupt for channel (MCS1_IRQ6); */
extern void eiint125(void);
/* MCS1 Interrupt for channel (MCS1_IRQ7); */
extern void eiint126(void);
/* MCS2 Interrupt for channel (MCS2_IRQ0); */
extern void eiint127(void);
/* MCS2 Interrupt for channel (MCS2_IRQ1); */
extern void eiint128(void);
/* MCS2 Interrupt for channel (MCS2_IRQ2); */
extern void eiint129(void);
/* MCS2 Interrupt for channel (MCS2_IRQ3); */
extern void eiint130(void);
/* MCS2 Interrupt for channel (MCS2_IRQ4); */
extern void eiint131(void);
/* MCS2 Interrupt for channel (MCS2_IRQ5); */
extern void eiint132(void);
/* MCS2 Interrupt for channel (MCS2_IRQ6); */
extern void eiint133(void);
/* MCS2 Interrupt for channel (MCS2_IRQ7); */
extern void eiint134(void);
/* MCS3 Interrupt for channel (MCS3_IRQ0); */
extern void eiint135(void);
/* MCS3 Interrupt for channel (MCS3_IRQ1); */
extern void eiint136(void);
/* MCS3 Interrupt for channel (MCS3_IRQ2); */
extern void eiint137(void);
/* MCS3 Interrupt for channel (MCS3_IRQ3); */
extern void eiint138(void);
/* MCS3 Interrupt for channel (MCS3_IRQ4); */
extern void eiint139(void);
/* MCS3 Interrupt for channel (MCS3_IRQ5); */
extern void eiint140(void);
/* MCS3 Interrupt for channel (MCS3_IRQ6); */
extern void eiint141(void);
/* MCS3 Interrupt for channel (MCS3_IRQ7); */
extern void eiint142(void);
/* ATOM0 Shared interrupts (ATOM0_IRQ0); */
extern void eiint143(void);
/* ATOM0 Shared interrupts (ATOM0_IRQ1); */
extern void eiint144(void);
/* ATOM0 Shared interrupts (ATOM0_IRQ2); */
extern void eiint145(void);
/* ATOM0 Shared interrupts (ATOM0_IRQ3); */
extern void eiint146(void);
/* ATOM1 Shared interrupts (ATOM1_IRQ0); */
extern void eiint147(void);
/* ATOM1 Shared interrupts (ATOM1_IRQ1); */
extern void eiint148(void);
/* ATOM1 Shared interrupts (ATOM1_IRQ2); */
extern void eiint149(void);
/* ATOM1 Shared interrupts (ATOM1_IRQ3); */
extern void eiint150(void);
/* ATOM2 Shared interrupts (ATOM2_IRQ0); */
extern void eiint151(void);
/* ATOM2 Shared interrupts (ATOM2_IRQ1); */
extern void eiint152(void);
/* ATOM2 Shared interrupts (ATOM2_IRQ2); */
extern void eiint153(void);
/* ATOM2 Shared interrupts (ATOM2_IRQ3); */
extern void eiint154(void);
/* ATOM3 Shared interrupts (ATOM3_IRQ0); */
extern void eiint155(void);
/* ATOM3 Shared interrupts (ATOM3_IRQ1); */
extern void eiint156(void);
/* ATOM3 Shared interrupts (ATOM3_IRQ2); */
extern void eiint157(void);
/* ATOM3 Shared interrupts (ATOM3_IRQ3); */
extern void eiint158(void);
/* AEI Shared interrupt; */
extern void eiint159(void);
/* ARU_NEW_DATA0 interrupt; */
extern void eiint160(void);
/* ARU_NEW_DATA1 interrupt; */
extern void eiint161(void);
/* ARU_ACC_ACK interrupt; */
extern void eiint162(void);
/* CMP Shared interrupt; */
extern void eiint163(void);
/* GTM Error Interrupt; */
extern void eiint164(void);
/* TSG30 compare match interrupt 0 or TSG30 period interrupt (in HTPWM mode only); */
extern void eiint165(void);
/* TSG30 compare match interrupt 1; */
extern void eiint166(void);
/* TSG30 compare match interrupt 2; */
extern void eiint167(void);
/* TSG30 compare match interrupt 3; */
extern void eiint168(void);
/* TSG30 compare match interrupt 4; */
extern void eiint169(void);
/* TSG30 compare match interrupt 5; */
extern void eiint170(void);
/* TSG30 compare match interrupt 6; */
extern void eiint171(void);
/* TSG30 compare match interrupt 7; */
extern void eiint172(void);
/* TSG30 compare match interrupt 8; */
extern void eiint173(void);
/* TSG30 compare match interrupt 9; */
extern void eiint174(void);
/* TSG30 compare match interrupt 10; */
extern void eiint175(void);
/* TSG30 compare match interrupt 11; */
extern void eiint176(void);
/* TSG30 compare match interrupt 12; */
extern void eiint177(void);
/* TSG30 peak interrupt; */
extern void eiint178(void);
/* TSG30 valley interrupt; */
extern void eiint179(void);
/* TSG30 error interrupt; */
extern void eiint180(void);
/* TSG30 warning interrupt; */
extern void eiint181(void);
/* TSG31 compare match interrupt 0  or TSG31 period interrupt (in HTPWM mode only); */
extern void eiint182(void);
/* TSG31 compare match interrupt 1; */
extern void eiint183(void);
/* TSG31 compare match interrupt 2; */
extern void eiint184(void);
/* TSG31 compare match interrupt 3; */
extern void eiint185(void);
/* TSG31 compare match interrupt 4; */
extern void eiint186(void);
/* TSG31 compare match interrupt 5; */
extern void eiint187(void);
/* TSG31 compare match interrupt 6; */
extern void eiint188(void);
/* TSG31 compare match interrupt 7; */
extern void eiint189(void);
/* TSG31 compare match interrupt 8; */
extern void eiint190(void);
/* TSG31 compare match interrupt 9; */
extern void eiint191(void);
/* TSG31 compare match interrupt 10; */
extern void eiint192(void);
/* TSG31 compare match interrupt 11; */
extern void eiint193(void);
/* TSG31 compare match interrupt 12; */
extern void eiint194(void);
/* TSG31 peak interrupt; */
extern void eiint195(void);
/* TSG31 valley interrupt; */
extern void eiint196(void);
/* TSG31 error interrupt; */
extern void eiint197(void);
/* TSG31 warning interrupt; */
extern void eiint198(void);
/* OSTM0 interrupt; */
extern void eiint199(void);
/* OSTM1 interrupt; */
extern void eiint200(void);
/* OSTM2 interrupt; */
extern void eiint201(void);
/* OSTM3 interrupt; */
extern void eiint202(void);
/* OSTM4 interrupt; */
extern void eiint203(void);
/* OSTM5 interrupt; */
extern void eiint204(void);
/* Reserved; */
extern void eiint205(void);
/* Reserved; */
extern void eiint206(void);
/* OSTM8 interrupt; */
extern void eiint207(void);
/* OSTM9 interrupt; */
extern void eiint208(void);
/* TPTM up timer interrupt for PE0 with comparison value 0; */
extern void eiint209(void);
/* TPTM up timer interrupt for PE0 with comparison value 1; */
extern void eiint210(void);
/* TPTM up timer interrupt for PE0 with comparison value 2; */
extern void eiint211(void);
/* TPTM up timer interrupt for PE0 with comparison value 3; */
extern void eiint212(void);
/* TPTM up timer interrupt for PE1 with comparison value 0; */
extern void eiint213(void);
/* TPTM up timer interrupt for PE1 with comparison value 1; */
extern void eiint214(void);
/* TPTM up timer interrupt for PE1 with comparison value 2; */
extern void eiint215(void);
/* TPTM up timer interrupt for PE1 with comparison value 3; */
extern void eiint216(void);
/* Reserved; */
extern void eiint217(void);
/* Reserved; */
extern void eiint218(void);
/* Reserved; */
extern void eiint219(void);
/* Reserved; */
extern void eiint220(void);
/* Reserved; */
extern void eiint221(void);
/* Reserved; */
extern void eiint222(void);
/* Reserved; */
extern void eiint223(void);
/* Reserved; */
extern void eiint224(void);
/* ADCJ0 Secondary voltage monitor error interrupt; */
extern void eiint225(void);
/* ADCJ0 A/D error interrupt upper/ lower limit error interrupt; */
extern void eiint226(void);
/* ADCJ0 Scan group 0 (SG0) end interrupt; */
extern void eiint227(void);
/* ADCJ0 Scan group 1 (SG1) end interrupt; */
extern void eiint228(void);
/* ADCJ0 Scan group 2 (SG2) end interrupt; */
extern void eiint229(void);
/* ADCJ0 Scan group 3 (SG3) end interrupt; */
extern void eiint230(void);
/* ADCJ0 Scan group 4 (SG4) end interrupt; */
extern void eiint231(void);
/* ADCJ1 A/D error interrupt upper/ lower limit error interrupt; */
extern void eiint232(void);
/* ADCJ1 Scan group 0 (SG0) end interrupt; */
extern void eiint233(void);
/* ADCJ1 Scan group 1 (SG1) end interrupt; */
extern void eiint234(void);
/* ADCJ1 Scan group 2 (SG2) end interrupt; */
extern void eiint235(void);
/* ADCJ1 Scan group 3 (SG3) end interrupt; */
extern void eiint236(void);
/* ADCJ1 Scan group 4 (SG4) end interrupt; */
extern void eiint237(void);
/* ADCJ2 A/D error interrupt upper/ lower limit error interrupt; */
extern void eiint238(void);
/* ADCJ2 Scan group 0 (SG0) end interrupt; */
extern void eiint239(void);
/* ADCJ2 Scan group 1 (SG1) end interrupt; */
extern void eiint240(void);
/* ADCJ2 Scan group 2 (SG2) end interrupt; */
extern void eiint241(void);
/* ADCJ2 Scan group 3 (SG3) end interrupt; */
extern void eiint242(void);
/* ADCJ2 Scan group 4 (SG4) end interrupt; */
extern void eiint243(void);
/* MSPI0 Transmit status interrupt for channel 0; */
extern void eiint244(void);
/* MSPI0 Receive status interrupt for channel 0; */
extern void eiint245(void);
/* MSPI0 Transmit status interrupt for channel 1; */
extern void eiint246(void);
/* MSPI0 Receive status interrupt for channel 1; */
extern void eiint247(void);
/* MSPI0 Transmit status interrupt for channel 2; */
extern void eiint248(void);
/* MSPI0 Receive status interrupt for channel 2; */
extern void eiint249(void);
/* MSPI0 Channel selectable Transmit status interrupt; */
extern void eiint250(void);
/* MSPI0 Channel selectable Receive status interrupt; */
extern void eiint251(void);
/* MSPI0 Channel selectable Frame count end interrupt; */
extern void eiint252(void);
/* MSPI0 Channel selectable Error interrupt; */
extern void eiint253(void);
/* MSPI1 Transmit status interrupt for channel 0; */
extern void eiint254(void);
/* MSPI1 Receive status interrupt for channel 0; */
extern void eiint255(void);
/* MSPI1 Transmit status interrupt for channel 1; */
extern void eiint256(void);
/* MSPI1 Receive status interrupt for channel 1; */
extern void eiint257(void);
/* MSPI1 Transmit status interrupt for channel 2; */
extern void eiint258(void);
/* MSPI1 Receive status interrupt for channel 2; */
extern void eiint259(void);
/* MSPI1 Channel selectable Transmit status interrupt; */
extern void eiint260(void);
/* MSPI1 Channel selectable Receive status interrupt; */
extern void eiint261(void);
/* MSPI1 Channel selectable Frame count end interrupt; */
extern void eiint262(void);
/* MSPI1 Channel selectable Error interrupt; */
extern void eiint263(void);
/* MSPI2 Channel selectable Transmit status interrupt; */
extern void eiint264(void);
/* MSPI2 Channel selectable Receive status interrupt; */
extern void eiint265(void);
/* MSPI2 Channel selectable Frame count end interrupt; */
extern void eiint266(void);
/* MSPI2 Channel selectable Error interrupt; */
extern void eiint267(void);
/* MSPI3 Channel selectable Transmit status interrupt; */
extern void eiint268(void);
/* MSPI3 Channel selectable Receive status interrupt; */
extern void eiint269(void);
/* MSPI3 Channel selectable Frame count end interrupt; */
extern void eiint270(void);
/* MSPI3 Channel selectable Error interrupt; */
extern void eiint271(void);
/* MSPI4 Channel selectable Transmit status interrupt; */
extern void eiint272(void);
/* MSPI4 Channel selectable Receive status interrupt; */
extern void eiint273(void);
/* MSPI4 Channel selectable Frame count end interrupt; */
extern void eiint274(void);
/* MSPI4 Channel selectable Error interrupt; */
extern void eiint275(void);
/* MSPI5 Channel selectable Transmit status interrupt; */
extern void eiint276(void);
/* MSPI5 Channel selectable Receive status interrupt; */
extern void eiint277(void);
/* MSPI5 Channel selectable Frame count end interrupt; */
extern void eiint278(void);
/* MSPI5 Channel selectable Error interrupt; */
extern void eiint279(void);
/* MSPI6 Channel selectable Transmit status interrupt; */
extern void eiint280(void);
/* MSPI6 Channel selectable Receive status interrupt; */
extern void eiint281(void);
/* MSPI6 Channel selectable Frame count end interrupt; */
extern void eiint282(void);
/* MSPI6 Channel selectable Error interrupt; */
extern void eiint283(void);
/* MSPI7 Channel selectable Transmit status interrupt; */
extern void eiint284(void);
/* MSPI7 Channel selectable Receive status interrupt; */
extern void eiint285(void);
/* MSPI7 Channel selectable Frame count end interrupt; */
extern void eiint286(void);
/* MSPI7 Channel selectable Error interrupt; */
extern void eiint287(void);
/* MSPI8 Channel selectable Transmit status interrupt; */
extern void eiint288(void);
/* MSPI8 Channel selectable Receive status interrupt; */
extern void eiint289(void);
/* MSPI8 Channel selectable Frame count end interrupt; */
extern void eiint290(void);
/* MSPI8 Channel selectable Error interrupt; */
extern void eiint291(void);
/* Reserved; */
extern void eiint292(void);
/* Reserved; */
extern void eiint293(void);
/* Reserved; */
extern void eiint294(void);
/* Reserved; */
extern void eiint295(void);
/* RSCAN0 CAN global error interrupt; */
extern void eiint296(void);
/* RSCAN0 CAN receive FIFO interrupt; */
extern void eiint297(void);
/* CAN0 error interrupt; */
extern void eiint298(void);
/* CAN0 transmit/receive FIFO receive completion interrupt; */
extern void eiint299(void);
/* CAN0 transmit interrupt; */
extern void eiint300(void);
/* CAN1 error interrupt; */
extern void eiint301(void);
/* CAN1 transmit/receive FIFO receive completion interrupt; */
extern void eiint302(void);
/* CAN1 transmit interrupt; */
extern void eiint303(void);
/* CAN2 error interrupt; */
extern void eiint304(void);
/* CAN2 transmit/receive FIFO receive completion interrupt; */
extern void eiint305(void);
/* CAN2 transmit interrupt; */
extern void eiint306(void);
/* CAN3 error interrupt; */
extern void eiint307(void);
/* CAN3 transmit/receive FIFO receive completion interrupt; */
extern void eiint308(void);
/* CAN3 transmit interrupt; */
extern void eiint309(void);
/* CAN4 error interrupt; */
extern void eiint310(void);
/* CAN4 transmit/receive FIFO receive completion interrupt; */
extern void eiint311(void);
/* CAN4 transmit interrupt; */
extern void eiint312(void);
/* CAN5 error interrupt; */
extern void eiint313(void);
/* CAN5 transmit/receive FIFO receive completion interrupt; */
extern void eiint314(void);
/* CAN5 transmit interrupt; */
extern void eiint315(void);
/* CAN6 error interrupt; */
extern void eiint316(void);
/* CAN6 transmit/receive FIFO receive completion interrupt; */
extern void eiint317(void);
/* CAN6 transmit interrupt; */
extern void eiint318(void);
/* CAN7 error interrupt; */
extern void eiint319(void);
/* CAN7 transmit/receive FIFO receive completion interrupt; */
extern void eiint320(void);
/* CAN7 transmit interrupt; */
extern void eiint321(void);
/* RSCAN1 CAN global error interrupt; */
extern void eiint322(void);
/* RSCAN1 CAN receive FIFO interrupt; */
extern void eiint323(void);
/* CAN8 error interrupt; */
extern void eiint324(void);
/* CAN8 transmit/receive FIFO receive completion interrupt; */
extern void eiint325(void);
/* CAN8 transmit interrupt; */
extern void eiint326(void);
/* CAN9 error interrupt; */
extern void eiint327(void);
/* CAN9 transmit/receive FIFO receive completion interrupt; */
extern void eiint328(void);
/* CAN9 transmit interrupt; */
extern void eiint329(void);
/* CAN10 error interrupt; */
extern void eiint330(void);
/* CAN10 transmit/receive FIFO receive completion interrupt; */
extern void eiint331(void);
/* CAN10 transmit interrupt; */
extern void eiint332(void);
/* CAN11 error interrupt; */
extern void eiint333(void);
/* CAN11 transmit/receive FIFO receive completion interrupt; */
extern void eiint334(void);
/* CAN11 transmit interrupt; */
extern void eiint335(void);
/* CAN12 error interrupt; */
extern void eiint336(void);
/* CAN12 transmit/receive FIFO receive completion interrupt; */
extern void eiint337(void);
/* CAN12 transmit interrupt; */
extern void eiint338(void);
/* CAN13 error interrupt; */
extern void eiint339(void);
/* CAN13 transmit/receive FIFO receive completion interrupt; */
extern void eiint340(void);
/* CAN13 transmit interrupt; */
extern void eiint341(void);
/* CAN14 error interrupt; */
extern void eiint342(void);
/* CAN14 transmit/receive FIFO receive completion interrupt; */
extern void eiint343(void);
/* CAN14 transmit interrupt; */
extern void eiint344(void);
/* CAN15 error interrupt; */
extern void eiint345(void);
/* CAN15 transmit/receive FIFO receive completion interrupt; */
extern void eiint346(void);
/* CAN15 transmit interrupt; */
extern void eiint347(void);
/* SCI30 Receive error; */
extern void eiint348(void);
/* SCI30 Receive data full; */
extern void eiint349(void);
/* SCI30 Transmit data empty; */
extern void eiint350(void);
/* SCI30 End of transmission; */
extern void eiint351(void);
/* SCI31 Receive error; */
extern void eiint352(void);
/* SCI31 Receive data full; */
extern void eiint353(void);
/* SCI31 Transmit data empty; */
extern void eiint354(void);
/* SCI31 End of transmission; */
extern void eiint355(void);
/* SCI32 Receive error; */
extern void eiint356(void);
/* SCI32 Receive data full; */
extern void eiint357(void);
/* SCI32 Transmit data empty; */
extern void eiint358(void);
/* SCI32 End of transmission; */
extern void eiint359(void);
/* TAUJ0 Channel 0 interrupt; */
extern void eiint360(void);
/* TAUJ0 Channel 1 interrupt; */
extern void eiint361(void);
/* TAUJ0 Channel 2 interrupt; */
extern void eiint362(void);
/* TAUJ0 Channel 3 interrupt; */
extern void eiint363(void);
/* TAUJ1 Channel 0 interrupt; */
extern void eiint364(void);
/* TAUJ1 Channel 1 interrupt; */
extern void eiint365(void);
/* TAUJ1 Channel 2 interrupt; */
extern void eiint366(void);
/* TAUJ1 Channel 3 interrupt; */
extern void eiint367(void);
/* TAUJ2 Channel 0 interrupt; */
extern void eiint368(void);
/* TAUJ2 Channel 1 interrupt; */
extern void eiint369(void);
/* TAUJ2 Channel 2 interrupt; */
extern void eiint370(void);
/* TAUJ2 Channel 3 interrupt; */
extern void eiint371(void);
/* TAUJ3 Channel 0 interrupt; */
extern void eiint372(void);
/* TAUJ3 Channel 1 interrupt; */
extern void eiint373(void);
/* TAUJ3 Channel 2 interrupt; */
extern void eiint374(void);
/* TAUJ3 Channel 3 interrupt; */
extern void eiint375(void);
/* TAUD0 Channel 1 interrupt; */
extern void eiint376(void);
/* TAUD0 Channel 3 interrupt; */
extern void eiint377(void);
/* TAUD0 Channel 5 interrupt; */
extern void eiint378(void);
/* TAUD0 Channel 7 interrupt; */
extern void eiint379(void);
/* TAUD0 Channel 9 interrupt; */
extern void eiint380(void);
/* TAUD0 Channel 11 interrupt; */
extern void eiint381(void);
/* TAUD0 Channel 13 interrupt; */
extern void eiint382(void);
/* TAUD0 Channel 15 interrupt; */
extern void eiint383(void);
/* TAUD1 Channel 0 interrupt; */
extern void eiint384(void);
/* TAUD1 Channel 1 interrupt; */
extern void eiint385(void);
/* TAUD1 Channel 2 interrupt; */
extern void eiint386(void);
/* TAUD1 Channel 3 interrupt; */
extern void eiint387(void);
/* TAUD1 Channel 4 interrupt; */
extern void eiint388(void);
/* TAUD1 Channel 5 interrupt; */
extern void eiint389(void);
/* TAUD1 Channel 6 interrupt; */
extern void eiint390(void);
/* TAUD1 Channel 7 interrupt; */
extern void eiint391(void);
/* TAUD1 Channel 8 interrupt; */
extern void eiint392(void);
/* TAUD1 Channel 9 interrupt; */
extern void eiint393(void);
/* TAUD1 Channel 10 interrupt; */
extern void eiint394(void);
/* TAUD1 Channel 11 interrupt; */
extern void eiint395(void);
/* TAUD1 Channel 12 interrupt; */
extern void eiint396(void);
/* TAUD1 Channel 13 interrupt; */
extern void eiint397(void);
/* TAUD1 Channel 14 interrupt; */
extern void eiint398(void);
/* TAUD1 Channel 15 interrupt; */
extern void eiint399(void);
/* TAUD2 Channel 0 interrupt; */
extern void eiint400(void);
/* TAUD2 Channel 1 interrupt; */
extern void eiint401(void);
/* TAUD2 Channel 2 interrupt; */
extern void eiint402(void);
/* TAUD2 Channel 3 interrupt; */
extern void eiint403(void);
/* TAUD2 Channel 4 interrupt; */
extern void eiint404(void);
/* TAUD2 Channel 5 interrupt; */
extern void eiint405(void);
/* TAUD2 Channel 6 interrupt; */
extern void eiint406(void);
/* TAUD2 Channel 7 interrupt; */
extern void eiint407(void);
/* TAUD2 Channel 8 interrupt; */
extern void eiint408(void);
/* TAUD2 Channel 9 interrupt; */
extern void eiint409(void);
/* TAUD2 Channel 10 interrupt; */
extern void eiint410(void);
/* TAUD2 Channel 11 interrupt; */
extern void eiint411(void);
/* TAUD2 Channel 12 interrupt; */
extern void eiint412(void);
/* TAUD2 Channel 13 interrupt; */
extern void eiint413(void);
/* TAUD2 Channel 14 interrupt; */
extern void eiint414(void);
/* TAUD2 Channel 15 interrupt; */
extern void eiint415(void);
/* RLIN30 interrupt; */
extern void eiint416(void);
/* RLIN30 transmit interrupt; */
extern void r_Config_UART0_interrupt_send(void);
/* RLIN30 receive completion interrupt; */
extern void r_Config_UART0_interrupt_receive(void);
/* RLIN30 status interrupt; */
extern void r_Config_UART0_interrupt_error(void);
/* RLIN31 interrupt; */
extern void eiint420(void);
/* RLIN31 transmit interrupt; */
extern void r_Config_UART1_interrupt_send(void);
/* RLIN31 receive completion interrupt; */
extern void r_Config_UART1_interrupt_receive(void);
/* RLIN31 status interrupt; */
extern void r_Config_UART1_interrupt_error(void);
/* RLIN32 interrupt; */
extern void eiint424(void);
/* RLIN32 transmit interrupt; */
extern void eiint425(void);
/* RLIN32 receive completion interrupt; */
extern void eiint426(void);
/* RLIN32 status interrupt; */
extern void eiint427(void);
/* RLIN33 interrupt; */
extern void eiint428(void);
/* RLIN33 transmit interrupt; */
extern void eiint429(void);
/* RLIN33 receive completion interrupt; */
extern void eiint430(void);
/* RLIN33 status interrupt; */
extern void eiint431(void);
/* RLIN34 interrupt; */
extern void eiint432(void);
/* RLIN34 transmit interrupt; */
extern void eiint433(void);
/* RLIN34 receive completion interrupt; */
extern void eiint434(void);
/* RLIN34 status interrupt; */
extern void eiint435(void);
/* RLIN35 interrupt; */
extern void eiint436(void);
/* RLIN35 transmit interrupt; */
extern void eiint437(void);
/* RLIN35 receive completion interrupt; */
extern void eiint438(void);
/* RLIN35 status interrupt; */
extern void eiint439(void);
/* RLIN36 interrupt; */
extern void eiint440(void);
/* RLIN36 transmit interrupt; */
extern void eiint441(void);
/* RLIN36 receive completion interrupt; */
extern void eiint442(void);
/* RLIN36 status interrupt; */
extern void eiint443(void);
/* RLIN37 interrupt; */
extern void eiint444(void);
/* RLIN37 transmit interrupt; */
extern void eiint445(void);
/* RLIN37 receive completion interrupt; */
extern void eiint446(void);
/* RLIN37 status interrupt; */
extern void eiint447(void);
/* RLIN38 interrupt; */
extern void eiint448(void);
/* RLIN38 transmit interrupt; */
extern void eiint449(void);
/* RLIN38 receive completion interrupt; */
extern void eiint450(void);
/* RLIN38 status interrupt; */
extern void eiint451(void);
/* RLIN39 interrupt; */
extern void eiint452(void);
/* RLIN39 transmit interrupt; */
extern void eiint453(void);
/* RLIN39 receive completion interrupt; */
extern void eiint454(void);
/* RLIN39 status interrupt; */
extern void eiint455(void);
/* RLIN310 interrupt; */
extern void eiint456(void);
/* RLIN310 transmit interrupt; */
extern void eiint457(void);
/* RLIN310 receive completion interrupt; */
extern void eiint458(void);
/* RLIN310 status interrupt; */
extern void eiint459(void);
/* RLIN311 interrupt; */
extern void eiint460(void);
/* RLIN311 transmit interrupt; */
extern void eiint461(void);
/* RLIN311 receive completion interrupt; */
extern void eiint462(void);
/* RLIN311 status interrupt; */
extern void eiint463(void);
/* RLIN312 interrupt; */
extern void eiint464(void);
/* RLIN312 transmit interrupt; */
extern void eiint465(void);
/* RLIN312 receive completion interrupt; */
extern void eiint466(void);
/* RLIN312 status interrupt; */
extern void eiint467(void);
/* RLIN313 interrupt; */
extern void eiint468(void);
/* RLIN313 transmit interrupt; */
extern void eiint469(void);
/* RLIN313 receive completion interrupt; */
extern void eiint470(void);
/* RLIN313 status interrupt; */
extern void eiint471(void);
/* RLIN314 interrupt; */
extern void eiint472(void);
/* RLIN314 transmit interrupt; */
extern void eiint473(void);
/* RLIN314 receive completion interrupt; */
extern void eiint474(void);
/* RLIN314 status interrupt; */
extern void eiint475(void);
/* RLIN315 interrupt; */
extern void eiint476(void);
/* RLIN315 transmit interrupt; */
extern void eiint477(void);
/* RLIN315 receive completion interrupt; */
extern void eiint478(void);
/* RLIN315 status interrupt; */
extern void eiint479(void);
/* RLIN316 interrupt; */
extern void eiint480(void);
/* RLIN316 transmit interrupt; */
extern void eiint481(void);
/* RLIN316 receive completion interrupt; */
extern void eiint482(void);
/* RLIN316 status interrupt; */
extern void eiint483(void);
/* RLIN317 interrupt; */
extern void eiint484(void);
/* RLIN317 transmit interrupt; */
extern void eiint485(void);
/* RLIN317 receive completion interrupt; */
extern void eiint486(void);
/* RLIN317 status interrupt; */
extern void eiint487(void);
/* RLIN318 interrupt; */
extern void eiint488(void);
/* RLIN318 transmit interrupt; */
extern void eiint489(void);
/* RLIN318 receive completion interrupt; */
extern void eiint490(void);
/* RLIN318 status interrupt; */
extern void eiint491(void);
/* RLIN319 interrupt; */
extern void eiint492(void);
/* RLIN319 transmit interrupt; */
extern void eiint493(void);
/* RLIN319 receive completion interrupt; */
extern void eiint494(void);
/* RLIN319 status interrupt; */
extern void eiint495(void);
/* RLIN320 interrupt; */
extern void eiint496(void);
/* RLIN320 transmit interrupt; */
extern void eiint497(void);
/* RLIN320 receive completion interrupt; */
extern void eiint498(void);
/* RLIN320 status interrupt; */
extern void eiint499(void);
/* RLIN321 interrupt; */
extern void eiint500(void);
/* RLIN321 transmit interrupt; */
extern void eiint501(void);
/* RLIN321 receive completion interrupt; */
extern void eiint502(void);
/* RLIN321 status interrupt; */
extern void eiint503(void);
/* RLIN320 interrupt; */
extern void eiint504(void);
/* RLIN320 transmit interrupt; */
extern void eiint505(void);
/* RLIN320 receive completion interrupt; */
extern void eiint506(void);
/* RLIN320 status interrupt; */
extern void eiint507(void);
/* RLIN323 interrupt; */
extern void eiint508(void);
/* RLIN323 transmit interrupt; */
extern void eiint509(void);
/* RLIN323 receive completion interrupt; */
extern void eiint510(void);
/* RLIN323 status interrupt; */
extern void eiint511(void);
/* RSENT0 status interrupt; */
extern void eiint512(void);
/* RSENT0 receive interrupt; */
extern void eiint513(void);
/* RSENT1 status interrupt; */
extern void eiint514(void);
/* RSENT1 receive interrupt; */
extern void eiint515(void);
/* RSENT2 status interrupt; */
extern void eiint516(void);
/* RSENT2 receive interrupt; */
extern void eiint517(void);
/* RSENT3 status interrupt; */
extern void eiint518(void);
/* RSENT3 receive interrupt; */
extern void eiint519(void);
/* RSENT4 status interrupt; */
extern void eiint520(void);
/* RSENT4 receive interrupt; */
extern void eiint521(void);
/* RSENT5 status interrupt; */
extern void eiint522(void);
/* RSENT5 receive interrupt; */
extern void eiint523(void);
/* RSENT6 status interrupt; */
extern void eiint524(void);
/* RSENT6 receive interrupt; */
extern void eiint525(void);
/* RSENT7 status interrupt; */
extern void eiint526(void);
/* RSENT7 receive interrupt; */
extern void eiint527(void);
/* TPBA0 Period match detection interrupt; */
extern void eiint528(void);
/* TPBA0 Duty match detection interrupt; */
extern void eiint529(void);
/* TPBA0 Pattern number matching detection interrupt; */
extern void eiint530(void);
/* TPBA1 Period match detection interrupt; */
extern void eiint531(void);
/* TPBA1 Duty match detection interrupt; */
extern void eiint532(void);
/* TPBA1 Pattern number matching detection interrupt; */
extern void eiint533(void);
/* ENCA0 overflow interrupt; */
extern void eiint534(void);
/* ENCA0 underflow interrupt; */
extern void eiint535(void);
/* ENCA0 capture/compare match interrupt 0; */
extern void eiint536(void);
/* ENCA0 capture/compare match interrupt 1; */
extern void eiint537(void);
/* ENCA0 encoder clear interrupt; */
extern void eiint538(void);
/* ENCA1 overflow interrupt; */
extern void eiint539(void);
/* ENCA1 underflow interrupt; */
extern void eiint540(void);
/* ENCA1 capture/compare match interrupt 0; */
extern void eiint541(void);
/* ENCA1 capture/compare match interrupt 1; */
extern void eiint542(void);
/* ENCA1 encoder clear interrupt; */
extern void eiint543(void);
/* External interrupt 0; */
extern void eiint544(void);
/* External interrupt 1; */
extern void eiint545(void);
/* External interrupt 2; */
extern void eiint546(void);
/* External interrupt 3; */
extern void eiint547(void);
/* External interrupt 4; */
extern void eiint548(void);
/* External interrupt 5; */
extern void eiint549(void);
/* External interrupt 6; */
extern void eiint550(void);
/* External interrupt 7; */
extern void eiint551(void);
/* External interrupt 8; */
extern void eiint552(void);
/* External interrupt 9; */
extern void eiint553(void);
/* External interrupt 10; */
extern void eiint554(void);
/* External interrupt 11; */
extern void eiint555(void);
/* External interrupt 12; */
extern void eiint556(void);
/* External interrupt 13; */
extern void eiint557(void);
/* External interrupt 14; */
extern void eiint558(void);
/* External interrupt 15; */
extern void eiint559(void);
/* External interrupt 16; */
extern void eiint560(void);
/* External interrupt 17; */
extern void eiint561(void);
/* External interrupt 18; */
extern void eiint562(void);
/* External interrupt 19; */
extern void eiint563(void);
/* External interrupt 20; */
extern void eiint564(void);
/* External interrupt 21; */
extern void eiint565(void);
/* External interrupt 22; */
extern void eiint566(void);
/* External interrupt 23; */
extern void eiint567(void);
/* External interrupt 24; */
extern void eiint568(void);
/* External interrupt 25; */
extern void eiint569(void);
/* External interrupt 26; */
extern void eiint570(void);
/* External interrupt 27; */
extern void eiint571(void);
/* External interrupt 28; */
extern void eiint572(void);
/* External interrupt 29; */
extern void eiint573(void);
/* External interrupt 30; */
extern void eiint574(void);
/* External interrupt 31; */
extern void eiint575(void);
/* External interrupt 32; */
extern void eiint576(void);
/* External interrupt 33; */
extern void eiint577(void);
/* External interrupt 34; */
extern void eiint578(void);
/* External interrupt 35; */
extern void eiint579(void);
/* External interrupt 36; */
extern void eiint580(void);
/* External interrupt 37; */
extern void eiint581(void);
/* External interrupt 38; */
extern void eiint582(void);
/* External interrupt 39; */
extern void eiint583(void);
/* PSI5S0 Communication interrupt for CH0; */
extern void eiint584(void);
/* PSI5S0 Communication interrupt for CH1; */
extern void eiint585(void);
/* PSI5S0 Communication interrupt for CH2; */
extern void eiint586(void);
/* PSI5S0 Communication interrupt for CH3; */
extern void eiint587(void);
/* PSI5S0 Communication interrupt for CH4; */
extern void eiint588(void);
/* PSI5S0 Communication interrupt for CH5; */
extern void eiint589(void);
/* PSI5S0 Communication interrupt for CH6; */
extern void eiint590(void);
/* PSI5S0 Communication interrupt for CH7; */
extern void eiint591(void);
/* PSI5S1 Communication interrupt for CH0; */
extern void eiint592(void);
/* PSI5S1 Communication interrupt for CH1; */
extern void eiint593(void);
/* PSI5S1 Communication interrupt for CH2; */
extern void eiint594(void);
/* PSI5S1 Communication interrupt for CH3; */
extern void eiint595(void);
/* PSI5S1 Communication interrupt for CH4; */
extern void eiint596(void);
/* PSI5S1 Communication interrupt for CH5; */
extern void eiint597(void);
/* PSI5S1 Communication interrupt for CH6; */
extern void eiint598(void);
/* PSI5S1 Communication interrupt for CH7; */
extern void eiint599(void);
/* PSI50 status interrupt; */
extern void eiint600(void);
/* PSI50 receive interrupt; */
extern void eiint601(void);
/* PSI50 transfer interrupt; */
extern void eiint602(void);
/* PSI51 status interrupt; */
extern void eiint603(void);
/* PSI51 receive interrupt; */
extern void eiint604(void);
/* PSI51 transfer interrupt; */
extern void eiint605(void);
/* PSI52 status interrupt; */
extern void eiint606(void);
/* PSI52 receive interrupt; */
extern void eiint607(void);
/* PSI52 transfer interrupt; */
extern void eiint608(void);
/* PSI53 status interrupt; */
extern void eiint609(void);
/* PSI53 receive interrupt; */
extern void eiint610(void);
/* PSI53 transfer interrupt; */
extern void eiint611(void);
/* RHSIF0 Transmit complete interrupt; */
extern void eiint612(void);
/* RHSIF0 Transmit exception interrupt; */
extern void eiint613(void);
/* RHSIF0 Receive complete interrupt; */
extern void eiint614(void);
/* RHSIF0 Receive exception interrupt; */
extern void eiint615(void);
/* RHSIF0 ICLC receive interrupt; */
extern void eiint616(void);
/* RHSIF0 Channel 0 interrupt; */
extern void eiint617(void);
/* RHSIF0 Channel 1 interrupt; */
extern void eiint618(void);
/* RHSIF0 Channel 2 interrupt; */
extern void eiint619(void);
/* RHSIF0 Channel 3 interrupt; */
extern void eiint620(void);
/* RHSIF0 Stream interrupt; */
extern void eiint621(void);
/* RHSIF0 Error interrupt / Security interrupt; */
extern void eiint622(void);
/* FLXA0 line 0 interrupt; */
extern void eiint623(void);
/* FLXA0 line 1 interrupt; */
extern void eiint624(void);
/* FLXA0 Timer 0 interrupt; */
extern void eiint625(void);
/* FLXA0 Timer 1 interrupt; */
extern void eiint626(void);
/* FLXA0 Timer 2 interrupt; */
extern void eiint627(void);
/* FLXA0 FIFO data available (FIFO is not empty) interrupt; */
extern void eiint628(void);
/* FLXA0 FIFO transfer warning interrupt; */
extern void eiint629(void);
/* FLXA0 Output transfer warning interrupt; */
extern void eiint630(void);
/* FLXA0 Output transfer done interrupt; */
extern void eiint631(void);
/* FLXA0 Input queue full interrupt; */
extern void eiint632(void);
/* FLXA0 Input queue empty interrupt; */
extern void eiint633(void);
/* FLXA1 line 0 interrupt; */
extern void eiint634(void);
/* FLXA1 line 1 interrupt; */
extern void eiint635(void);
/* FLXA1 Timer 0 interrupt; */
extern void eiint636(void);
/* FLXA1 Timer 1 interrupt; */
extern void eiint637(void);
/* FLXA1 Timer 2 interrupt; */
extern void eiint638(void);
/* FLXA1 FIFO data available (FIFO is not empty) interrupt; */
extern void eiint639(void);
/* FLXA1 FIFO transfer warning interrupt; */
extern void eiint640(void);
/* FLXA1 Output transfer warning interrupt; */
extern void eiint641(void);
/* FLXA1 Output transfer done interrupt; */
extern void eiint642(void);
/* FLXA1 Input queue full interrupt; */
extern void eiint643(void);
/* FLXA1 Input queue empty interrupt; */
extern void eiint644(void);
/* ETNB0 Data related interrupt; */
extern void eiint645(void);
/* ETNB0 Error related interrupt; */
extern void eiint646(void);
/* ETNB0 Management related interrupt; */
extern void eiint647(void);
/* ETNB0 MAC interrupt; */
extern void eiint648(void);
/* ETNB1 Data related interrupt; */
extern void eiint649(void);
/* ETNB1 Error related interrupt; */
extern void eiint650(void);
/* ETNB1 Management related interrupt; */
extern void eiint651(void);
/* ETNB1 MAC interrupt; */
extern void eiint652(void);
/* ETNB1 SGMII interrupt; */
extern void eiint653(void);
/* RTCA0 1-second interval interrupt; */
extern void eiint654(void);
/* RTCA0 Alarm interrupt; */
extern void eiint655(void);
/* RTCA0 Fixed interval interrupt; */
extern void eiint656(void);
/* OTS0 Error interrupt; */
extern void eiint657(void);
/* OTS0 Temperature measurement end interrupt; */
extern void eiint658(void);
/* OTS0 Temperature rise/drop interrupt; */
extern void eiint659(void);
/* PWGC unit 0 of group 0 interrupt; */
extern void eiint660(void);
/* PWGC unit 0 of group 1 interrupt; */
extern void eiint661(void);
/* PWGC unit 0 of group 2 interrupt; */
extern void eiint662(void);
/* PWGC unit 1 of group 0 interrupt; */
extern void eiint663(void);
/* PWGC unit 1 of group 1 interrupt; */
extern void eiint664(void);
/* PWGC unit 1 of group 2 interrupt; */
extern void eiint665(void);
/* PWGC unit 2 of group 0 interrupt; */
extern void eiint666(void);
/* PWGC unit 2 of group 1 interrupt; */
extern void eiint667(void);
/* PWGC unit 2 of group 2 interrupt; */
extern void eiint668(void);
/* PWGC unit 3 of group 0 interrupt; */
extern void eiint669(void);
/* PWGC unit 3 of group 1 interrupt; */
extern void eiint670(void);
/* PWGC unit 3 of group 2 interrupt; */
extern void eiint671(void);
/* PWSD queue full interrupt; */
extern void eiint672(void);
/* CXP10 transfer interrupt; */
extern void eiint673(void);
/* CXP10 receive interrupt; */
extern void eiint674(void);
/* CXP10 status interrupt; */
extern void eiint675(void);
/* CXP11 transfer interrupt; */
extern void eiint676(void);
/* CXP11 receive interrupt; */
extern void eiint677(void);
/* CXP11 status interrupt; */
extern void eiint678(void);
/* CXP12 transfer interrupt; */
extern void eiint679(void);
/* CXP12 receive interrupt; */
extern void eiint680(void);
/* CXP12 status interrupt; */
extern void eiint681(void);
/* CXP13 transfer interrupt; */
extern void eiint682(void);
/* CXP13 receive interrupt; */
extern void eiint683(void);
/* CXP13 status interrupt; */
extern void eiint684(void);
/* RIIC0 communication error or event generation interrupt; */
extern void eiint685(void);
/* RIIC0 receive end interrupt; */
extern void eiint686(void);
/* RIIC0 transmit data empty interrupt; */
extern void eiint687(void);
/* RIIC0 transmit end interrupt; */
extern void eiint688(void);
/* RIIC1 communication error or event generation interrupt; */
extern void eiint689(void);
/* RIIC1 receive end interrupt; */
extern void eiint690(void);
/* RIIC1 transmit data empty interrupt; */
extern void eiint691(void);
/* RIIC1 transmit end interrupt; */
extern void eiint692(void);
/* LPS0 Port polling end interrupt; */
extern void eiint693(void);
/* LPS0 Digital port error interrupt; */
extern void eiint694(void);
/* Reserved; */
extern void eiint695(void);
/* MMCA0 interrupt; */
extern void eiint696(void);
/* interrupt for degradation; */
extern void eiint697(void);
/* ICUMHA fatal error notification; */
extern void eiint698(void);
/* Edge detection of RLIN30 received data; */
extern void eiint699(void);
/* Edge detection of RLIN31 received data; */
extern void eiint700(void);
/* Edge detection of RSCFD0 received data; */
extern void eiint701(void);
/* Edge detection of RSCFD1 received data; */
extern void eiint702(void);
/* Edge detection of FLXA0 ch A received data; */
extern void eiint703(void);
/* Edge detection of FLXA1 ch A received data; */
extern void eiint704(void);
/* WDTBA interrupt; */
extern void eiint705(void);
/* Dedicated interrupt for on-chip debug function; */
extern void eiint706(void);
/* Reserved; */
extern void eiint707(void);
/* Reserved; */
extern void eiint708(void);
/* Reserved; */
extern void eiint709(void);
/* Reserved; */
extern void eiint710(void);
/* Reserved; */
extern void eiint711(void);
/* Reserved; */
extern void eiint712(void);
/* Reserved; */
extern void eiint713(void);
/* Reserved; */
extern void eiint714(void);
/* Emergency Hi-Z input 0; */
extern void eiint715(void);
/* Emergency Hi-Z input 1; */
extern void eiint716(void);
/* Reserved; */
extern void eiint717(void);
/* Reserved; */
extern void eiint718(void);
/* Reserved; */
extern void eiint719(void);
/* Reserved; */
extern void eiint720(void);
/* Reserved; */
extern void eiint721(void);
/* Reserved; */
extern void eiint722(void);
/* Reserved; */
extern void eiint723(void);
/* Reserved; */
extern void eiint724(void);
/* Reserved; */
extern void eiint725(void);
/* Reserved; */
extern void eiint726(void);
/* Reserved; */
extern void eiint727(void);
/* Reserved; */
extern void eiint728(void);
/* Reserved; */
extern void eiint729(void);
/* Reserved; */
extern void eiint730(void);
/* Reserved; */
extern void eiint731(void);
/* Reserved; */
extern void eiint732(void);
/* Reserved; */
extern void eiint733(void);
/* Reserved; */
extern void eiint734(void);
/* Reserved; */
extern void eiint735(void);
/* Reserved; */
extern void eiint736(void);
/* Reserved; */
extern void eiint737(void);
/* Reserved; */
extern void eiint738(void);
/* Reserved; */
extern void eiint739(void);
/* Reserved; */
extern void eiint740(void);
/* Reserved; */
extern void eiint741(void);
/* Reserved; */
extern void eiint742(void);
/* Reserved; */
extern void eiint743(void);
/* Reserved; */
extern void eiint744(void);
/* Reserved; */
extern void eiint745(void);
/* Reserved; */
extern void eiint746(void);
/* Reserved; */
extern void eiint747(void);
/* Reserved; */
extern void eiint748(void);
/* Reserved; */
extern void eiint749(void);
/* Reserved; */
extern void eiint750(void);
/* Reserved; */
extern void eiint751(void);
/* Reserved; */
extern void eiint752(void);
/* Reserved; */
extern void eiint753(void);
/* Reserved; */
extern void eiint754(void);
/* Reserved; */
extern void eiint755(void);
/* Reserved; */
extern void eiint756(void);
/* Reserved; */
extern void eiint757(void);
/* Reserved; */
extern void eiint758(void);
/* Reserved; */
extern void eiint759(void);
/* Reserved; */
extern void eiint760(void);
/* Reserved; */
extern void eiint761(void);
/* Reserved; */
extern void eiint762(void);
/* Reserved; */
extern void eiint763(void);
/* Reserved; */
extern void eiint764(void);
/* Reserved; */
extern void eiint765(void);
/* Reserved; */
extern void eiint766(void);
/* Reserved; */
extern void eiint767(void);

#pragma section const "EIINTTBL_PE0"
void * const INT_Vectors_PE0[] = {
    /* IPIR CH0 interrupt; */
    (void *)eiint0,
    /* IPIR CH1 interrupt; */
    (void *)eiint1,
    /* IPIR CH2 interrupt; */
    (void *)eiint2,
    /* IPIR CH3 interrupt; */
    (void *)eiint3,
    /* Broadcast notification 0; */
    (void *)eiint4,
    /* Broadcast notification 1; */
    (void *)eiint5,
    /* Broadcast notification 2; */
    (void *)eiint6,
    /* Broadcast notification 3; */
    (void *)eiint7,
    /* ECM maskable interrupt (EI level); */
    (void *)eiint8,
    /* DCLS error interrupt (EI level); */
    (void *)eiint9,
    /* TAUD0 Channel 0 interrupt; */
    (void *)eiint10,
    /* TAUD0 Channel 2 interrupt; */
    (void *)eiint11,
    /* TAUD0 Channel 4 interrupt; */
    (void *)eiint12,
    /* TAUD0 Channel 6 interrupt; */
    (void *)eiint13,
    /* Software interrupt 0; */
    (void *)eiint14,
    /* Software interrupt 1; */
    (void *)eiint15,
    /* Software interrupt 2; */
    (void *)eiint16,
    /* Software interrupt 3; */
    (void *)eiint17,
    /* Reserved; */
    (void *)eiint18,
    /* Reserved; */
    (void *)eiint19,
    /* Single interrupt request from ICUP to CPU (PE); */
    (void *)eiint20,
    /* Interrupt request from ICUP to CPU (PE); */
    (void *)eiint21,
    /* WDTB0 interrupt; */
    (void *)eiint22_0,
    /* TAUD0 Channel 8 interrupt; */
    (void *)eiint23,
    /* TAUD0 Channel 10 interrupt; */
    (void *)eiint24,
    /* TAUD0 Channel 12 interrupt; */
    (void *)eiint25,
    /* TAUD0 Channel 14 interrupt; */
    (void *)eiint26,
    /* TAPA0 peak interrupt 0; */
    (void *)eiint27,
    /* TAPA0 valley interrupt 0; */
    (void *)eiint28,
    /* sDMAC0 address error or sDMAC1 address error interrupt; */
    (void *)r_sdmac_address_error_interrupt_pe0,
    /* DTS transfer error; */
    (void *)eiint30,
    /* TPTM0 Timing Protection Violation; */
    (void *)eiint31_0,
    /* Reserved; */
    (void *)eiint32,
    /* Reserved; */
    (void *)eiint33,
    /* FPSYS0 Flash sequencer processing end interrupt; */
    (void *)eiint34,
    /* Reserved; */
    (void *)eiint35,
    /* FPSYS1 Flash sequencer processing end interrupt; */
    (void *)eiint36,
    /* Reserved; */
    (void *)eiint37,
    /* FPSYS2 Flash sequencer processing end interrupt; */
    (void *)eiint38,
    /* DTS ch31-0 transfer end; */
    (void *)eiint39,
    /* DTS ch63-32 transfer end; */
    (void *)eiint40,
    /* DTS ch95-64 transfer end; */
    (void *)eiint41,
    /* DTS ch127-96 transfer end; */
    (void *)eiint42,
    /* DTS ch31-0 transfer count match; */
    (void *)eiint43,
    /* DTS ch63-32 transfer count match; */
    (void *)eiint44,
    /* DTS ch95-64 transfer count match; */
    (void *)eiint45,
    /* DTS ch127-96 transfer count match; */
    (void *)eiint46,
    /* sDMAC0 channel 0 transfer end interrupt or sDMAC0 channel 0 descriptor step end interrupt or sDMAC0 channel 0 address error interrupt; */
    (void *)r_Config_SDMAC10_end_interrupt,
    /* sDMAC0 channel 1 transfer end interrupt or sDMAC0 channel 1 descriptor step end interrupt or sDMAC0 channel 1 address error interrupt; */
    (void *)r_Config_SDMAC11_end_interrupt,
    /* sDMAC0 channel 2 transfer end interrupt or sDMAC0 channel 2 descriptor step end interrupt or sDMAC0 channel 2 address error interrupt; */
    (void *)eiint49,
    /* sDMAC0 channel 3 transfer end interrupt or sDMAC0 channel 3 descriptor step end interrupt or sDMAC0 channel 3 address error interrupt; */
    (void *)eiint50,
    /* sDMAC0 channel 4 transfer end interrupt or sDMAC0 channel 4 descriptor step end interrupt or sDMAC0 channel 4 address error interrupt; */
    (void *)eiint51,
    /* sDMAC0 channel 5 transfer end interrupt or sDMAC0 channel 5 descriptor step end interrupt or sDMAC0 channel 5 address error interrupt; */
    (void *)eiint52,
    /* sDMAC0 channel 6 transfer end interrupt or sDMAC0 channel 6 descriptor step end interrupt or sDMAC0 channel 6 address error interrupt; */
    (void *)eiint53,
    /* sDMAC0 channel 7 transfer end interrupt or sDMAC0 channel 7 descriptor step end interrupt or sDMAC0 channel 7 address error interrupt; */
    (void *)eiint54,
    /* sDMAC0 channel 8 transfer end interrupt or sDMAC0 channel 8 descriptor step end interrupt or sDMAC0 channel 8 address error interrupt; */
    (void *)eiint55,
    /* sDMAC0 channel 9 transfer end interrupt or sDMAC0 channel 9 descriptor step end interrupt or sDMAC0 channel 9 address error interrupt; */
    (void *)eiint56,
    /* sDMAC0 channel 10 transfer end interrupt or sDMAC0 channel 10 descriptor step end interrupt or sDMAC0 channel 10 address error interrupt; */
    (void *)eiint57,
    /* sDMAC0 channel 11 transfer end interrupt or sDMAC0 channel 11 descriptor step end interrupt or sDMAC0 channel 11 address error interrupt; */
    (void *)eiint58,
    /* sDMAC0 channel 12 transfer end interrupt or sDMAC0 channel 12 descriptor step end interrupt or sDMAC0 channel 12 address error interrupt; */
    (void *)eiint59,
    /* sDMAC0 channel 13 transfer end interrupt or sDMAC0 channel 13 descriptor step end interrupt or sDMAC0 channel 13 address error interrupt; */
    (void *)eiint60,
    /* sDMAC0 channel 14 transfer end interrupt or sDMAC0 channel 14 descriptor step end interrupt or sDMAC0 channel 14 address error interrupt; */
    (void *)eiint61,
    /* sDMAC0 channel 15 transfer end interrupt or sDMAC0 channel 15 descriptor step end interrupt or sDMAC0 channel 15 address error interrupt; */
    (void *)eiint62,
    /* sDMAC1 channel 0 transfer end interrupt or sDMAC1 channel 0 descriptor step end interrupt or sDMAC1 channel 0 address error interrupt; */
    (void *)eiint63,
    /* sDMAC1 channel 1 transfer end interrupt or sDMAC1 channel 1 descriptor step end interrupt or sDMAC1 channel 1 address error interrupt; */
    (void *)eiint64,
    /* sDMAC1 channel 2 transfer end interrupt or sDMAC1 channel 2 descriptor step end interrupt or sDMAC1 channel 2 address error interrupt; */
    (void *)eiint65,
    /* sDMAC1 channel 3 transfer end interrupt or sDMAC1 channel 3 descriptor step end interrupt or sDMAC1 channel 3 address error interrupt; */
    (void *)eiint66,
    /* sDMAC1 channel 4 transfer end interrupt or sDMAC1 channel 4 descriptor step end interrupt or sDMAC1 channel 4 address error interrupt; */
    (void *)eiint67,
    /* sDMAC1 channel 5 transfer end interrupt or sDMAC1 channel 5 descriptor step end interrupt or sDMAC1 channel 5 address error interrupt; */
    (void *)eiint68,
    /* sDMAC1 channel 6 transfer end interrupt or sDMAC1 channel 6 descriptor step end interrupt or sDMAC1 channel 6 address error interrupt; */
    (void *)eiint69,
    /* sDMAC1 channel 7 transfer end interrupt or sDMAC1 channel 7 descriptor step end interrupt or sDMAC1 channel 7 address error interrupt; */
    (void *)eiint70,
    /* sDMAC1 channel 8 transfer end interrupt or sDMAC1 channel 8 descriptor step end interrupt or sDMAC1 channel 8 address error interrupt; */
    (void *)eiint71,
    /* sDMAC1 channel 9 transfer end interrupt or sDMAC1 channel 9 descriptor step end interrupt or sDMAC1 channel 9 address error interrupt; */
    (void *)eiint72,
    /* sDMAC1 channel 10 transfer end interrupt or sDMAC1 channel 10 descriptor step end interrupt or sDMAC1 channel 10 address error interrupt; */
    (void *)eiint73,
    /* sDMAC1 channel 11 transfer end interrupt or sDMAC1 channel 11 descriptor step end interrupt or sDMAC1 channel 11 address error interrupt; */
    (void *)eiint74,
    /* sDMAC1 channel 12 transfer end interrupt or sDMAC1 channel 12 descriptor step end interrupt or sDMAC1 channel 12 address error interrupt; */
    (void *)eiint75,
    /* sDMAC1 channel 13 transfer end interrupt or sDMAC1 channel 13 descriptor step end interrupt or sDMAC1 channel 13 address error interrupt; */
    (void *)eiint76,
    /* sDMAC1 channel 14 transfer end interrupt or sDMAC1 channel 14 descriptor step end interrupt or sDMAC1 channel 14 address error interrupt; */
    (void *)eiint77,
    /* sDMAC1 channel 15 transfer end interrupt or sDMAC1 channel 15 descriptor step end interrupt or sDMAC1 channel 15 address error interrupt; */
    (void *)eiint78,
    /* TIM0 Shared interrupts (TIM0_IRQ0); */
    (void *)eiint79,
    /* TIM0 Shared interrupts (TIM0_IRQ1); */
    (void *)eiint80,
    /* TIM0 Shared interrupts (TIM0_IRQ2); */
    (void *)eiint81,
    /* TIM0 Shared interrupts (TIM0_IRQ3); */
    (void *)eiint82,
    /* TIM0 Shared interrupts (TIM0_IRQ4); */
    (void *)eiint83,
    /* TIM0 Shared interrupts (TIM0_IRQ5); */
    (void *)eiint84,
    /* TIM0 Shared interrupts (TIM0_IRQ6); */
    (void *)eiint85,
    /* TIM0 Shared interrupts (TIM0_IRQ7); */
    (void *)eiint86,
    /* TIM1 Shared interrupts (TIM1_IRQ0); */
    (void *)eiint87,
    /* TIM1 Shared interrupts (TIM1_IRQ1); */
    (void *)eiint88,
    /* TIM1 Shared interrupts (TIM1_IRQ2); */
    (void *)eiint89,
    /* TIM1 Shared interrupts (TIM1_IRQ3); */
    (void *)eiint90,
    /* TIM1 Shared interrupts (TIM1_IRQ4); */
    (void *)eiint91,
    /* TIM1 Shared interrupts (TIM1_IRQ5); */
    (void *)eiint92,
    /* TIM1 Shared interrupts (TIM1_IRQ6); */
    (void *)eiint93,
    /* TIM1 Shared interrupts (TIM1_IRQ7); */
    (void *)eiint94,
    /* TIM2 Shared interrupts (TIM2_IRQ0); */
    (void *)eiint95,
    /* TIM2 Shared interrupts (TIM2_IRQ1); */
    (void *)eiint96,
    /* TIM2 Shared interrupts (TIM2_IRQ2); */
    (void *)eiint97,
    /* TIM2 Shared interrupts (TIM2_IRQ3); */
    (void *)eiint98,
    /* TIM2 Shared interrupts (TIM2_IRQ4); */
    (void *)eiint99,
    /* TIM2 Shared interrupts (TIM2_IRQ5); */
    (void *)eiint100,
    /* TIM2 Shared interrupts (TIM2_IRQ6); */
    (void *)eiint101,
    /* TIM2 Shared interrupts (TIM2_IRQ7); */
    (void *)eiint102,
    /* TIM3 Shared interrupts (TIM3_IRQ0); */
    (void *)eiint103,
    /* TIM3 Shared interrupts (TIM3_IRQ1); */
    (void *)eiint104,
    /* TIM3 Shared interrupts (TIM3_IRQ2); */
    (void *)eiint105,
    /* TIM3 Shared interrupts (TIM3_IRQ3); */
    (void *)eiint106,
    /* TIM3 Shared interrupts (TIM3_IRQ4); */
    (void *)eiint107,
    /* TIM3 Shared interrupts (TIM3_IRQ5); */
    (void *)eiint108,
    /* TIM3 Shared interrupts (TIM3_IRQ6); */
    (void *)eiint109,
    /* TIM3 Shared interrupts (TIM3_IRQ7); */
    (void *)eiint110,
    /* MCS0 Interrupt for channel (MCS0_IRQ0); */
    (void *)eiint111,
    /* MCS0 Interrupt for channel (MCS0_IRQ1); */
    (void *)eiint112,
    /* MCS0 Interrupt for channel (MCS0_IRQ2); */
    (void *)eiint113,
    /* MCS0 Interrupt for channel (MCS0_IRQ3); */
    (void *)eiint114,
    /* MCS0 Interrupt for channel (MCS0_IRQ4); */
    (void *)eiint115,
    /* MCS0 Interrupt for channel (MCS0_IRQ5); */
    (void *)eiint116,
    /* MCS0 Interrupt for channel (MCS0_IRQ6); */
    (void *)eiint117,
    /* MCS0 Interrupt for channel (MCS0_IRQ7); */
    (void *)eiint118,
    /* MCS1 Interrupt for channel (MCS1_IRQ0); */
    (void *)eiint119,
    /* MCS1 Interrupt for channel (MCS1_IRQ1); */
    (void *)eiint120,
    /* MCS1 Interrupt for channel (MCS1_IRQ2); */
    (void *)eiint121,
    /* MCS1 Interrupt for channel (MCS1_IRQ3); */
    (void *)eiint122,
    /* MCS1 Interrupt for channel (MCS1_IRQ4); */
    (void *)eiint123,
    /* MCS1 Interrupt for channel (MCS1_IRQ5); */
    (void *)eiint124,
    /* MCS1 Interrupt for channel (MCS1_IRQ6); */
    (void *)eiint125,
    /* MCS1 Interrupt for channel (MCS1_IRQ7); */
    (void *)eiint126,
    /* MCS2 Interrupt for channel (MCS2_IRQ0); */
    (void *)eiint127,
    /* MCS2 Interrupt for channel (MCS2_IRQ1); */
    (void *)eiint128,
    /* MCS2 Interrupt for channel (MCS2_IRQ2); */
    (void *)eiint129,
    /* MCS2 Interrupt for channel (MCS2_IRQ3); */
    (void *)eiint130,
    /* MCS2 Interrupt for channel (MCS2_IRQ4); */
    (void *)eiint131,
    /* MCS2 Interrupt for channel (MCS2_IRQ5); */
    (void *)eiint132,
    /* MCS2 Interrupt for channel (MCS2_IRQ6); */
    (void *)eiint133,
    /* MCS2 Interrupt for channel (MCS2_IRQ7); */
    (void *)eiint134,
    /* MCS3 Interrupt for channel (MCS3_IRQ0); */
    (void *)eiint135,
    /* MCS3 Interrupt for channel (MCS3_IRQ1); */
    (void *)eiint136,
    /* MCS3 Interrupt for channel (MCS3_IRQ2); */
    (void *)eiint137,
    /* MCS3 Interrupt for channel (MCS3_IRQ3); */
    (void *)eiint138,
    /* MCS3 Interrupt for channel (MCS3_IRQ4); */
    (void *)eiint139,
    /* MCS3 Interrupt for channel (MCS3_IRQ5); */
    (void *)eiint140,
    /* MCS3 Interrupt for channel (MCS3_IRQ6); */
    (void *)eiint141,
    /* MCS3 Interrupt for channel (MCS3_IRQ7); */
    (void *)eiint142,
    /* ATOM0 Shared interrupts (ATOM0_IRQ0); */
    (void *)eiint143,
    /* ATOM0 Shared interrupts (ATOM0_IRQ1); */
    (void *)eiint144,
    /* ATOM0 Shared interrupts (ATOM0_IRQ2); */
    (void *)eiint145,
    /* ATOM0 Shared interrupts (ATOM0_IRQ3); */
    (void *)eiint146,
    /* ATOM1 Shared interrupts (ATOM1_IRQ0); */
    (void *)eiint147,
    /* ATOM1 Shared interrupts (ATOM1_IRQ1); */
    (void *)eiint148,
    /* ATOM1 Shared interrupts (ATOM1_IRQ2); */
    (void *)eiint149,
    /* ATOM1 Shared interrupts (ATOM1_IRQ3); */
    (void *)eiint150,
    /* ATOM2 Shared interrupts (ATOM2_IRQ0); */
    (void *)eiint151,
    /* ATOM2 Shared interrupts (ATOM2_IRQ1); */
    (void *)eiint152,
    /* ATOM2 Shared interrupts (ATOM2_IRQ2); */
    (void *)eiint153,
    /* ATOM2 Shared interrupts (ATOM2_IRQ3); */
    (void *)eiint154,
    /* ATOM3 Shared interrupts (ATOM3_IRQ0); */
    (void *)eiint155,
    /* ATOM3 Shared interrupts (ATOM3_IRQ1); */
    (void *)eiint156,
    /* ATOM3 Shared interrupts (ATOM3_IRQ2); */
    (void *)eiint157,
    /* ATOM3 Shared interrupts (ATOM3_IRQ3); */
    (void *)eiint158,
    /* AEI Shared interrupt; */
    (void *)eiint159,
    /* ARU_NEW_DATA0 interrupt; */
    (void *)eiint160,
    /* ARU_NEW_DATA1 interrupt; */
    (void *)eiint161,
    /* ARU_ACC_ACK interrupt; */
    (void *)eiint162,
    /* CMP Shared interrupt; */
    (void *)eiint163,
    /* GTM Error Interrupt; */
    (void *)eiint164,
    /* TSG30 compare match interrupt 0 or TSG30 period interrupt (in HTPWM mode only); */
    (void *)eiint165,
    /* TSG30 compare match interrupt 1; */
    (void *)eiint166,
    /* TSG30 compare match interrupt 2; */
    (void *)eiint167,
    /* TSG30 compare match interrupt 3; */
    (void *)eiint168,
    /* TSG30 compare match interrupt 4; */
    (void *)eiint169,
    /* TSG30 compare match interrupt 5; */
    (void *)eiint170,
    /* TSG30 compare match interrupt 6; */
    (void *)eiint171,
    /* TSG30 compare match interrupt 7; */
    (void *)eiint172,
    /* TSG30 compare match interrupt 8; */
    (void *)eiint173,
    /* TSG30 compare match interrupt 9; */
    (void *)eiint174,
    /* TSG30 compare match interrupt 10; */
    (void *)eiint175,
    /* TSG30 compare match interrupt 11; */
    (void *)eiint176,
    /* TSG30 compare match interrupt 12; */
    (void *)eiint177,
    /* TSG30 peak interrupt; */
    (void *)eiint178,
    /* TSG30 valley interrupt; */
    (void *)eiint179,
    /* TSG30 error interrupt; */
    (void *)eiint180,
    /* TSG30 warning interrupt; */
    (void *)eiint181,
    /* TSG31 compare match interrupt 0  or TSG31 period interrupt (in HTPWM mode only); */
    (void *)eiint182,
    /* TSG31 compare match interrupt 1; */
    (void *)eiint183,
    /* TSG31 compare match interrupt 2; */
    (void *)eiint184,
    /* TSG31 compare match interrupt 3; */
    (void *)eiint185,
    /* TSG31 compare match interrupt 4; */
    (void *)eiint186,
    /* TSG31 compare match interrupt 5; */
    (void *)eiint187,
    /* TSG31 compare match interrupt 6; */
    (void *)eiint188,
    /* TSG31 compare match interrupt 7; */
    (void *)eiint189,
    /* TSG31 compare match interrupt 8; */
    (void *)eiint190,
    /* TSG31 compare match interrupt 9; */
    (void *)eiint191,
    /* TSG31 compare match interrupt 10; */
    (void *)eiint192,
    /* TSG31 compare match interrupt 11; */
    (void *)eiint193,
    /* TSG31 compare match interrupt 12; */
    (void *)eiint194,
    /* TSG31 peak interrupt; */
    (void *)eiint195,
    /* TSG31 valley interrupt; */
    (void *)eiint196,
    /* TSG31 error interrupt; */
    (void *)eiint197,
    /* TSG31 warning interrupt; */
    (void *)eiint198,
    /* OSTM0 interrupt; */
    (void *)eiint199,
    /* OSTM1 interrupt; */
    (void *)eiint200,
    /* OSTM2 interrupt; */
    (void *)eiint201,
    /* OSTM3 interrupt; */
    (void *)eiint202,
    /* OSTM4 interrupt; */
    (void *)eiint203,
    /* OSTM5 interrupt; */
    (void *)eiint204,
    /* Reserved; */
    (void *)eiint205,
    /* Reserved; */
    (void *)eiint206,
    /* OSTM8 interrupt; */
    (void *)eiint207,
    /* OSTM9 interrupt; */
    (void *)eiint208,
    /* TPTM up timer interrupt for PE0 with comparison value 0; */
    (void *)eiint209,
    /* TPTM up timer interrupt for PE0 with comparison value 1; */
    (void *)eiint210,
    /* TPTM up timer interrupt for PE0 with comparison value 2; */
    (void *)eiint211,
    /* TPTM up timer interrupt for PE0 with comparison value 3; */
    (void *)eiint212,
    /* TPTM up timer interrupt for PE1 with comparison value 0; */
    (void *)eiint213,
    /* TPTM up timer interrupt for PE1 with comparison value 1; */
    (void *)eiint214,
    /* TPTM up timer interrupt for PE1 with comparison value 2; */
    (void *)eiint215,
    /* TPTM up timer interrupt for PE1 with comparison value 3; */
    (void *)eiint216,
    /* Reserved; */
    (void *)eiint217,
    /* Reserved; */
    (void *)eiint218,
    /* Reserved; */
    (void *)eiint219,
    /* Reserved; */
    (void *)eiint220,
    /* Reserved; */
    (void *)eiint221,
    /* Reserved; */
    (void *)eiint222,
    /* Reserved; */
    (void *)eiint223,
    /* Reserved; */
    (void *)eiint224,
    /* ADCJ0 Secondary voltage monitor error interrupt; */
    (void *)eiint225,
    /* ADCJ0 A/D error interrupt upper/ lower limit error interrupt; */
    (void *)eiint226,
    /* ADCJ0 Scan group 0 (SG0) end interrupt; */
    (void *)eiint227,
    /* ADCJ0 Scan group 1 (SG1) end interrupt; */
    (void *)eiint228,
    /* ADCJ0 Scan group 2 (SG2) end interrupt; */
    (void *)eiint229,
    /* ADCJ0 Scan group 3 (SG3) end interrupt; */
    (void *)eiint230,
    /* ADCJ0 Scan group 4 (SG4) end interrupt; */
    (void *)eiint231,
    /* ADCJ1 A/D error interrupt upper/ lower limit error interrupt; */
    (void *)eiint232,
    /* ADCJ1 Scan group 0 (SG0) end interrupt; */
    (void *)eiint233,
    /* ADCJ1 Scan group 1 (SG1) end interrupt; */
    (void *)eiint234,
    /* ADCJ1 Scan group 2 (SG2) end interrupt; */
    (void *)eiint235,
    /* ADCJ1 Scan group 3 (SG3) end interrupt; */
    (void *)eiint236,
    /* ADCJ1 Scan group 4 (SG4) end interrupt; */
    (void *)eiint237,
    /* ADCJ2 A/D error interrupt upper/ lower limit error interrupt; */
    (void *)eiint238,
    /* ADCJ2 Scan group 0 (SG0) end interrupt; */
    (void *)eiint239,
    /* ADCJ2 Scan group 1 (SG1) end interrupt; */
    (void *)eiint240,
    /* ADCJ2 Scan group 2 (SG2) end interrupt; */
    (void *)eiint241,
    /* ADCJ2 Scan group 3 (SG3) end interrupt; */
    (void *)eiint242,
    /* ADCJ2 Scan group 4 (SG4) end interrupt; */
    (void *)eiint243,
    /* MSPI0 Transmit status interrupt for channel 0; */
    (void *)eiint244,
    /* MSPI0 Receive status interrupt for channel 0; */
    (void *)eiint245,
    /* MSPI0 Transmit status interrupt for channel 1; */
    (void *)eiint246,
    /* MSPI0 Receive status interrupt for channel 1; */
    (void *)eiint247,
    /* MSPI0 Transmit status interrupt for channel 2; */
    (void *)eiint248,
    /* MSPI0 Receive status interrupt for channel 2; */
    (void *)eiint249,
    /* MSPI0 Channel selectable Transmit status interrupt; */
    (void *)eiint250,
    /* MSPI0 Channel selectable Receive status interrupt; */
    (void *)eiint251,
    /* MSPI0 Channel selectable Frame count end interrupt; */
    (void *)eiint252,
    /* MSPI0 Channel selectable Error interrupt; */
    (void *)eiint253,
    /* MSPI1 Transmit status interrupt for channel 0; */
    (void *)eiint254,
    /* MSPI1 Receive status interrupt for channel 0; */
    (void *)eiint255,
    /* MSPI1 Transmit status interrupt for channel 1; */
    (void *)eiint256,
    /* MSPI1 Receive status interrupt for channel 1; */
    (void *)eiint257,
    /* MSPI1 Transmit status interrupt for channel 2; */
    (void *)eiint258,
    /* MSPI1 Receive status interrupt for channel 2; */
    (void *)eiint259,
    /* MSPI1 Channel selectable Transmit status interrupt; */
    (void *)eiint260,
    /* MSPI1 Channel selectable Receive status interrupt; */
    (void *)eiint261,
    /* MSPI1 Channel selectable Frame count end interrupt; */
    (void *)eiint262,
    /* MSPI1 Channel selectable Error interrupt; */
    (void *)eiint263,
    /* MSPI2 Channel selectable Transmit status interrupt; */
    (void *)eiint264,
    /* MSPI2 Channel selectable Receive status interrupt; */
    (void *)eiint265,
    /* MSPI2 Channel selectable Frame count end interrupt; */
    (void *)eiint266,
    /* MSPI2 Channel selectable Error interrupt; */
    (void *)eiint267,
    /* MSPI3 Channel selectable Transmit status interrupt; */
    (void *)eiint268,
    /* MSPI3 Channel selectable Receive status interrupt; */
    (void *)eiint269,
    /* MSPI3 Channel selectable Frame count end interrupt; */
    (void *)eiint270,
    /* MSPI3 Channel selectable Error interrupt; */
    (void *)eiint271,
    /* MSPI4 Channel selectable Transmit status interrupt; */
    (void *)eiint272,
    /* MSPI4 Channel selectable Receive status interrupt; */
    (void *)eiint273,
    /* MSPI4 Channel selectable Frame count end interrupt; */
    (void *)eiint274,
    /* MSPI4 Channel selectable Error interrupt; */
    (void *)eiint275,
    /* MSPI5 Channel selectable Transmit status interrupt; */
    (void *)eiint276,
    /* MSPI5 Channel selectable Receive status interrupt; */
    (void *)eiint277,
    /* MSPI5 Channel selectable Frame count end interrupt; */
    (void *)eiint278,
    /* MSPI5 Channel selectable Error interrupt; */
    (void *)eiint279,
    /* MSPI6 Channel selectable Transmit status interrupt; */
    (void *)eiint280,
    /* MSPI6 Channel selectable Receive status interrupt; */
    (void *)eiint281,
    /* MSPI6 Channel selectable Frame count end interrupt; */
    (void *)eiint282,
    /* MSPI6 Channel selectable Error interrupt; */
    (void *)eiint283,
    /* MSPI7 Channel selectable Transmit status interrupt; */
    (void *)eiint284,
    /* MSPI7 Channel selectable Receive status interrupt; */
    (void *)eiint285,
    /* MSPI7 Channel selectable Frame count end interrupt; */
    (void *)eiint286,
    /* MSPI7 Channel selectable Error interrupt; */
    (void *)eiint287,
    /* MSPI8 Channel selectable Transmit status interrupt; */
    (void *)eiint288,
    /* MSPI8 Channel selectable Receive status interrupt; */
    (void *)eiint289,
    /* MSPI8 Channel selectable Frame count end interrupt; */
    (void *)eiint290,
    /* MSPI8 Channel selectable Error interrupt; */
    (void *)eiint291,
    /* Reserved; */
    (void *)eiint292,
    /* Reserved; */
    (void *)eiint293,
    /* Reserved; */
    (void *)eiint294,
    /* Reserved; */
    (void *)eiint295,
    /* RSCAN0 CAN global error interrupt; */
    (void *)eiint296,
    /* RSCAN0 CAN receive FIFO interrupt; */
    (void *)eiint297,
    /* CAN0 error interrupt; */
    (void *)eiint298,
    /* CAN0 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint299,
    /* CAN0 transmit interrupt; */
    (void *)eiint300,
    /* CAN1 error interrupt; */
    (void *)eiint301,
    /* CAN1 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint302,
    /* CAN1 transmit interrupt; */
    (void *)eiint303,
    /* CAN2 error interrupt; */
    (void *)eiint304,
    /* CAN2 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint305,
    /* CAN2 transmit interrupt; */
    (void *)eiint306,
    /* CAN3 error interrupt; */
    (void *)eiint307,
    /* CAN3 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint308,
    /* CAN3 transmit interrupt; */
    (void *)eiint309,
    /* CAN4 error interrupt; */
    (void *)eiint310,
    /* CAN4 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint311,
    /* CAN4 transmit interrupt; */
    (void *)eiint312,
    /* CAN5 error interrupt; */
    (void *)eiint313,
    /* CAN5 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint314,
    /* CAN5 transmit interrupt; */
    (void *)eiint315,
    /* CAN6 error interrupt; */
    (void *)eiint316,
    /* CAN6 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint317,
    /* CAN6 transmit interrupt; */
    (void *)eiint318,
    /* CAN7 error interrupt; */
    (void *)eiint319,
    /* CAN7 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint320,
    /* CAN7 transmit interrupt; */
    (void *)eiint321,
    /* RSCAN1 CAN global error interrupt; */
    (void *)eiint322,
    /* RSCAN1 CAN receive FIFO interrupt; */
    (void *)eiint323,
    /* CAN8 error interrupt; */
    (void *)eiint324,
    /* CAN8 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint325,
    /* CAN8 transmit interrupt; */
    (void *)eiint326,
    /* CAN9 error interrupt; */
    (void *)eiint327,
    /* CAN9 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint328,
    /* CAN9 transmit interrupt; */
    (void *)eiint329,
    /* CAN10 error interrupt; */
    (void *)eiint330,
    /* CAN10 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint331,
    /* CAN10 transmit interrupt; */
    (void *)eiint332,
    /* CAN11 error interrupt; */
    (void *)eiint333,
    /* CAN11 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint334,
    /* CAN11 transmit interrupt; */
    (void *)eiint335,
    /* CAN12 error interrupt; */
    (void *)eiint336,
    /* CAN12 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint337,
    /* CAN12 transmit interrupt; */
    (void *)eiint338,
    /* CAN13 error interrupt; */
    (void *)eiint339,
    /* CAN13 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint340,
    /* CAN13 transmit interrupt; */
    (void *)eiint341,
    /* CAN14 error interrupt; */
    (void *)eiint342,
    /* CAN14 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint343,
    /* CAN14 transmit interrupt; */
    (void *)eiint344,
    /* CAN15 error interrupt; */
    (void *)eiint345,
    /* CAN15 transmit/receive FIFO receive completion interrupt; */
    (void *)eiint346,
    /* CAN15 transmit interrupt; */
    (void *)eiint347,
    /* SCI30 Receive error; */
    (void *)eiint348,
    /* SCI30 Receive data full; */
    (void *)eiint349,
    /* SCI30 Transmit data empty; */
    (void *)eiint350,
    /* SCI30 End of transmission; */
    (void *)eiint351,
    /* SCI31 Receive error; */
    (void *)eiint352,
    /* SCI31 Receive data full; */
    (void *)eiint353,
    /* SCI31 Transmit data empty; */
    (void *)eiint354,
    /* SCI31 End of transmission; */
    (void *)eiint355,
    /* SCI32 Receive error; */
    (void *)eiint356,
    /* SCI32 Receive data full; */
    (void *)eiint357,
    /* SCI32 Transmit data empty; */
    (void *)eiint358,
    /* SCI32 End of transmission; */
    (void *)eiint359,
    /* TAUJ0 Channel 0 interrupt; */
    (void *)eiint360,
    /* TAUJ0 Channel 1 interrupt; */
    (void *)eiint361,
    /* TAUJ0 Channel 2 interrupt; */
    (void *)eiint362,
    /* TAUJ0 Channel 3 interrupt; */
    (void *)eiint363,
    /* TAUJ1 Channel 0 interrupt; */
    (void *)eiint364,
    /* TAUJ1 Channel 1 interrupt; */
    (void *)eiint365,
    /* TAUJ1 Channel 2 interrupt; */
    (void *)eiint366,
    /* TAUJ1 Channel 3 interrupt; */
    (void *)eiint367,
    /* TAUJ2 Channel 0 interrupt; */
    (void *)eiint368,
    /* TAUJ2 Channel 1 interrupt; */
    (void *)eiint369,
    /* TAUJ2 Channel 2 interrupt; */
    (void *)eiint370,
    /* TAUJ2 Channel 3 interrupt; */
    (void *)eiint371,
    /* TAUJ3 Channel 0 interrupt; */
    (void *)eiint372,
    /* TAUJ3 Channel 1 interrupt; */
    (void *)eiint373,
    /* TAUJ3 Channel 2 interrupt; */
    (void *)eiint374,
    /* TAUJ3 Channel 3 interrupt; */
    (void *)eiint375,
    /* TAUD0 Channel 1 interrupt; */
    (void *)eiint376,
    /* TAUD0 Channel 3 interrupt; */
    (void *)eiint377,
    /* TAUD0 Channel 5 interrupt; */
    (void *)eiint378,
    /* TAUD0 Channel 7 interrupt; */
    (void *)eiint379,
    /* TAUD0 Channel 9 interrupt; */
    (void *)eiint380,
    /* TAUD0 Channel 11 interrupt; */
    (void *)eiint381,
    /* TAUD0 Channel 13 interrupt; */
    (void *)eiint382,
    /* TAUD0 Channel 15 interrupt; */
    (void *)eiint383,
    /* TAUD1 Channel 0 interrupt; */
    (void *)eiint384,
    /* TAUD1 Channel 1 interrupt; */
    (void *)eiint385,
    /* TAUD1 Channel 2 interrupt; */
    (void *)eiint386,
    /* TAUD1 Channel 3 interrupt; */
    (void *)eiint387,
    /* TAUD1 Channel 4 interrupt; */
    (void *)eiint388,
    /* TAUD1 Channel 5 interrupt; */
    (void *)eiint389,
    /* TAUD1 Channel 6 interrupt; */
    (void *)eiint390,
    /* TAUD1 Channel 7 interrupt; */
    (void *)eiint391,
    /* TAUD1 Channel 8 interrupt; */
    (void *)eiint392,
    /* TAUD1 Channel 9 interrupt; */
    (void *)eiint393,
    /* TAUD1 Channel 10 interrupt; */
    (void *)eiint394,
    /* TAUD1 Channel 11 interrupt; */
    (void *)eiint395,
    /* TAUD1 Channel 12 interrupt; */
    (void *)eiint396,
    /* TAUD1 Channel 13 interrupt; */
    (void *)eiint397,
    /* TAUD1 Channel 14 interrupt; */
    (void *)eiint398,
    /* TAUD1 Channel 15 interrupt; */
    (void *)eiint399,
    /* TAUD2 Channel 0 interrupt; */
    (void *)eiint400,
    /* TAUD2 Channel 1 interrupt; */
    (void *)eiint401,
    /* TAUD2 Channel 2 interrupt; */
    (void *)eiint402,
    /* TAUD2 Channel 3 interrupt; */
    (void *)eiint403,
    /* TAUD2 Channel 4 interrupt; */
    (void *)eiint404,
    /* TAUD2 Channel 5 interrupt; */
    (void *)eiint405,
    /* TAUD2 Channel 6 interrupt; */
    (void *)eiint406,
    /* TAUD2 Channel 7 interrupt; */
    (void *)eiint407,
    /* TAUD2 Channel 8 interrupt; */
    (void *)eiint408,
    /* TAUD2 Channel 9 interrupt; */
    (void *)eiint409,
    /* TAUD2 Channel 10 interrupt; */
    (void *)eiint410,
    /* TAUD2 Channel 11 interrupt; */
    (void *)eiint411,
    /* TAUD2 Channel 12 interrupt; */
    (void *)eiint412,
    /* TAUD2 Channel 13 interrupt; */
    (void *)eiint413,
    /* TAUD2 Channel 14 interrupt; */
    (void *)eiint414,
    /* TAUD2 Channel 15 interrupt; */
    (void *)eiint415,
    /* RLIN30 interrupt; */
    (void *)eiint416,
    /* RLIN30 transmit interrupt; */
    (void *)r_Config_UART0_interrupt_send,
    /* RLIN30 receive completion interrupt; */
    (void *)r_Config_UART0_interrupt_receive,
    /* RLIN30 status interrupt; */
    (void *)r_Config_UART0_interrupt_error,
    /* RLIN31 interrupt; */
    (void *)eiint420,
    /* RLIN31 transmit interrupt; */
    (void *)r_Config_UART1_interrupt_send,
    /* RLIN31 receive completion interrupt; */
    (void *)r_Config_UART1_interrupt_receive,
    /* RLIN31 status interrupt; */
    (void *)r_Config_UART1_interrupt_error,
    /* RLIN32 interrupt; */
    (void *)eiint424,
    /* RLIN32 transmit interrupt; */
    (void *)eiint425,
    /* RLIN32 receive completion interrupt; */
    (void *)eiint426,
    /* RLIN32 status interrupt; */
    (void *)eiint427,
    /* RLIN33 interrupt; */
    (void *)eiint428,
    /* RLIN33 transmit interrupt; */
    (void *)eiint429,
    /* RLIN33 receive completion interrupt; */
    (void *)eiint430,
    /* RLIN33 status interrupt; */
    (void *)eiint431,
    /* RLIN34 interrupt; */
    (void *)eiint432,
    /* RLIN34 transmit interrupt; */
    (void *)eiint433,
    /* RLIN34 receive completion interrupt; */
    (void *)eiint434,
    /* RLIN34 status interrupt; */
    (void *)eiint435,
    /* RLIN35 interrupt; */
    (void *)eiint436,
    /* RLIN35 transmit interrupt; */
    (void *)eiint437,
    /* RLIN35 receive completion interrupt; */
    (void *)eiint438,
    /* RLIN35 status interrupt; */
    (void *)eiint439,
    /* RLIN36 interrupt; */
    (void *)eiint440,
    /* RLIN36 transmit interrupt; */
    (void *)eiint441,
    /* RLIN36 receive completion interrupt; */
    (void *)eiint442,
    /* RLIN36 status interrupt; */
    (void *)eiint443,
    /* RLIN37 interrupt; */
    (void *)eiint444,
    /* RLIN37 transmit interrupt; */
    (void *)eiint445,
    /* RLIN37 receive completion interrupt; */
    (void *)eiint446,
    /* RLIN37 status interrupt; */
    (void *)eiint447,
    /* RLIN38 interrupt; */
    (void *)eiint448,
    /* RLIN38 transmit interrupt; */
    (void *)eiint449,
    /* RLIN38 receive completion interrupt; */
    (void *)eiint450,
    /* RLIN38 status interrupt; */
    (void *)eiint451,
    /* RLIN39 interrupt; */
    (void *)eiint452,
    /* RLIN39 transmit interrupt; */
    (void *)eiint453,
    /* RLIN39 receive completion interrupt; */
    (void *)eiint454,
    /* RLIN39 status interrupt; */
    (void *)eiint455,
    /* RLIN310 interrupt; */
    (void *)eiint456,
    /* RLIN310 transmit interrupt; */
    (void *)eiint457,
    /* RLIN310 receive completion interrupt; */
    (void *)eiint458,
    /* RLIN310 status interrupt; */
    (void *)eiint459,
    /* RLIN311 interrupt; */
    (void *)eiint460,
    /* RLIN311 transmit interrupt; */
    (void *)eiint461,
    /* RLIN311 receive completion interrupt; */
    (void *)eiint462,
    /* RLIN311 status interrupt; */
    (void *)eiint463,
    /* RLIN312 interrupt; */
    (void *)eiint464,
    /* RLIN312 transmit interrupt; */
    (void *)eiint465,
    /* RLIN312 receive completion interrupt; */
    (void *)eiint466,
    /* RLIN312 status interrupt; */
    (void *)eiint467,
    /* RLIN313 interrupt; */
    (void *)eiint468,
    /* RLIN313 transmit interrupt; */
    (void *)eiint469,
    /* RLIN313 receive completion interrupt; */
    (void *)eiint470,
    /* RLIN313 status interrupt; */
    (void *)eiint471,
    /* RLIN314 interrupt; */
    (void *)eiint472,
    /* RLIN314 transmit interrupt; */
    (void *)eiint473,
    /* RLIN314 receive completion interrupt; */
    (void *)eiint474,
    /* RLIN314 status interrupt; */
    (void *)eiint475,
    /* RLIN315 interrupt; */
    (void *)eiint476,
    /* RLIN315 transmit interrupt; */
    (void *)eiint477,
    /* RLIN315 receive completion interrupt; */
    (void *)eiint478,
    /* RLIN315 status interrupt; */
    (void *)eiint479,
    /* RLIN316 interrupt; */
    (void *)eiint480,
    /* RLIN316 transmit interrupt; */
    (void *)eiint481,
    /* RLIN316 receive completion interrupt; */
    (void *)eiint482,
    /* RLIN316 status interrupt; */
    (void *)eiint483,
    /* RLIN317 interrupt; */
    (void *)eiint484,
    /* RLIN317 transmit interrupt; */
    (void *)eiint485,
    /* RLIN317 receive completion interrupt; */
    (void *)eiint486,
    /* RLIN317 status interrupt; */
    (void *)eiint487,
    /* RLIN318 interrupt; */
    (void *)eiint488,
    /* RLIN318 transmit interrupt; */
    (void *)eiint489,
    /* RLIN318 receive completion interrupt; */
    (void *)eiint490,
    /* RLIN318 status interrupt; */
    (void *)eiint491,
    /* RLIN319 interrupt; */
    (void *)eiint492,
    /* RLIN319 transmit interrupt; */
    (void *)eiint493,
    /* RLIN319 receive completion interrupt; */
    (void *)eiint494,
    /* RLIN319 status interrupt; */
    (void *)eiint495,
    /* RLIN320 interrupt; */
    (void *)eiint496,
    /* RLIN320 transmit interrupt; */
    (void *)eiint497,
    /* RLIN320 receive completion interrupt; */
    (void *)eiint498,
    /* RLIN320 status interrupt; */
    (void *)eiint499,
    /* RLIN321 interrupt; */
    (void *)eiint500,
    /* RLIN321 transmit interrupt; */
    (void *)eiint501,
    /* RLIN321 receive completion interrupt; */
    (void *)eiint502,
    /* RLIN321 status interrupt; */
    (void *)eiint503,
    /* RLIN320 interrupt; */
    (void *)eiint504,
    /* RLIN320 transmit interrupt; */
    (void *)eiint505,
    /* RLIN320 receive completion interrupt; */
    (void *)eiint506,
    /* RLIN320 status interrupt; */
    (void *)eiint507,
    /* RLIN323 interrupt; */
    (void *)eiint508,
    /* RLIN323 transmit interrupt; */
    (void *)eiint509,
    /* RLIN323 receive completion interrupt; */
    (void *)eiint510,
    /* RLIN323 status interrupt; */
    (void *)eiint511,
    /* RSENT0 status interrupt; */
    (void *)eiint512,
    /* RSENT0 receive interrupt; */
    (void *)eiint513,
    /* RSENT1 status interrupt; */
    (void *)eiint514,
    /* RSENT1 receive interrupt; */
    (void *)eiint515,
    /* RSENT2 status interrupt; */
    (void *)eiint516,
    /* RSENT2 receive interrupt; */
    (void *)eiint517,
    /* RSENT3 status interrupt; */
    (void *)eiint518,
    /* RSENT3 receive interrupt; */
    (void *)eiint519,
    /* RSENT4 status interrupt; */
    (void *)eiint520,
    /* RSENT4 receive interrupt; */
    (void *)eiint521,
    /* RSENT5 status interrupt; */
    (void *)eiint522,
    /* RSENT5 receive interrupt; */
    (void *)eiint523,
    /* RSENT6 status interrupt; */
    (void *)eiint524,
    /* RSENT6 receive interrupt; */
    (void *)eiint525,
    /* RSENT7 status interrupt; */
    (void *)eiint526,
    /* RSENT7 receive interrupt; */
    (void *)eiint527,
    /* TPBA0 Period match detection interrupt; */
    (void *)eiint528,
    /* TPBA0 Duty match detection interrupt; */
    (void *)eiint529,
    /* TPBA0 Pattern number matching detection interrupt; */
    (void *)eiint530,
    /* TPBA1 Period match detection interrupt; */
    (void *)eiint531,
    /* TPBA1 Duty match detection interrupt; */
    (void *)eiint532,
    /* TPBA1 Pattern number matching detection interrupt; */
    (void *)eiint533,
    /* ENCA0 overflow interrupt; */
    (void *)eiint534,
    /* ENCA0 underflow interrupt; */
    (void *)eiint535,
    /* ENCA0 capture/compare match interrupt 0; */
    (void *)eiint536,
    /* ENCA0 capture/compare match interrupt 1; */
    (void *)eiint537,
    /* ENCA0 encoder clear interrupt; */
    (void *)eiint538,
    /* ENCA1 overflow interrupt; */
    (void *)eiint539,
    /* ENCA1 underflow interrupt; */
    (void *)eiint540,
    /* ENCA1 capture/compare match interrupt 0; */
    (void *)eiint541,
    /* ENCA1 capture/compare match interrupt 1; */
    (void *)eiint542,
    /* ENCA1 encoder clear interrupt; */
    (void *)eiint543,
    /* External interrupt 0; */
    (void *)eiint544,
    /* External interrupt 1; */
    (void *)eiint545,
    /* External interrupt 2; */
    (void *)eiint546,
    /* External interrupt 3; */
    (void *)eiint547,
    /* External interrupt 4; */
    (void *)eiint548,
    /* External interrupt 5; */
    (void *)eiint549,
    /* External interrupt 6; */
    (void *)eiint550,
    /* External interrupt 7; */
    (void *)eiint551,
    /* External interrupt 8; */
    (void *)eiint552,
    /* External interrupt 9; */
    (void *)eiint553,
    /* External interrupt 10; */
    (void *)eiint554,
    /* External interrupt 11; */
    (void *)eiint555,
    /* External interrupt 12; */
    (void *)eiint556,
    /* External interrupt 13; */
    (void *)eiint557,
    /* External interrupt 14; */
    (void *)eiint558,
    /* External interrupt 15; */
    (void *)eiint559,
    /* External interrupt 16; */
    (void *)eiint560,
    /* External interrupt 17; */
    (void *)eiint561,
    /* External interrupt 18; */
    (void *)eiint562,
    /* External interrupt 19; */
    (void *)eiint563,
    /* External interrupt 20; */
    (void *)eiint564,
    /* External interrupt 21; */
    (void *)eiint565,
    /* External interrupt 22; */
    (void *)eiint566,
    /* External interrupt 23; */
    (void *)eiint567,
    /* External interrupt 24; */
    (void *)eiint568,
    /* External interrupt 25; */
    (void *)eiint569,
    /* External interrupt 26; */
    (void *)eiint570,
    /* External interrupt 27; */
    (void *)eiint571,
    /* External interrupt 28; */
    (void *)eiint572,
    /* External interrupt 29; */
    (void *)eiint573,
    /* External interrupt 30; */
    (void *)eiint574,
    /* External interrupt 31; */
    (void *)eiint575,
    /* External interrupt 32; */
    (void *)eiint576,
    /* External interrupt 33; */
    (void *)eiint577,
    /* External interrupt 34; */
    (void *)eiint578,
    /* External interrupt 35; */
    (void *)eiint579,
    /* External interrupt 36; */
    (void *)eiint580,
    /* External interrupt 37; */
    (void *)eiint581,
    /* External interrupt 38; */
    (void *)eiint582,
    /* External interrupt 39; */
    (void *)eiint583,
    /* PSI5S0 Communication interrupt for CH0; */
    (void *)eiint584,
    /* PSI5S0 Communication interrupt for CH1; */
    (void *)eiint585,
    /* PSI5S0 Communication interrupt for CH2; */
    (void *)eiint586,
    /* PSI5S0 Communication interrupt for CH3; */
    (void *)eiint587,
    /* PSI5S0 Communication interrupt for CH4; */
    (void *)eiint588,
    /* PSI5S0 Communication interrupt for CH5; */
    (void *)eiint589,
    /* PSI5S0 Communication interrupt for CH6; */
    (void *)eiint590,
    /* PSI5S0 Communication interrupt for CH7; */
    (void *)eiint591,
    /* PSI5S1 Communication interrupt for CH0; */
    (void *)eiint592,
    /* PSI5S1 Communication interrupt for CH1; */
    (void *)eiint593,
    /* PSI5S1 Communication interrupt for CH2; */
    (void *)eiint594,
    /* PSI5S1 Communication interrupt for CH3; */
    (void *)eiint595,
    /* PSI5S1 Communication interrupt for CH4; */
    (void *)eiint596,
    /* PSI5S1 Communication interrupt for CH5; */
    (void *)eiint597,
    /* PSI5S1 Communication interrupt for CH6; */
    (void *)eiint598,
    /* PSI5S1 Communication interrupt for CH7; */
    (void *)eiint599,
    /* PSI50 status interrupt; */
    (void *)eiint600,
    /* PSI50 receive interrupt; */
    (void *)eiint601,
    /* PSI50 transfer interrupt; */
    (void *)eiint602,
    /* PSI51 status interrupt; */
    (void *)eiint603,
    /* PSI51 receive interrupt; */
    (void *)eiint604,
    /* PSI51 transfer interrupt; */
    (void *)eiint605,
    /* PSI52 status interrupt; */
    (void *)eiint606,
    /* PSI52 receive interrupt; */
    (void *)eiint607,
    /* PSI52 transfer interrupt; */
    (void *)eiint608,
    /* PSI53 status interrupt; */
    (void *)eiint609,
    /* PSI53 receive interrupt; */
    (void *)eiint610,
    /* PSI53 transfer interrupt; */
    (void *)eiint611,
    /* RHSIF0 Transmit complete interrupt; */
    (void *)eiint612,
    /* RHSIF0 Transmit exception interrupt; */
    (void *)eiint613,
    /* RHSIF0 Receive complete interrupt; */
    (void *)eiint614,
    /* RHSIF0 Receive exception interrupt; */
    (void *)eiint615,
    /* RHSIF0 ICLC receive interrupt; */
    (void *)eiint616,
    /* RHSIF0 Channel 0 interrupt; */
    (void *)eiint617,
    /* RHSIF0 Channel 1 interrupt; */
    (void *)eiint618,
    /* RHSIF0 Channel 2 interrupt; */
    (void *)eiint619,
    /* RHSIF0 Channel 3 interrupt; */
    (void *)eiint620,
    /* RHSIF0 Stream interrupt; */
    (void *)eiint621,
    /* RHSIF0 Error interrupt / Security interrupt; */
    (void *)eiint622,
    /* FLXA0 line 0 interrupt; */
    (void *)eiint623,
    /* FLXA0 line 1 interrupt; */
    (void *)eiint624,
    /* FLXA0 Timer 0 interrupt; */
    (void *)eiint625,
    /* FLXA0 Timer 1 interrupt; */
    (void *)eiint626,
    /* FLXA0 Timer 2 interrupt; */
    (void *)eiint627,
    /* FLXA0 FIFO data available (FIFO is not empty) interrupt; */
    (void *)eiint628,
    /* FLXA0 FIFO transfer warning interrupt; */
    (void *)eiint629,
    /* FLXA0 Output transfer warning interrupt; */
    (void *)eiint630,
    /* FLXA0 Output transfer done interrupt; */
    (void *)eiint631,
    /* FLXA0 Input queue full interrupt; */
    (void *)eiint632,
    /* FLXA0 Input queue empty interrupt; */
    (void *)eiint633,
    /* FLXA1 line 0 interrupt; */
    (void *)eiint634,
    /* FLXA1 line 1 interrupt; */
    (void *)eiint635,
    /* FLXA1 Timer 0 interrupt; */
    (void *)eiint636,
    /* FLXA1 Timer 1 interrupt; */
    (void *)eiint637,
    /* FLXA1 Timer 2 interrupt; */
    (void *)eiint638,
    /* FLXA1 FIFO data available (FIFO is not empty) interrupt; */
    (void *)eiint639,
    /* FLXA1 FIFO transfer warning interrupt; */
    (void *)eiint640,
    /* FLXA1 Output transfer warning interrupt; */
    (void *)eiint641,
    /* FLXA1 Output transfer done interrupt; */
    (void *)eiint642,
    /* FLXA1 Input queue full interrupt; */
    (void *)eiint643,
    /* FLXA1 Input queue empty interrupt; */
    (void *)eiint644,
    /* ETNB0 Data related interrupt; */
    (void *)eiint645,
    /* ETNB0 Error related interrupt; */
    (void *)eiint646,
    /* ETNB0 Management related interrupt; */
    (void *)eiint647,
    /* ETNB0 MAC interrupt; */
    (void *)eiint648,
    /* ETNB1 Data related interrupt; */
    (void *)eiint649,
    /* ETNB1 Error related interrupt; */
    (void *)eiint650,
    /* ETNB1 Management related interrupt; */
    (void *)eiint651,
    /* ETNB1 MAC interrupt; */
    (void *)eiint652,
    /* ETNB1 SGMII interrupt; */
    (void *)eiint653,
    /* RTCA0 1-second interval interrupt; */
    (void *)eiint654,
    /* RTCA0 Alarm interrupt; */
    (void *)eiint655,
    /* RTCA0 Fixed interval interrupt; */
    (void *)eiint656,
    /* OTS0 Error interrupt; */
    (void *)eiint657,
    /* OTS0 Temperature measurement end interrupt; */
    (void *)eiint658,
    /* OTS0 Temperature rise/drop interrupt; */
    (void *)eiint659,
    /* PWGC unit 0 of group 0 interrupt; */
    (void *)eiint660,
    /* PWGC unit 0 of group 1 interrupt; */
    (void *)eiint661,
    /* PWGC unit 0 of group 2 interrupt; */
    (void *)eiint662,
    /* PWGC unit 1 of group 0 interrupt; */
    (void *)eiint663,
    /* PWGC unit 1 of group 1 interrupt; */
    (void *)eiint664,
    /* PWGC unit 1 of group 2 interrupt; */
    (void *)eiint665,
    /* PWGC unit 2 of group 0 interrupt; */
    (void *)eiint666,
    /* PWGC unit 2 of group 1 interrupt; */
    (void *)eiint667,
    /* PWGC unit 2 of group 2 interrupt; */
    (void *)eiint668,
    /* PWGC unit 3 of group 0 interrupt; */
    (void *)eiint669,
    /* PWGC unit 3 of group 1 interrupt; */
    (void *)eiint670,
    /* PWGC unit 3 of group 2 interrupt; */
    (void *)eiint671,
    /* PWSD queue full interrupt; */
    (void *)eiint672,
    /* CXP10 transfer interrupt; */
    (void *)eiint673,
    /* CXP10 receive interrupt; */
    (void *)eiint674,
    /* CXP10 status interrupt; */
    (void *)eiint675,
    /* CXP11 transfer interrupt; */
    (void *)eiint676,
    /* CXP11 receive interrupt; */
    (void *)eiint677,
    /* CXP11 status interrupt; */
    (void *)eiint678,
    /* CXP12 transfer interrupt; */
    (void *)eiint679,
    /* CXP12 receive interrupt; */
    (void *)eiint680,
    /* CXP12 status interrupt; */
    (void *)eiint681,
    /* CXP13 transfer interrupt; */
    (void *)eiint682,
    /* CXP13 receive interrupt; */
    (void *)eiint683,
    /* CXP13 status interrupt; */
    (void *)eiint684,
    /* RIIC0 communication error or event generation interrupt; */
    (void *)eiint685,
    /* RIIC0 receive end interrupt; */
    (void *)eiint686,
    /* RIIC0 transmit data empty interrupt; */
    (void *)eiint687,
    /* RIIC0 transmit end interrupt; */
    (void *)eiint688,
    /* RIIC1 communication error or event generation interrupt; */
    (void *)eiint689,
    /* RIIC1 receive end interrupt; */
    (void *)eiint690,
    /* RIIC1 transmit data empty interrupt; */
    (void *)eiint691,
    /* RIIC1 transmit end interrupt; */
    (void *)eiint692,
    /* LPS0 Port polling end interrupt; */
    (void *)eiint693,
    /* LPS0 Digital port error interrupt; */
    (void *)eiint694,
    /* Reserved; */
    (void *)eiint695,
    /* MMCA0 interrupt; */
    (void *)eiint696,
    /* interrupt for degradation; */
    (void *)eiint697,
    /* ICUMHA fatal error notification; */
    (void *)eiint698,
    /* Edge detection of RLIN30 received data; */
    (void *)eiint699,
    /* Edge detection of RLIN31 received data; */
    (void *)eiint700,
    /* Edge detection of RSCFD0 received data; */
    (void *)eiint701,
    /* Edge detection of RSCFD1 received data; */
    (void *)eiint702,
    /* Edge detection of FLXA0 ch A received data; */
    (void *)eiint703,
    /* Edge detection of FLXA1 ch A received data; */
    (void *)eiint704,
    /* WDTBA interrupt; */
    (void *)eiint705,
    /* Dedicated interrupt for on-chip debug function; */
    (void *)eiint706,
    /* Reserved; */
    (void *)eiint707,
    /* Reserved; */
    (void *)eiint708,
    /* Reserved; */
    (void *)eiint709,
    /* Reserved; */
    (void *)eiint710,
    /* Reserved; */
    (void *)eiint711,
    /* Reserved; */
    (void *)eiint712,
    /* Reserved; */
    (void *)eiint713,
    /* Reserved; */
    (void *)eiint714,
    /* Emergency Hi-Z input 0; */
    (void *)eiint715,
    /* Emergency Hi-Z input 1; */
    (void *)eiint716,
    /* Reserved; */
    (void *)eiint717,
    /* Reserved; */
    (void *)eiint718,
    /* Reserved; */
    (void *)eiint719,
    /* Reserved; */
    (void *)eiint720,
    /* Reserved; */
    (void *)eiint721,
    /* Reserved; */
    (void *)eiint722,
    /* Reserved; */
    (void *)eiint723,
    /* Reserved; */
    (void *)eiint724,
    /* Reserved; */
    (void *)eiint725,
    /* Reserved; */
    (void *)eiint726,
    /* Reserved; */
    (void *)eiint727,
    /* Reserved; */
    (void *)eiint728,
    /* Reserved; */
    (void *)eiint729,
    /* Reserved; */
    (void *)eiint730,
    /* Reserved; */
    (void *)eiint731,
    /* Reserved; */
    (void *)eiint732,
    /* Reserved; */
    (void *)eiint733,
    /* Reserved; */
    (void *)eiint734,
    /* Reserved; */
    (void *)eiint735,
    /* Reserved; */
    (void *)eiint736,
    /* Reserved; */
    (void *)eiint737,
    /* Reserved; */
    (void *)eiint738,
    /* Reserved; */
    (void *)eiint739,
    /* Reserved; */
    (void *)eiint740,
    /* Reserved; */
    (void *)eiint741,
    /* Reserved; */
    (void *)eiint742,
    /* Reserved; */
    (void *)eiint743,
    /* Reserved; */
    (void *)eiint744,
    /* Reserved; */
    (void *)eiint745,
    /* Reserved; */
    (void *)eiint746,
    /* Reserved; */
    (void *)eiint747,
    /* Reserved; */
    (void *)eiint748,
    /* Reserved; */
    (void *)eiint749,
    /* Reserved; */
    (void *)eiint750,
    /* Reserved; */
    (void *)eiint751,
    /* Reserved; */
    (void *)eiint752,
    /* Reserved; */
    (void *)eiint753,
    /* Reserved; */
    (void *)eiint754,
    /* Reserved; */
    (void *)eiint755,
    /* Reserved; */
    (void *)eiint756,
    /* Reserved; */
    (void *)eiint757,
    /* Reserved; */
    (void *)eiint758,
    /* Reserved; */
    (void *)eiint759,
    /* Reserved; */
    (void *)eiint760,
    /* Reserved; */
    (void *)eiint761,
    /* Reserved; */
    (void *)eiint762,
    /* Reserved; */
    (void *)eiint763,
    /* Reserved; */
    (void *)eiint764,
    /* Reserved; */
    (void *)eiint765,
    /* Reserved; */
    (void *)eiint766,
    /* Reserved; */
    (void *)eiint767,
};

#pragma section
