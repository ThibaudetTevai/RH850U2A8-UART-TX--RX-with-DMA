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
* File Name        : Config_UART0.c
* Component Version: 1.7.0
* Device(s)        : R7F702301BEBBA
* Description      : This file implements device driver for Config_UART0.
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
#include "Config_UART0.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
volatile uint8_t *  gp_uart0_tx_address;    /* uart0 transmit data address */
volatile uint16_t   g_uart0_tx_count;       /* uart0 transmit data number */
volatile uint8_t *  gp_uart0_rx_address;    /* uart0 receive data address */
volatile uint16_t   g_uart0_rx_count;       /* uart0 receive data number */
volatile uint16_t   g_uart0_rx_length;      /* uart0 receive data length */
extern volatile uint32_t g_cg_sync_read;
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_UART0_Create
* Description  : This function initializes the UART0 module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UART0_Create(void)
{
    /* Set LIN reset mode */
    RLN30.LCUC.UINT8 = _UART_LIN_RESET_MODE_CAUSED;
    /* Set UART0 setting */
    RLN30.LWBR.UINT8 = _UART_8_SAMPLING | _UART_PRESCALER_CLOCK_SELECT_8;
    RLN30.LBRP01.UINT16 = _UART0_BAUD_RATE_PRESCALER;
    RLN30.LMD.UINT8 = _UART_NOISE_FILTER_ENABLED | _UART_MODE_SELECT;
    RLN30.LEDE.UINT8 = _UART_FRAMING_ERROR_DETECTED | _UART_OVERRUN_ERROR_DETECTED;
    RLN30.LBFC.UINT8 = _UART_TRANSMISSION_NORMAL | _UART_RECEPTION_NORMAL | _UART_PARITY_PROHIBITED | 
                       _UART_STOP_BIT_1 | _UART_LSB | _UART_LENGTH_8;
    RLN30.LCUC.UINT8 = _UART_LIN_RESET_MODE_CANCELED;
    /* Synchronization processing */
    g_cg_sync_read = RLN30.LCUC.UINT8;
    __syncp();
    /* Set RLIN30RX pin */
    PORT0.PKCPROT = _WRITE_PROTECT_ENABLE;
    PORT0.PWE = SETBIT(10U);
    PORT0.PCR10_5.UINT32 = (PORT0.PCR10_5.UINT32 & _PCR_DEFAULT_VALUE) | _PCR_SET_PM;
    PORT0.PCR10_5.UINT32 |= _PCR_ALT_IN7;
    PORT0.PCR10_5.UINT32 |= _PCR_SET_PMC;
    PORT0.PWE = _PORT_WRITE_PROTECT_DISABLE;
    PORT0.PKCPROT = _WRITE_PROTECT_DISABLE;

    /* Set RLIN30TX pin */
    PORT0.PKCPROT = _WRITE_PROTECT_ENABLE;
    PORT0.PWE = SETBIT(10U);
    PORT0.PCR10_6.UINT32 = (PORT0.PCR10_6.UINT32 & _PCR_DEFAULT_VALUE) | _PCR_SET_PM;
    PORT0.PCR10_6.UINT32 &= _PCR_CLEAR_PDSC;
    PORT0.PCR10_6.UINT32 &= _PCR_CLEAR_PUCC;
    PORT0.PCR10_6.UINT32 |= _PCR_ALT_OUT2;
    PORT0.PCR10_6.UINT32 |= _PCR_SET_PMC;
    PORT0.PCR10_6.UINT32 &= _PCR_CLEAR_PM;
    PORT0.PCR10_6.UINT32 &= _PCR_ALT_OUT_SETTING;
    PORT0.PWE = _PORT_WRITE_PROTECT_DISABLE;
    PORT0.PKCPROT = _WRITE_PROTECT_DISABLE;

    R_Config_UART0_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: r_Config_UART0_enable_interrupt
* Description  : This function starts the UART0 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_UART0_enable_interrupt(void)
{
    /* Clear INTRLIN30UR0 interrupt request and enable operation */
    INTC2.EIC417.BIT.EIRF417 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC417.BIT.EIMK417 = _INT_PROCESSING_ENABLED;
    /* Clear INTRLIN30UR1 interrupt request and enable operation */
    INTC2.EIC418.BIT.EIRF418 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC418.BIT.EIMK418 = _INT_PROCESSING_ENABLED;
    /* Clear INTRLIN30UR2 interrupt request and enable operation */
    INTC2.EIC419.BIT.EIRF419 = _INT_REQUEST_NOT_OCCUR;
    INTC2.EIC419.BIT.EIMK419 = _INT_PROCESSING_ENABLED;
}

/***********************************************************************************************************************
* Function Name: r_Config_UART0_disable_interrupt
* Description  : This function stops the UART0 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_UART0_disable_interrupt(void)
{
    /* Disable INTRLIN30UR0 operation */
    INTC2.EIC417.BIT.EIMK417 = _INT_PROCESSING_DISABLED;
    /* Disable INTRLIN30UR1 operation */
    INTC2.EIC418.BIT.EIMK418 = _INT_PROCESSING_DISABLED;
    /* Disable INTRLIN30UR2 operation */
    INTC2.EIC419.BIT.EIMK419 = _INT_PROCESSING_DISABLED;
    /* Clear INTRLIN30UR0 request */
    INTC2.EIC417.BIT.EIRF417 = _INT_REQUEST_NOT_OCCUR;
    /* Clear INTRLIN30UR1 request */
    INTC2.EIC418.BIT.EIRF418 = _INT_REQUEST_NOT_OCCUR;
    /* Clear INTRLIN30UR2 request */
    INTC2.EIC419.BIT.EIRF419 = _INT_REQUEST_NOT_OCCUR;
}

