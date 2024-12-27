/**
 * @file tkl_gpio.c
 * @brief this file was auto-generated by tuyaos v&v tools, developer can add implements between BEGIN and END
 * 
 * @warning: changes between user 'BEGIN' and 'END' will be keeped when run tuyaos v&v tools
 *           changes in other place will be overwrited and lost
 *
 * @copyright Copyright 2020-2021 Tuya Inc. All Rights Reserved.
 * 
 */

// --- BEGIN: user defines and implements ---
#include "tkl_gpio.h"
#include "tuya_error_code.h"
#include "tkl_adapter.h"

// --- END: user defines and implements ---

/**
 * @brief gpio init
 * 
 * @param[in] pin_id: gpio pin id, id index starts at 0
 * @param[in] cfg:  gpio config
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_gpio_init(TUYA_GPIO_NUM_E pin_id, CONST TUYA_GPIO_BASE_CFG_T *cfg)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_GPIO_NUM_E pin_id, CONST TUYA_GPIO_BASE_CFG_T *cfg);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_gpio_init));

    if(fun) {
        ret = fun(pin_id, cfg);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief gpio deinit
 * 
 * @param[in] pin_id: gpio pin id, id index starts at 0
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_gpio_deinit(TUYA_GPIO_NUM_E pin_id)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_GPIO_NUM_E pin_id);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_gpio_deinit));

    if(fun) {
        ret = fun(pin_id);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief gpio write
 * 
 * @param[in] pin_id: gpio pin id, id index starts at 0
 * @param[in] level: gpio output level value
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_gpio_write(TUYA_GPIO_NUM_E pin_id, TUYA_GPIO_LEVEL_E level)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_GPIO_NUM_E pin_id, TUYA_GPIO_LEVEL_E level);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_gpio_write));

    if(fun) {
        ret = fun(pin_id, level);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief gpio read
 * 
 * @param[in] pin_id: gpio pin id, id index starts at 0
 * @param[out] level: gpio output level
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_gpio_read(TUYA_GPIO_NUM_E pin_id, TUYA_GPIO_LEVEL_E *level)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_GPIO_NUM_E pin_id, TUYA_GPIO_LEVEL_E *level);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_gpio_read));

    if(fun) {
        ret = fun(pin_id, level);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief gpio irq init
 * NOTE: call this API will not enable interrupt
 * 
 * @param[in] pin_id: gpio pin id, id index starts at 0
 * @param[in] cfg:  gpio irq config
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_gpio_irq_init(TUYA_GPIO_NUM_E pin_id, CONST TUYA_GPIO_IRQ_T *cfg)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_GPIO_NUM_E pin_id, CONST TUYA_GPIO_IRQ_T *cfg);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_gpio_irq_init));

    if(fun) {
        ret = fun(pin_id, cfg);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief gpio irq enable
 * 
 * @param[in] pin_id: gpio pin id, id index starts at 0
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_gpio_irq_enable(TUYA_GPIO_NUM_E pin_id)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_GPIO_NUM_E pin_id);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_gpio_irq_enable));

    if(fun) {
        ret = fun(pin_id);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief gpio irq disable
 * 
 * @param[in] pin_id: gpio pin id, id index starts at 0
 *
 * @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
 */
OPERATE_RET tkl_gpio_irq_disable(TUYA_GPIO_NUM_E pin_id)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(TUYA_GPIO_NUM_E pin_id);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_gpio_irq_disable));

    if(fun) {
        ret = fun(pin_id);
    }

    return ret;
    // --- END: user implements ---
}

