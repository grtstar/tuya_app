/**
 * @file tkl_sleep.c
 * @brief this file was auto-generated by tuyaos v&v tools, developer can add implements between BEGIN and END
 * 
 * @warning: changes between user 'BEGIN' and 'END' will be keeped when run tuyaos v&v tools
 *           changes in other place will be overwrited and lost
 *
 * @copyright Copyright 2020-2021 Tuya Inc. All Rights Reserved.
 * 
 */

// --- BEGIN: user defines and implements ---
#include "tkl_sleep.h"
#include "tuya_error_code.h"
// --- END: user defines and implements ---

/**
 * @brief sleep callback register
 * 
 * @param[in] sleep_cb:  sleep callback
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_cpu_sleep_callback_register(TUYA_SLEEP_CB_T *sleep_cb)
{
    // --- BEGIN: user implements ---
    return OPRT_NOT_SUPPORTED;
    // --- END: user implements ---
}

/**
 * @brief allow to sleep
 * 
 * @param[in] none
 *
 * @return none
 */
VOID_T tkl_cpu_allow_sleep(VOID_T)
{
    // --- BEGIN: user implements ---
    return ;
    // --- END: user implements ---
}

/**
 * @brief force wakeup
 * 
 * @param[in] none
 *
 * @return none
 */
VOID_T tkl_cpu_force_wakeup(VOID_T)
{
    // --- BEGIN: user implements ---
    return ;
    // --- END: user implements ---
}

/**
* @brief Set the low power mode of CPU
*
* @param[in] enable: enable switch
* @param[in] mode:   cpu sleep mode
*
* @note This API is used for setting the low power mode of CPU.
*
* @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
*/
OPERATE_RET tkl_cpu_sleep_mode_set(BOOL_T enable, TUYA_CPU_SLEEP_MODE_E mode)
{
    // --- BEGIN: user implements ---
    return OPRT_NOT_SUPPORTED;
    // --- END: user implements ---
}

