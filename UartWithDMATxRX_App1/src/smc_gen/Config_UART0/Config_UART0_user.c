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
* File Name        : Config_UART0_user.c
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
extern volatile uint8_t  * gp_uart0_tx_address;       /* uart0 transmit data address */
extern volatile uint16_t   g_uart0_tx_count;          /* uart0 transmit data number */
extern volatile uint8_t  * gp_uart0_rx_address;       /* uart0 receive data address */
extern volatile uint16_t   g_uart0_rx_count;          /* uart0 receive data number */
extern volatile uint16_t   g_uart0_rx_length;         /* uart0 receive data length */
void r_Config_UART0_callback_receiveend(void);
void r_Config_UART0_callback_sendend(void);
void r_Config_UART0_callback_error(uint32_t err_type);
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_UART0_Create_UserInit
* Description  : This function adds user code after initializing UART module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/

void R_Config_UART0_Create_UserInit(void)
{
    /* Start user code for user init. Do not edit comment generated here */
    RLN30.LUOR1.BIT.UTIGTS = 1;
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_UART0_interrupt_receive
* Description  : This function is UART0 receive interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#pragma interrupt r_Config_UART0_interrupt_receive(enable=false, channel=418, fpu=true, callt=false)
void r_Config_UART0_interrupt_receive(void)
{
    uint8_t  rx_data_8;
    uint16_t temp;
    rx_data_8 = RLN30.LURDR.UINT16;

    temp = g_uart0_rx_count;
    if (g_uart0_rx_length > temp)
    {
        *gp_uart0_rx_address = rx_data_8;
        gp_uart0_rx_address++;
        g_uart0_rx_count++;
    }
}

/***********************************************************************************************************************
* Function Name: r_Config_UART0_interrupt_error
* Description  : This function is UART0 error interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#pragma interrupt r_Config_UART0_interrupt_error(enable=false, channel=419, fpu=true, callt=false)
void r_Config_UART0_interrupt_error(void)
{
    *gp_uart0_rx_address = RLN30.LURDR.UINT16;
    RLN30.LEST.UINT8 &= (uint8_t) ~_UART_CLEAR_ERROR_FLAG;
}

/***********************************************************************************************************************
* Function Name: r_Config_UART0_interrupt_send
* Description  : This function is UART0 send interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
#pragma interrupt r_Config_UART0_interrupt_send(enable=false, channel=417, fpu=true, callt=false)
void r_Config_UART0_interrupt_send(void)
{
    D15 = 1;
    if (g_uart0_tx_count > 0U)
    {
        RLN30.LUTDR.UINT16= *gp_uart0_tx_address;
        gp_uart0_tx_address++;
        g_uart0_tx_count--;
    }
    D15 = 0;
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
