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
* File Name        : Config_SDMAC11.c
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
#include "r_cg_dma_common.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
extern volatile uint32_t g_cg_sync_read;
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_SDMAC11_Create
* Description  : This function initializes DMAC01.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_SDMAC11_Create(void)
{
    /* Disable DMAC01 channel */
    SDMAC0.DMA0CHCR_1.UINT16 &= (~_DMAC_TRANSFER_ENABLE);
    /* DMAC01 global setting */
    SDMAC0.DMA0OR.UINT16 = _DMAC_PRIORITY_FIXED | _DMAC_MASTER_ENABLE;
    SDMAC0.DMA0CHPRI.UINT32 = _DMAC0_CHANNEL_PRORITY_COUNT;
    /* Transfer request group selection setting */
    DMATRGSEL.DMACSEL0_4.UINT32 |= _DMAC_REQUEST_16M_0_GRP0;
    /* Overall DMAC01 operation setting */
    SDMAC0.DMA0CM_1.UINT32 = _DMAC01_SPID_Value | _DMAC_UM_SUPERVISOR;
    /* DMAC01 channel setting */
    SDMAC0.DMA0SAR_1.UINT32 = _DMAC01_SOURCE_ADDRESS;
    SDMAC0.DMA0DAR_1.UINT32 = _DMAC01_DESTINATION_ADDRESS;
    SDMAC0.DMA0TSR_1.UINT32 = _DMAC01_TRANSFER_SIZE;
    SDMAC0.DMA0TMR_1.UINT32 = _DMAC_TRANSFER_NORMAL_MODE | _DMAC_REQUEST_PRIORITY_DISABLE | _DMAC_HW_REQUEST | 
                              _DMAC_DESTINATION_ADDRESS_INCREASED | _DMAC_SOURCE_ADDRESS_FIXED | 
                              _DMAC_DESTINATION_TRANSFER_4 | _DMAC_SOURCE_TRANSFER_1;
    SDMAC0.DMA0RS_1.UINT32 = _DMAC01_TRANSFER_COUNT | _DMAC_TRANSFER_SIZE_STS_TC | _DMAC_HW_PRE_LOAD_DISABLE | 
                             _DMAC_GRP0_REQUEST_INTRLIN31UR1;
    SDMAC0.DMA0BUFCR_1.UINT32 = _DMAC01_UPPER_LIMIT_BUFFER;
    /* DMAC01 scatter-gather transfer setting */
    SDMAC0.DMA0SGCR_1.UINT32 = _DMAC_SCATTER_DISABLE | _DMAC_GATHER_DISABLE;
    /* DMAC01 status clear */
    SDMAC0.DMA0CHFCR_1.UINT32 = _DMAC_HW_OVERFLOW_CLEAR | _DMAC_HW_TRANSFER_REQUEST_CLEAR | 
                                _DMAC_DESCRIPTOR_ENABLE_CLEAR | _DMAC_ADDRESS_ERROR_CLEAR | 
                                _DMAC_DESCRIPTOR_STEP_END_CLEAR | _DMAC_TRANSFER_END_CLEAR | _DMAC_ENABLE_CLEAR;
    /* DMAC01 channel operation enable */
    SDMAC0.DMA0CHCR_1.UINT16 = _DMAC_DESCRIPTOR_DISABLE | _DMAC_ADDRESS_ERR_INT_ENABLE | 
                               _DMAC_CHANNEL_ADDRESS_ERR_INT_ENABLE | _DMAC_TRANSFER_END_INT_ENABLE;
    /* Synchronization processing */
    g_cg_sync_read = SDMAC0.DMA0CHCR_1.UINT16;
    __syncp();

    R_Config_SDMAC11_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: r_Config_SDMAC11_enable_pe0_interrupt
* Description  : This function enables DMAC01 interrupts for PE0.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_SDMAC11_enable_pe0_interrupt(void)
{
    /* Clear step/transfer end interrupt (INTSDMAC0CH1) request and enable operation */
    INTC2.EIC48.BIT.EIRF48 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC48.BIT.EIMK48 = _INT_PROCESSING_ENABLED;
}

/***********************************************************************************************************************
* Function Name: r_Config_SDMAC11_disable_pe0_interrupt
* Description  : This function disables DMAC01 interrupts for PE0.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_SDMAC11_disable_pe0_interrupt(void)
{
    /* Disable step/transfer end interrupt (INTSDMAC0CH1) operation and clear request */
    INTC2.EIC48.BIT.EIMK48 = _INT_PROCESSING_DISABLED;
    INTC2.EIC48.BIT.EIRF48 = _INT_REQUEST_NOT_OCCUR;
}

/***********************************************************************************************************************
* Function Name: R_Config_SDMAC11_Start
* Description  : This function enables DMAC01 activation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_SDMAC11_Start(void)
{
    /* Clear DMAC01 interrupt request and enable operation */
    r_Config_SDMAC11_enable_pe0_interrupt();
    /* Enable DMAC01 operation */
    SDMAC0.DMA0CHCR_1.UINT16 |= _DMAC_TRANSFER_ENABLE;
}

/***********************************************************************************************************************
* Function Name: R_Config_SDMAC11_Stop
* Description  : This function disables DMAC01 activation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_SDMAC11_Stop(void)
{
    /* Disable DMAC01 operation */
    SDMAC0.DMA0CHFCR_1.UINT32 |= _DMAC_ENABLE_CLEAR;
    /* Disable DMAC01 interrupt operation and clear request */
    r_Config_SDMAC11_disable_pe0_interrupt();
    /* Synchronization processing */
    g_cg_sync_read = SDMAC0.DMA0CHCR_1.UINT16;
    __syncp();
}

/***********************************************************************************************************************
* Function Name: R_Config_SDMAC11_Suspend
* Description  : This function suspends DMAC01 channel operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_SDMAC11_Suspend(void)
{
    /* Suspend DMAC01 operation */
    SDMAC0.DMA0CHSTP_1.UINT16 = _DMAC_CHANNEL_SUSPEND;
}

/***********************************************************************************************************************
* Function Name: R_Config_SDMAC11_Resume
* Description  : This function resumes DMAC01 channel operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_SDMAC11_Resume(void)
{
    /* Resume DMAC01 operation */
    SDMAC0.DMA0CHSTP_1.UINT16 = _DMAC_CHANNEL_RESUME;
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
