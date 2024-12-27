/***********************************************************
*  File: crc_8.h 
*  Author: nzy
*  Date: 20170222
***********************************************************/
#ifndef _CRC_8_H
    #define _CRC_8_H

#ifdef __cplusplus
	extern "C" {
#endif

#ifdef  __CRC_8_GLOBALS
    #define __CRC_8_MODULE_EXT
#else
    #define __CRC_8_MODULE_EXT extern
#endif

/***********************************************************
*************************micro define***********************
***********************************************************/

/***********************************************************
*************************variable define********************
***********************************************************/

/***********************************************************
*************************function define********************
***********************************************************/
/***********************************************************
*   Function: get_crc_8
*   Input: none
*   Output: none 
*   Return: none
***********************************************************/
__CRC_8_MODULE_EXT \
unsigned char get_crc_8(unsigned char *data,unsigned short size);

#ifdef __cplusplus
}
#endif
#endif