/***********************************************************************************************************************
* Function Name: R_Config_UART0_Start
* Description  : This function starts the UART0 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UART0_Start(void)
{
    /* Clear UART0 interrupt request and enable operation */
    r_Config_UART0_enable_interrupt();
    /* Enable UART0 operation */
    RLN30.LUOER.UINT8 |= _UART_RECEPTION_ENABLED | _UART_TRANSMISSION_ENABLED;
}

/***********************************************************************************************************************
* Function Name: R_Config_UART0_Stop
* Description  : This function stops the UART0 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UART0_Stop(void)
{
    /* Disable UART0 operation */
    RLN30.LUOER.UINT8 &= (uint8_t) ~(_UART_RECEPTION_ENABLED | _UART_TRANSMISSION_ENABLED);
    /* Disable UART0 interrupt operation and clear request */
    r_Config_UART0_disable_interrupt();
    /* Synchronization processing */
    g_cg_sync_read = RLN30.LCUC.UINT8;
    __syncp();
}

/***********************************************************************************************************************
* Function Name: R_Config_UART0_Receive
* Description  : This function receives UART0 data.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
MD_STATUS R_Config_UART0_Receive(uint8_t * const rx_buf, uint16_t rx_num)
{
    MD_STATUS status = MD_OK;
    if (rx_num < 1U)
    {
        status = MD_ARGERROR;
    }
    else
    {
        if (( RLN30.LST.UINT8 & _UART_RECEPTION_OPERATED ) == 0U)
        {
            g_uart0_rx_count = 0U;
            g_uart0_rx_length = rx_num;
            gp_uart0_rx_address = rx_buf;
        }
        else
        {
            status = MD_ERROR;
        }
    }

    return (status);
}

/***********************************************************************************************************************
* Function Name: R_Config_UART0_Send
* Description  : This function sends UART0 data.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
MD_STATUS R_Config_UART0_Send(uint8_t * const tx_buf, uint16_t tx_num)
{
    MD_STATUS status = MD_OK;
    if (tx_num < 1U)
    {
        status = MD_ARGERROR;
    }
    else
    {
        gp_uart0_tx_address = tx_buf;
        g_uart0_tx_count = tx_num;
        if (( RLN30.LST.UINT8 & _UART_TRANSMISSION_OPERATED ) == 0U)
        {
            /* Clear INTRLIN30UR0 request and Disable operation */
            INTC2.EIC417.BIT.EIMK417 = _INT_PROCESSING_DISABLED;
            INTC2.EIC417.BIT.EIRF417 = _INT_REQUEST_NOT_OCCUR;
            RLN30.LUTDR.UINT16 = *gp_uart0_tx_address;
            gp_uart0_tx_address++;
            g_uart0_tx_count--;
            /* Clear INTRLIN30UR0 request and enable operation */
            INTC2.EIC417.BIT.EIRF417 = _INT_REQUEST_NOT_OCCUR;
            INTC2.EIC417.BIT.EIMK417 = _INT_PROCESSING_ENABLED;
        }
        else
        {
            status = MD_ERROR;
        }
    }
    return (status);
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
