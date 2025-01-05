/**
 * @file tkl_pwm.c
 * @brief this file was auto-generated by tuyaos v&v tools, developer can add implements between BEGIN and END
 *
 * @warning: changes between user 'BEGIN' and 'END' will be keeped when run tuyaos v&v tools
 *           changes in other place will be overwrited and lost
 *
 * @copyright Copyright 2020-2021 Tuya Inc. All Rights Reserved.
 *
 */

// --- BEGIN: user defines and implements ---
#include "tkl_pwm.h"
#include "tuya_error_code.h"
#include "tkl_adapter.h"

// --- END: user defines and implements ---

/**
 * @brief pwm init
 *
 * @param[in] ch_id: pwm channal id, id index starts at 0
 * @param[in] cfg: pwm config
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_init(TUYA_PWM_NUM_E ch_id, CONST TUYA_PWM_BASE_CFG_T *cfg)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E ch_id, CONST TUYA_PWM_BASE_CFG_T *cfg);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_init));

    if(fun) {
        ret = fun(ch_id, cfg);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief pwm deinit
 *
 * @param[in] ch_id: pwm channal id, id index starts at 0
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_deinit(TUYA_PWM_NUM_E ch_id)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E ch_id);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_deinit));

    if(fun) {
        ret = fun(ch_id);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief pwm start
 *
 * @param[in] ch_id: pwm channal id, id index starts at 0
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_start(TUYA_PWM_NUM_E ch_id)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E ch_id);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_start));

    if(fun) {
        ret = fun(ch_id);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief pwm stop
 *
 * @param[in] ch_id: pwm channal id, id index starts at 0
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_stop(TUYA_PWM_NUM_E ch_id)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E ch_id);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_stop));

    if(fun) {
        ret = fun(ch_id);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief multiple pwm channel start
 *
 * @param[in] ch_id: pwm channal id list
 * @param[in] num  : num of pwm channal to start
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_multichannel_start(TUYA_PWM_NUM_E *ch_id, UINT8_T num)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E *ch_id, UINT8_T num);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_multichannel_start));

    if(fun) {
        ret = fun(ch_id, num);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief multiple pwm channel stop
 *
 * @param[in] ch_id: pwm channal id list
 * @param[in] num  : num of pwm channal to stop
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_multichannel_stop(TUYA_PWM_NUM_E *ch_id, UINT8_T num)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E *ch_id, UINT8_T num);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_multichannel_stop));

    if(fun) {
        ret = fun(ch_id, num);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief pwm duty set
 *
 * @param[in] ch_id: pwm channal id, id index starts at 0
 * @param[in] duty:  pwm duty cycle
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_duty_set(TUYA_PWM_NUM_E ch_id, UINT32_T duty)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E ch_id, UINT32_T duty);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_duty_set));

    if(fun) {
        ret = fun(ch_id, duty);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief pwm frequency set
 *
 * @param[in] ch_id: pwm channal id, id index starts at 0
 * @param[in] frequency: pwm frequency
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_frequency_set(TUYA_PWM_NUM_E ch_id, UINT32_T frequency)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E ch_id, UINT32_T frequency);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_frequency_set));

    if(fun) {
        ret = fun(ch_id, frequency);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief pwm polarity set
 *
 * @param[in] ch_id: pwm channal id, id index starts at 0
 * @param[in] polarity: pwm polarity
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_polarity_set(TUYA_PWM_NUM_E ch_id, TUYA_PWM_POLARITY_E polarity)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E ch_id, TUYA_PWM_POLARITY_E polarity);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_polarity_set));

    if(fun) {
        ret = fun(ch_id, polarity);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief set pwm info
 *
 * @param[in] ch_id: pwm channal id, id index starts at 0
 * @param[in] info: pwm info
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_info_set(TUYA_PWM_NUM_E ch_id, CONST TUYA_PWM_BASE_CFG_T *info)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E ch_id, CONST TUYA_PWM_BASE_CFG_T *info);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_info_set));

    if(fun) {
        ret = fun(ch_id, info);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief get pwm info
 *
 * @param[in] ch_id: pwm channal id, id index starts at 0
 * @param[out] info: pwm info
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */

OPERATE_RET tkl_pwm_info_get(TUYA_PWM_NUM_E ch_id, TUYA_PWM_BASE_CFG_T *info)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_PWM_NUM_E ch_id, TUYA_PWM_BASE_CFG_T *info);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_pwm_info_get));

    if(fun) {
        ret = fun(ch_id, info);
    }

    return ret;
    // --- END: user implements ---
}
