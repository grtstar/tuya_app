/**
 * @file tkl_output.c
 * @brief this file was auto-generated by tuyaos v&v tools, developer can add implements between BEGIN and END
 *
 * @warning: changes between user 'BEGIN' and 'END' will be keeped when run tuyaos v&v tools
 *           changes in other place will be overwrited and lost
 *
 * @copyright Copyright 2020-2021 Tuya Inc. All Rights Reserved.
 *
 */

// --- BEGIN: user defines and implements ---
#include "tkl_output.h"
#include "tuya_error_code.h"
#include "tkl_adapter.h"

// --- END: user defines and implements ---

/**
 * @brief Output log information
 *
 * @param[in] format: log information
 *
 * @note This API is used for outputing log information
 *
 * @return
 */

VOID_T tkl_log_output(CONST CHAR_T *format, ...)
{
    // --- BEGIN: user implements ---
    typedef VOID_T (*TYPE_T)(CONST CHAR_T *format, ...);

    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_log_output));

    if(fun) {
         fun(format);
    }

    return;
    // --- END: user implements ---
}

/**
 * @brief Close log port
 *
 * @param VOID
 *
 * @note This API is used for closing log port.
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_log_close(VOID_T)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(VOID_T);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_log_close));

    if(fun) {
        ret = fun();
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief Open log port
 *
 * @param VOID
 *
 * @note This API is used for openning log port.
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_log_open(VOID_T)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(VOID_T);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_log_open));

    if(fun) {
        ret = fun();
    }

    return ret;
    // --- END: user implements ---
}

