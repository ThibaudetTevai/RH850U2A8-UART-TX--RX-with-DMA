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
* File Name        : r_cg_intc_PE0.c
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
void R_Interrupt_Initialize_ForPE(void)
{
    /* Set INTRLIN30UR0 setting */
    INTC2.EIC417.BIT.EIMK417 = _INT_PROCESSING_DISABLED;
    INTC2.EIC417.BIT.EIRF417 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC417.BIT.EITB417 = _INT_TABLE_VECTOR;
    INTC2.EIC417.UINT16 &= _INT_PRIORITY_LOWEST;
    INTC2.EIBD417.BIT.PEID = _INT_CPU_PE0;
    /* Set INTRLIN30UR1 setting */
    INTC2.EIC418.BIT.EIMK418 = _INT_PROCESSING_DISABLED;
    INTC2.EIC418.BIT.EIRF418 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC418.BIT.EITB418 = _INT_TABLE_VECTOR;
    INTC2.EIC418.UINT16 &= _INT_PRIORITY_LOWEST;
    INTC2.EIBD418.BIT.PEID = _INT_CPU_PE0;
    /* Set INTRLIN30UR2 setting */
    INTC2.EIC419.BIT.EIMK419 = _INT_PROCESSING_DISABLED;
    INTC2.EIC419.BIT.EIRF419 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC419.BIT.EITB419 = _INT_TABLE_VECTOR;
    INTC2.EIC419.UINT16 &= _INT_PRIORITY_LOWEST;
    INTC2.EIBD419.BIT.PEID = _INT_CPU_PE0;
    /* Set INTRLIN31UR0 setting */
    INTC2.EIC421.BIT.EIMK421 = _INT_PROCESSING_DISABLED;
    INTC2.EIC421.BIT.EIRF421 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC421.BIT.EITB421 = _INT_TABLE_VECTOR;
    INTC2.EIC421.UINT16 &= _INT_PRIORITY_LOWEST;
    INTC2.EIBD421.BIT.PEID = _INT_CPU_PE0;
    /* Set INTRLIN31UR1 setting */
    INTC2.EIC422.BIT.EIMK422 = _INT_PROCESSING_DISABLED;
    INTC2.EIC422.BIT.EIRF422 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC422.BIT.EITB422 = _INT_TABLE_VECTOR;
    INTC2.EIC422.UINT16 &= _INT_PRIORITY_LOWEST;
    INTC2.EIBD422.BIT.PEID = _INT_CPU_PE0;
    /* Set INTRLIN31UR2 setting */
    INTC2.EIC423.BIT.EIMK423 = _INT_PROCESSING_DISABLED;
    INTC2.EIC423.BIT.EIRF423 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC423.BIT.EITB423 = _INT_TABLE_VECTOR;
    INTC2.EIC423.UINT16 &= _INT_PRIORITY_LOWEST;
    INTC2.EIBD423.BIT.PEID = _INT_CPU_PE0;
    /* Set INTSDMAC0CH0 setting */
    INTC2.EIC47.BIT.EIMK47 = _INT_PROCESSING_DISABLED;
    INTC2.EIC47.BIT.EIRF47 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC47.BIT.EITB47 = _INT_TABLE_VECTOR;
    INTC2.EIC47.UINT16 &= _INT_PRIORITY_LEVEL4;
    INTC2.EIBD47.BIT.PEID = _INT_CPU_PE0;
    /* Set INTSDMAC0CH1 setting */
    INTC2.EIC48.BIT.EIMK48 = _INT_PROCESSING_DISABLED;
    INTC2.EIC48.BIT.EIRF48 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC48.BIT.EITB48 = _INT_TABLE_VECTOR;
    INTC2.EIC48.UINT16 &= _INT_PRIORITY_LEVEL3;
    INTC2.EIBD48.BIT.PEID = _INT_CPU_PE0;
    /* Set INTSDMACERR setting */
    INTC1_PE0.EIC29.BIT.EIMK29 = _INT_PROCESSING_DISABLED;
    INTC1_PE0.EIC29.BIT.EIRF29 = _INT_REQUEST_NOT_OCCUR;
    INTC1_PE0.EIC29.BIT.EITB29 = _INT_TABLE_VECTOR;
    INTC1_PE0.EIC29.UINT16 &= _INT_PRIORITY_LEVEL1;
}
