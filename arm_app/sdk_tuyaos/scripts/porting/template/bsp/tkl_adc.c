/**
 * @file tkl_adc.c
 * @brief this file was auto-generated by tuyaos v&v tools, developer can add implements between BEGIN and END
 * 
 * @warning: changes between user 'BEGIN' and 'END' will be keeped when run tuyaos v&v tools
 *           changes in other place will be overwrited and lost
 *
 * @copyright Copyright 2020-2021 Tuya Inc. All Rights Reserved.
 * 
 */

// --- BEGIN: user defines and implements ---
#include "tkl_adc.h"
#include "tuya_error_code.h"
#include "tkl_adapter.h"

// --- END: user defines and implements ---

/**
 * @brief tuya kernel adc init
 *
 * @param[in] port_num: adc port number
 * @param[in] cfg: adc config
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_adc_init(TUYA_ADC_NUM_E port_num, TUYA_ADC_BASE_CFG_T *cfg)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_ADC_NUM_E port_num, TUYA_ADC_BASE_CFG_T *cfg);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_adc_init));

    if(fun) {
        ret = fun(port_num, cfg);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief adc deinit
 *
 * @param[in] port_num: adc port number

 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_adc_deinit(TUYA_ADC_NUM_E port_num)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_ADC_NUM_E port_num);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_adc_deinit));

    if(fun) {
        ret = fun(port_num);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief get adc width
 *
 * @param[in] port_num: adc port number

 *
 * @return adc width
 */
UINT8_T tkl_adc_width_get(TUYA_ADC_NUM_E port_num)
{
    // --- BEGIN: user implements ---
    typedef UINT8_T (*TYPE_T)(TUYA_ADC_NUM_E port_num);

    UINT8_T ret = 0;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_adc_width_get));

    if(fun) {
        ret = fun(port_num);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief get adc reference voltage
 *
 * @param[in] port_num

 *
 * @return adc reference voltage(bat: mv)
 */
UINT32_T tkl_adc_ref_voltage_get(TUYA_ADC_NUM_E port_num)
{
    // --- BEGIN: user implements ---
    typedef UINT32_T (*TYPE_T)(TUYA_ADC_NUM_E port_num);

    UINT32_T ret = 0;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_adc_ref_voltage_get));

    if(fun) {
        ret = fun(port_num);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief adc get temperature
 *
 * @return temperature(bat: 'C)
 */
INT32_T tkl_adc_temperature_get(VOID_T)
{
    // --- BEGIN: user implements ---
    typedef INT32_T (*TYPE_T)(VOID_T);

    INT32_T ret = 0;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_adc_temperature_get));

    if(fun) {
        ret = fun();
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief adc read
 *
 * @param[in] port_num: adc port number
 * @param[out] buff: points to the list of data read from the ADC register
 * @param[in] len:  buff len
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_adc_read_data(TUYA_ADC_NUM_E port_num, INT32_T *buff, UINT16_T len)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_ADC_NUM_E port_num, INT32_T *buff, UINT16_T len);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_adc_read_data));

    if(fun) {
        ret = fun(port_num, buff, len);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief read single channel
 *
 * @param[in] port_num: adc port number
 * @param[in] ch_id: channel id in one adc unit
 * @param[out] buff: convert result buffer
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 *
 */
OPERATE_RET tkl_adc_read_single_channel(TUYA_ADC_NUM_E port_num, UINT8_T ch_id, INT32_T *data)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_ADC_NUM_E port_num, UINT8_T ch_id, INT32_T *data);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_adc_read_single_channel));

    if(fun) {
        ret = fun(port_num, ch_id, data);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief read voltage
 *
 * @param[in] port_num: adc port number
 * @param[out] buff: points to the list of calculate voltage,bat : mv
 * @param[in] len:  buff len
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 *
 */

OPERATE_RET tkl_adc_read_voltage(TUYA_ADC_NUM_E port_num, INT32_T *buff, UINT16_T len)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_ADC_NUM_E port_num, INT32_T *buff, UINT16_T len);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_adc_read_voltage));

    if(fun) {
        ret = fun(port_num, buff, len);
    }

    return ret;
    // --- END: user implements ---
}
