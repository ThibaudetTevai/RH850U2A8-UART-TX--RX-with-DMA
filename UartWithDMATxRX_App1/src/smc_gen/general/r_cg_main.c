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
* File Name        : r_cg_main.c
* Version          : 1.0.150
* Device(s)        : R7F702301BEBBA
* Description      : This file implements main function.
***********************************************************************************************************************/
/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_smc_entry.h"
/* Start user code for include. Do not edit comment generated here */
#define ARRAY_LENGTH 100
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
#pragma section r0_disp32 "BuffTabTx" // Section address start at 0xFE400000
uint8_t tabTxData[ARRAY_LENGTH];
#pragma section default

#pragma section r0_disp32 "BuffTabRx" // Section address start at 0xFE400D00
uint8_t tabRxData[ARRAY_LENGTH];
#pragma section default

uint8_t tabDummy[1U] = {0};

uint32_t g_cnt = 0;

void user_initPguard(void);
void user_initvar_setIoDgb(void);
void user_initArray_tabTxData(void);
void user_initArray_tabRxData(void);
/* End user code. Do not edit comment generated here */
void r_main_userinit(void);

/***********************************************************************************************************************
* Function Name: main
* Description  : This function implements main function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void main(void)
{
    r_main_userinit();
    /* Start user code for main. Do not edit comment generated here */
    user_initPguard();
    user_initvar_setIoDgb();
    //D4 = 1;
    R_Config_SDMAC11_Start();
    R_Config_UART1_Start();
    R_Config_UART0_Start();
    R_Config_SDMAC10_Start();
    R_Config_UART0_Send(tabDummy, 1);
    //R_Config_UART1_Receive(tabRxData, 8);
    //D4 = 0;
    while(1)
    {
        g_cnt++;
        if(g_cnt > 1000)
        {
            g_cnt = 0;
            //D4 = 1;
           // D4 = 0;
        }
    }
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_main_userinit
* Description  : This function adds user code before implementing main function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_main_userinit(void)
{
    DI();
    /* Start user code for r_main_userinit. Do not edit comment generated here */
    /* End user code. Do not edit comment generated here */
    R_Systeminit();
    EI();
}

/* Start user code for adding. Do not edit comment generated here */
void user_initPguard(void)
{  
    GUARD_PE0CL0.PEGKCPROT.UINT32 = 0xA5A5A501L; ///< The value is indicated in page 6059 of the user's manual
    GUARD_PE0CL0.PEGBAD0.UINT32 = 0xFDC00000L;   ///< local RAM base address
    GUARD_PE0CL0.PEGADV0.UINT32 = 0x3FF0000L;    ///< 64K local RAM is open
    GUARD_PE0CL0.PEGSPID0.UINT32 |= (1 << 0x1C); ///< Default SPID of SDMAC0  
    GUARD_PE0CL0.PEGPROT0.UINT32 = 0x00000053L;  ///< enable guard
    GUARD_PE0CL0.PEGKCPROT.UINT32 = 0xA5A5A500L; ///< Close 

    PBGERRSLV30.PBGKCPROT.UINT32 = 0xA5A5A501L; ///< RLIN30
    PBG32.PBGPROT1_1.UINT32 |= (1 << 0x1C);
    PBG32.PBGPROT0_1.UINT32 = 0x00000153L;
    PBGERRSLV30.PBGKCPROT.UINT32 = 0xA5A5A500L;
    
    PBGERRSLV50.PBGKCPROT.UINT32 = 0xA5A5A501L; ///< RLIN31
    PBG52.PBGPROT1_11.UINT32 |= (1 << 0x1C);
    PBG52.PBGPROT0_11.UINT32 = 0x00000153L;
    PBGERRSLV50.PBGKCPROT.UINT32 = 0xA5A5A500L;
}

void user_initvar_setIoDgb(void)
{  
    
    // Use the port 8 as IO debug. Set all IO at High level
    PORT0.PKCPROT = _WRITE_PROTECT_ENABLE;/* Enable writes to PWE register */
    PORT0.PWE = SETBIT(8U);         /* PWEP8:Enable Write Access for Port 8 */
    D4 = 1;
    D5 = 1;
    D6 = 1;
    D7 = 1;
    D8 = 1;
    D9 = 1;
    D10 = 1;
    D11 = 1;
    D12 = 1;
    D13 = 1;
    D14 = 1;
    D15 = 1;
    D16 = 1;
        
    user_initArray_tabTxData();
    user_initArray_tabRxData();
    
    // Set IO Debug at Low level
    D4 = 0;
    D5 = 0;
    D6 = 0;
    D7 = 0;
    D8 = 0;
    D9 = 0;
    D10 = 0;
    D11 = 0;
    D12 = 0;
    D13 = 0;
    D14 = 0;
    D15 = 0;
    D16 = 0;
    PORT0.PWE = _PORT_WRITE_PROTECT_DISABLE;/* Disable Write Access for all Ports */
    PORT0.PKCPROT = _WRITE_PROTECT_DISABLE;/* Disable writes to PWE register */
}

void user_initArray_tabTxData(void)
{
    //** Random value to push on the MSPI
    tabTxData[0]  = 0x3F;
    tabTxData[1]  = 0x3C;
    tabTxData[2]  = 0x4D;
    tabTxData[3]  = 0xA1;
    tabTxData[4]  = 0xE5;
    tabTxData[5]  = 0xD9;
    tabTxData[6]  = 0xE0;
    tabTxData[7]  = 0x3B;
    tabTxData[8]  = 0x4A;
    tabTxData[9]  = 0xAE;
    tabTxData[10] = 0xB5;
    tabTxData[11] = 0xB3;
    tabTxData[12] = 0xC6;
}

void user_initArray_tabRxData(void)
{
    memset(tabRxData, 0, ARRAY_LENGTH);
}
/* End user code. Do not edit comment generated here */
