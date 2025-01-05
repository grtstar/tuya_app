/**
 * @file tkl_cellular_mds.c
 * @brief this file was auto-generated by tuyaos v&v tools, developer can add implements between BEGIN and END
 *
 * @warning: changes between user 'BEGIN' and 'END' will be keeped when run tuyaos v&v tools
 *           changes in other place will be overwrited and lost
 *
 * @copyright Copyright 2020-2021 Tuya Inc. All Rights Reserved.
 *
 */

// --- BEGIN: user defines and implements ---
#include "tkl_cellular_mds.h"
#include "tuya_error_code.h"
#include "tkl_adapter.h"

// --- END: user defines and implements ---

/**
 * @brief 初始化蜂窝移动数据服务
 *
 * @param simId sim卡ID
 *
 * @return 0 成功 其它 失败
 */

OPERATE_RET tkl_cellular_mds_init(UINT8_T sim_id)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(UINT8_T sim_id);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_init));

    if(fun) {
        ret = fun(sim_id);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief 获取蜂窝移动数据服务的鉴权状态
 *
 * @param simId sim卡ID
 *
 * @return 蜂窝移动数据鉴权状态，查看 @TUYA_CELLULAR_MDS_STATUS_E 定义
 */

TUYA_CELLULAR_MDS_STATUS_E tkl_cellular_mds_get_status(UINT8_T sim_id)
{
    // --- BEGIN: user implements ---
    typedef TUYA_CELLULAR_MDS_STATUS_E (*TYPE_T)(UINT8_T sim_id);

    TUYA_CELLULAR_MDS_STATUS_E ret = 0;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_get_status));

    if(fun) {
        ret = fun(sim_id);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief 获取蜂窝移动数据服务的鉴权状态
 *
 * @param simId sim卡ID
 *
 * @return 蜂窝移动数据鉴权状态，查看 @TUYA_CELLULAR_MDS_STATUS_E 定义
 */

TUYA_CELLULAR_MDS_STATUS_E tkl_cellular_mds_adv_get_status(UINT8_T sim_id,UINT8_T cid)
{
    // --- BEGIN: user implements ---
    typedef TUYA_CELLULAR_MDS_STATUS_E (*TYPE_T)(UINT8_T sim_id,UINT8_T cid);

    TUYA_CELLULAR_MDS_STATUS_E ret = 0;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_adv_get_status));

    if(fun) {
        ret = fun(sim_id, cid);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief 蜂窝移动数据PDP激活，默认使用CID为1
 *
 * @param simId sim卡ID
 * @param apn 运营商APN设置
 * @param username 用户名
 * @param password 密码
 *
 * @return 0 成功 其它 失败
 */

OPERATE_RET tkl_cellular_mds_pdp_active(UINT8_T sim_id,PCHAR_T apn, PCHAR_T username, PCHAR_T password)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(UINT8_T sim_id,PCHAR_T apn, PCHAR_T username, PCHAR_T password);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_pdp_active));

    if(fun) {
        ret = fun(sim_id, apn, username, password);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief 蜂窝移动数据指定CID PDP激活
 *
 * @param simId sim卡ID
 * @param cid Specify the PDP Context Identifier
 * @param apn 运营商APN设置
 * @param username 用户名
 * @param password 密码
 *
 * @return 0 成功 其它 失败
 */

OPERATE_RET tkl_cellular_mds_adv_pdp_active(UINT8_T sim_id,UINT8_T cid,TUYA_MDS_PDP_TYPE_E pdp_type,PCHAR_T apn, PCHAR_T username, PCHAR_T password)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(UINT8_T sim_id,UINT8_T cid,TUYA_MDS_PDP_TYPE_E pdp_type,PCHAR_T apn, PCHAR_T username, PCHAR_T password);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_adv_pdp_active));

    if(fun) {
        ret = fun(sim_id, cid, pdp_type, apn, username, password);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief 蜂窝移动数据PDP去激活，默认使用CID为1
 *
 * @param simId sim卡ID
 *
 * @return 0 成功 其它 失败
 */

OPERATE_RET tkl_cellular_mds_pdp_deactive(UINT8_T sim_id)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(UINT8_T sim_id);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_pdp_deactive));

    if(fun) {
        ret = fun(sim_id);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief 蜂窝移动数据指定CID PDP去激活
 *
 * @param simId sim卡ID
 * @param cid Specify the PDP Context Identifier
 * @return 0 成功 其它 失败
 */

OPERATE_RET tkl_cellular_mds_adv_pdp_deactive(UINT8_T sim_id,UINT8_T cid)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(UINT8_T sim_id,UINT8_T cid);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_adv_pdp_deactive));

    if(fun) {
        ret = fun(sim_id, cid);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief 蜂窝移动数据PDP自动重激活设置
 *
 * @param simId sim卡ID
 * @param enable TRUE 开启自动重新激活 FALSE 关闭自动重新激活
 *
 * @return 0 成功 其它 失败
 */

OPERATE_RET tkl_cellular_mds_pdp_auto_reactive(UINT8_T sim_id,BOOL_T enable)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(UINT8_T sim_id,BOOL_T enable);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_pdp_auto_reactive));

    if(fun) {
        ret = fun( sim_id, enable);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief 注册蜂窝数据服务状态变化通知函数
 * @param fun 状态变化通知函数
 * @return 0 成功  其它 失败
 */

OPERATE_RET tkl_cellular_mds_register_state_notify(UINT8_T sim_id,TKL_MDS_NOTIFY fun)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(UINT8_T sim_id,TKL_MDS_NOTIFY fun);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T func;

    func = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_register_state_notify));

    if(fun) {
        ret = func(sim_id, fun);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief   Get device ip address.
 * @param   ip: The type of NW_IP_S
 * @return  OPRT_OK: success  Other: fail
 */

OPERATE_RET tkl_cellular_mds_get_ip(UINT8_T sim_id,NW_IP_S *ip)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(UINT8_T sim_id,NW_IP_S *ip);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_get_ip));

    if(fun) {
        ret = fun(sim_id, ip);
    }

    return ret;
    // --- END: user implements ---
}

/**
 * @brief   Get device ip address.
 * @param   ip: The type of NW_IP_S
 * @return  OPRT_OK: success  Other: fail
 */

OPERATE_RET tkl_cellular_mds_adv_get_ip(UINT8_T sim_id,UINT8_T cid,NW_IP_S *ip)
{
    // --- BEGIN: user implements ---
    typedef OPERATE_RET (*TYPE_T)(UINT8_T sim_id,UINT8_T cid,NW_IP_S *ip);

    OPERATE_RET ret = OPRT_NOT_SUPPORTED;
    TYPE_T fun;

    fun = (TYPE_T)tkl_adapt_func_get(FUNC_NAME(tkl_cellular_mds_adv_get_ip));

    if(fun) {
        ret = fun(sim_id, cid, ip);
    }

    return ret;
    // --- END: user implements ---
}