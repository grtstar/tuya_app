/**
 * @file tkl_rtc.c
 * @brief this file was auto-generated by tuyaos v&v tools, developer can add implements between BEGIN and END
 *
 * @warning: changes between user 'BEGIN' and 'END' will be keeped when run tuyaos v&v tools
 *           changes in other place will be overwrited and lost
 *
 * @copyright Copyright 2020-2021 Tuya Inc. All Rights Reserved.
 *
 */

// --- BEGIN: user defines and implements ---
#include "tkl_rtc.h"
#include "tuya_error_code.h"
#include "tkl_adapter.h"

// --- END: user defines and implements ---

/**
 * @brief rtc init
 *
 * @param[in] none
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_rtc_init(VOID_T)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(VOID_T);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_rtc_init));

    if(fun) {
        ret = fun();
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief rtc deinit
 * @param[in] none
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_rtc_deinit(VOID_T)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(VOID_T);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_rtc_deinit));

    if(fun) {
        ret = fun();
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief rtc time set
 *
 * @param[in] time_sec: rtc time seconds
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_rtc_time_set(TIME_T time_sec)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TIME_T time_sec);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_rtc_time_set));

    if(fun) {
        ret = fun(time_sec);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief rtc time get
 *
 * @param[in] time_sec:rtc time seconds
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_rtc_time_get(TIME_T *time_sec)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TIME_T *time_sec);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_rtc_time_get));

    if(fun) {
        ret = fun(time_sec);
    }

    return ret;
    // --- END: user implements ---
}

