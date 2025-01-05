/**
 * @file tkl_mutex.c
 * @brief this file was auto-generated by tuyaos v&v tools, developer can add implements between BEGIN and END
 * 
 * @warning: changes between user 'BEGIN' and 'END' will be keeped when run tuyaos v&v tools
 *           changes in other place will be overwrited and lost
 *
 * @copyright Copyright 2020-2021 Tuya Inc. All Rights Reserved.
 * 
 */

// --- BEGIN: user defines and implements ---
#include "tkl_mutex.h"
#include "tuya_error_code.h"
#include "FreeRTOSConfig.h"
// --- END: user defines and implements ---

/**
* @brief Create mutex
*
* @param[out] pMutexHandle: mutex handle
*
* @note This API is used to create and init mutex.
*
* @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
*/
OPERATE_RET tkl_mutex_create_init(TKL_MUTEX_HANDLE *pMutexHandle)
{
    // --- BEGIN: user implements ---
    if(!pMutexHandle)
        return OPRT_INVALID_PARM;
    
	*pMutexHandle = (TKL_MUTEX_HANDLE)xSemaphoreCreateRecursiveMutex();
	if (NULL == *pMutexHandle) {
		return OPRT_OS_ADAPTER_MUTEX_CREAT_FAILED;
	}
    return OPRT_OK;
    // --- END: user implements ---
}

/**
* @brief Lock mutex
*
* @param[in] mutexHandle: mutex handle
*
* @note This API is used to lock mutex.
*
* @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
*/
OPERATE_RET tkl_mutex_lock(CONST TKL_MUTEX_HANDLE mutexHandle)
{
    // --- BEGIN: user implements ---
    if(!mutexHandle) {
        return OPRT_INVALID_PARM;
    }
    
    BaseType_t ret;
    ret = xSemaphoreTakeRecursive(mutexHandle, portMAX_DELAY);
    if (pdTRUE != ret) {
        return OPRT_OS_ADAPTER_MUTEX_LOCK_FAILED;
    }
    return OPRT_OK;
    // --- END: user implements ---
}

/**
* @brief Try Lock mutex
*
* @param[in] mutexHandle: mutex handle
*
* @note This API is used to try lock mutex.
*
* @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
*/
OPERATE_RET tkl_mutex_trylock(CONST TKL_MUTEX_HANDLE mutexHandle)
{
    // --- BEGIN: user implements ---
    return OPRT_NOT_SUPPORTED;
    // --- END: user implements ---
}

/**
* @brief Unlock mutex
*
* @param[in] mutexHandle: mutex handle
*
* @note This API is used to unlock mutex.
*
* @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
*/
OPERATE_RET tkl_mutex_unlock(CONST TKL_MUTEX_HANDLE mutexHandle)
{
    // --- BEGIN: user implements ---
    BaseType_t ret;

    if(!mutexHandle) {
        return OPRT_INVALID_PARM;
    }
    
    ret = xSemaphoreGiveRecursive(mutexHandle);
    if (pdTRUE != ret) {
        return OPRT_OS_ADAPTER_MUTEX_UNLOCK_FAILED;
    }
    return OPRT_OK;
    // --- END: user implements ---
}

/**
* @brief Release mutex
*
* @param[in] mutexHandle: mutex handle
*
* @note This API is used to release mutex.
*
* @return OPRT_OK on success. Others on error, please refer to tuya_error_code.h
*/
OPERATE_RET tkl_mutex_release(CONST TKL_MUTEX_HANDLE mutexHandle)
{
    // --- BEGIN: user implements ---
    if(!mutexHandle) {
        return OPRT_INVALID_PARM;
    }
    
    vSemaphoreDelete(mutexHandle);
	
    return OPRT_OK;
    // --- END: user implements ---
}
