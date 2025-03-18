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
* File Name        : Config_PORT.c
* Component Version: 1.7.0
* Device(s)        : R7F702301BEBBA
* Description      : This file implements device driver for Config_PORT.
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
#include "Config_PORT.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
extern volatile uint32_t g_cg_sync_read;
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_PORT_Create
* Description  : This function initializes the PORT
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_PORT_Create(void)
{
    PORT0.PKCPROT = _WRITE_PROTECT_ENABLE;
    PORT0.PWE = _PORT_PWEAP2_WRITE_ENABLE;
    PORT0.APIBC2.UINT16 = _PORT_APIBC_INIT;
    PORT0.APBDC2.UINT16 = _PORT_APBDC_INIT;
    PORT0.APM2.UINT16 = _PORT_APM_INIT;
    /* APORT2 setting */
    PORT0.APDSC2.UINT16 = _PORT_APDSCn0_DRIVE_STRENGTH_0 | _PORT_APDSCn1_DRIVE_STRENGTH_0 | 
                          _PORT_APDSCn2_DRIVE_STRENGTH_0 | _PORT_APDSCn3_DRIVE_STRENGTH_0 | 
                          _PORT_APDSCn4_DRIVE_STRENGTH_0 | _PORT_APDSCn5_DRIVE_STRENGTH_0 | 
                          _PORT_APDSCn6_DRIVE_STRENGTH_0 | _PORT_APDSCn7_DRIVE_STRENGTH_0 | 
                          _PORT_APDSCn8_DRIVE_STRENGTH_0 | _PORT_APDSCn9_DRIVE_STRENGTH_0 | 
                          _PORT_APDSCn10_DRIVE_STRENGTH_0 | _PORT_APDSCn11_DRIVE_STRENGTH_0;
    PORT0.APODC2.UINT16 = _PORT_APODCn0_PUSH_PULL | _PORT_APODCn1_PUSH_PULL | _PORT_APODCn2_PUSH_PULL | 
                          _PORT_APODCn3_PUSH_PULL | _PORT_APODCn4_PUSH_PULL | _PORT_APODCn5_PUSH_PULL | 
                          _PORT_APODCn6_PUSH_PULL | _PORT_APODCn7_PUSH_PULL | _PORT_APODCn8_PUSH_PULL | 
                          _PORT_APODCn9_PUSH_PULL | _PORT_APODCn10_PUSH_PULL | _PORT_APODCn11_PUSH_PULL;
    PORT0.APINV2.UINT16 = _PORT_APINVn0_OUTPUTINVERTED_OFF | _PORT_APINVn1_OUTPUTINVERTED_OFF | 
                          _PORT_APINVn2_OUTPUTINVERTED_OFF | _PORT_APINVn3_OUTPUTINVERTED_OFF | 
                          _PORT_APINVn4_OUTPUTINVERTED_OFF | _PORT_APINVn5_OUTPUTINVERTED_OFF | 
                          _PORT_APINVn6_OUTPUTINVERTED_OFF | _PORT_APINVn7_OUTPUTINVERTED_OFF | 
                          _PORT_APINVn8_OUTPUTINVERTED_OFF | _PORT_APINVn9_OUTPUTINVERTED_OFF | 
                          _PORT_APINVn10_OUTPUTINVERTED_OFF | _PORT_APINVn11_OUTPUTINVERTED_OFF;
    PORT0.APBDC2.UINT16 = _PORT_APBDCn0_MODE_DISABLED | _PORT_APBDCn1_MODE_DISABLED | _PORT_APBDCn2_MODE_DISABLED | 
                          _PORT_APBDCn3_MODE_DISABLED | _PORT_APBDCn4_MODE_DISABLED | _PORT_APBDCn5_MODE_DISABLED | 
                          _PORT_APBDCn6_MODE_DISABLED | _PORT_APBDCn7_MODE_DISABLED | _PORT_APBDCn8_MODE_DISABLED | 
                          _PORT_APBDCn9_MODE_DISABLED | _PORT_APBDCn10_MODE_DISABLED | _PORT_APBDCn11_MODE_DISABLED;
    PORT0.AP2.UINT16 = _PORT_APn0_OUTPUT_LOW | _PORT_APn1_OUTPUT_LOW | _PORT_APn2_OUTPUT_LOW | _PORT_APn3_OUTPUT_LOW | 
                       _PORT_APn4_OUTPUT_LOW | _PORT_APn5_OUTPUT_LOW | _PORT_APn6_OUTPUT_LOW | _PORT_APn7_OUTPUT_LOW | 
                       _PORT_APn8_OUTPUT_LOW | _PORT_APn9_OUTPUT_LOW | _PORT_APn10_OUTPUT_LOW | _PORT_APn11_OUTPUT_LOW;
    PORT0.APM2.UINT16 = _PORT_APMn0_MODE_OUTPUT | _PORT_APMn1_MODE_OUTPUT | _PORT_APMn2_MODE_OUTPUT | 
                        _PORT_APMn3_MODE_OUTPUT | _PORT_APMn4_MODE_OUTPUT | _PORT_APMn5_MODE_OUTPUT | 
                        _PORT_APMn6_MODE_OUTPUT | _PORT_APMn7_MODE_OUTPUT | _PORT_APMn8_MODE_OUTPUT | 
                        _PORT_APMn9_MODE_OUTPUT | _PORT_APMn10_MODE_OUTPUT | _PORT_APMn11_MODE_OUTPUT | 
                        _PORT_APMn12_MODE_UNUSED | _PORT_APMn13_MODE_UNUSED | _PORT_APMn14_MODE_UNUSED | 
                        _PORT_APMn15_MODE_UNUSED;
    PORT0.APSFC2.UINT16 = _PORT_APSFCn0_SAFE_DISABLE | _PORT_APSFCn1_SAFE_DISABLE | _PORT_APSFCn2_SAFE_DISABLE | 
                          _PORT_APSFCn3_SAFE_DISABLE | _PORT_APSFCn4_SAFE_DISABLE | _PORT_APSFCn5_SAFE_DISABLE | 
                          _PORT_APSFCn6_SAFE_DISABLE | _PORT_APSFCn7_SAFE_DISABLE | _PORT_APSFCn8_SAFE_DISABLE | 
                          _PORT_APSFCn9_SAFE_DISABLE | _PORT_APSFCn10_SAFE_DISABLE | _PORT_APSFCn11_SAFE_DISABLE;
    PORT0.PWE = _PORT_PWEAP2_WRITE_DISABLE;
    PORT0.PKCPROT = _WRITE_PROTECT_DISABLE;
    /* Synchronization processing */
    g_cg_sync_read = PORT0.APM2.UINT16;
    __syncp();

    R_Config_PORT_Create_UserInit();
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
