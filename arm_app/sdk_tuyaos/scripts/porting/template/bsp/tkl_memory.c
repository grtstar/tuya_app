/**
 * @file tkl_memory.c
 * @brief this file was auto-generated by tuyaos v&v tools, developer can add implements between BEGIN and END
 *
 * @warning: changes between user 'BEGIN' and 'END' will be keeped when run tuyaos v&v tools
 *           changes in other place will be overwrited and lost
 *
 * @copyright Copyright 2020-2021 Tuya Inc. All Rights Reserved.
 *
 */

// --- BEGIN: user defines and implements ---
#include "tkl_memory.h"
#include "tuya_error_code.h"
#include "tkl_adapter.h"

// --- END: user defines and implements ---

/**
 * @brief Alloc memory of system
 *
 * @param[in] size: memory size
 *
 * @note This API is used to alloc memory of system.
 *
 * @return the memory address malloced
 */

VOID_T* tkl_system_malloc(SIZE_T size)
{
    // --- BEGIN: user implements ---
    typedef VOID_T* (*TYPE_T)(SIZE_T size);

    VOID_T* ret = 0;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_system_malloc));

    if(fun) {
        ret = fun(size);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief Free memory of system
 *
 * @param[in] ptr: memory point
 *
 * @note This API is used to free memory of system.
 *
 * @return VOID_T
 */

VOID_T tkl_system_free(VOID_T* ptr)
{
    // --- BEGIN: user implements ---
    typedef VOID_T (*TYPE_T)(VOID_T* ptr);

    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_system_free));

    if(fun) {
         fun(ptr);
    }

    return;
    // --- END: user implements ---
}

/**
 * @brief Allocate and clear the memory
 *
 * @param[in]       nitems      the numbers of memory block
 * @param[in]       size        the size of the memory block
 *
 * @return the memory address calloced
 */

VOID_T* tkl_system_calloc(size_t nitems, size_t size)
{
    // --- BEGIN: user implements ---
    typedef VOID_T* (*TYPE_T)(size_t nitems, size_t size);

    VOID_T* ret = 0;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_system_calloc));

    if(fun) {
        ret = fun(nitems, size);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief Re-allocate the memory
 *
 * @param[in]       nitems      source memory address
 * @param[in]       size        the size after re-allocate
 *
 * @return VOID_T
 */

VOID_T* tkl_system_realloc(VOID_T* ptr, size_t size)
{
    // --- BEGIN: user implements ---
    typedef VOID_T* (*TYPE_T)(VOID_T* ptr, size_t size);

    VOID_T* ret = 0;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_system_realloc));

    if(fun) {
        ret = fun(ptr, size);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief Get system free heap size
 *
 * @param none
 *
 * @return heap size
 */

INT_T tkl_system_get_free_heap_size(VOID_T)
{
    // --- BEGIN: user implements ---
    typedef INT_T (*TYPE_T)(VOID_T);

    INT_T ret = 0;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_system_get_free_heap_size));

    if(fun) {
        ret = fun();
    }

    return ret;
    // --- END: user implements ---
}

/**
* @brief set memory
*
* @param[in] size: memory size
*
* @note This API is used to alloc memory of system.
*
* @return the memory address malloced
*/
TUYA_WEAK_ATTRIBUTE VOID_T *tkl_system_memset(VOID_T* src, INT_T ch, CONST SIZE_T n)
{

    // --- BEGIN: user implements ---
    typedef VOID_T * (*TYPE_T)(VOID_T* src, INT_T ch, CONST SIZE_T n);

    VOID_T * ret = NULL;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_system_memset));

    if(fun) {
        ret = fun(src, ch, n);
    }

    return ret;
    // --- END: user implements ---
}

/**
* @brief Alloc memory of system
*
* @param[in] size: memory size
*
* @note This API is used to alloc memory of system.
*
* @return the memory address malloced
*/
TUYA_WEAK_ATTRIBUTE VOID_T *tkl_system_memcpy(VOID_T* src, CONST VOID_T* dst, CONST SIZE_T n)
{
    // --- BEGIN: user implements ---
    typedef VOID_T * (*TYPE_T)(VOID_T* src, CONST VOID_T* dst, CONST SIZE_T n);

    VOID_T * ret = NULL;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_system_memcpy));

    if(fun) {
        ret = fun(src, dst, n);
    }

    return ret;
    // --- END: user implements ---
}


/**
 * @brief memory cmpare 
 * 
 * @param[in]       str1     source string  
 * @param[in]       str2     dst string  
 * @param[in]       n        bytes  
 */
INT_T tkl_system_memcmp(CONST VOID_T *str1, CONST VOID_T *str2, SIZE_T n)
{
    // --- BEGIN: user implements ---
    typedef INT_T (*TYPE_T)(CONST VOID_T *str1, CONST VOID_T *str2, SIZE_T n);

    INT_T ret = 0;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_system_memcmp));

    if(fun) {
        ret = fun(str1, str2, n);
    }

    return ret;
    // --- END: user implements ---
}


