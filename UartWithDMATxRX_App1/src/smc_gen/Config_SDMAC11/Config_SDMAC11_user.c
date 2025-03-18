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
* File Name        : Config_SDMAC11_user.c
* Component Version: 1.7.0
* Device(s)        : R7F702301BEBBA
* Description      : This file implements device driver for Config_SDMAC11.
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
#include "Config_SDMAC11.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_SDMAC11_Create_UserInit
* Description  : This function adds user code after initializing DMAC01 module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_SDMAC11_Create_UserInit(void)
{
    /* Start user code for user init. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: R_Config_SDMAC11_Callback_PE0_Address_Error
* Description  : This function handles the INTSDMACERR interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_SDMAC11_Callback_PE0_Address_Error(void)
{
    /* Start user code for R_Config_SDMAC11_Callback_PE0_Address_Error. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_SDMAC11_end_interrupt
* Description  : This function handles the INTSDMAC0CH1 interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#pragma interrupt r_Config_SDMAC11_end_interrupt(enable=false, channel=48, fpu=true, callt=false)
void r_Config_SDMAC11_end_interrupt(void)
{
    /* Start user code for r_Config_SDMAC11_end_interrupt. Do not edit comment generated here */
    /* Start user code for r_Config_SDMAC01_end_interrupt. Do not edit comment generated here */

    D13  = 1;
    
    if(SDMAC0.DMA0CHFCR_1.BIT.CAEC)
    {
        D14 = 1;
    }
    
    if(SDMAC0.DMA0CHSTA_1.BIT.DRQ) 
    {
        SDMAC0.DMA0CHFCR_1.BIT.DRQC = 1;
        D9 = 1;
    }
    
    if(SDMAC0.DMA0CHSTA_1.BIT.OVF) 
    {
        SDMAC0.DMA0CHFCR_1.BIT.OVFC = 1;
        D10 = 1;
    }
    
    if(SDMAC0.DMA0CHSTA_1.BIT.BUSY) 
    {
        SDMAC0.DMA0CHFCR_1.BIT.TEC = 1;
        D12 = 1;
    }
    
    if(SDMAC0.DMA0CHSTA_1.BIT.CAE) 
    {
        SDMAC0.DMA0CHFCR_1.BIT.CAEC = 1; 
        D12 = 1;
    }
    
    if(SDMAC0.DMA0CHSTA_1.BIT.TE) 
    {
        SDMAC0.DMA0CHCR_1.BIT.DE = 0;
        SDMAC0.DMA0CHFCR_1.BIT.TEC = 1;        
        SDMAC0.DMA0TSR_1.UINT32 = _DMAC01_TRANSFER_SIZE;
        SDMAC0.DMA0CHCR_1.BIT.DE = 1;
        D11 = 1;
    }
    
    D9  = 0;
    D10 = 0;
    D11 = 0;
    D12 = 0;
    D13 = 0;
    /* End user code. Do not edit comment generated here */
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
