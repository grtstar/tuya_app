/**
* @file      tuya_ipc_mqtt_subscribe.h
* @brief     ipc mqtt subscribe api
* @version   1.0
* @date      2021-11-19
*
* copyright  Copyright (c) tuya.inc 2021
*/
#ifndef __TUYA_IPC_MQTT_SUBSCRIBE_H__
#define __TUYA_IPC_MQTT_SUBSCRIBE_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "ty_cJSON.h"
#include "tuya_cloud_types.h"

#define PRO_CLOUD_STORAGE_ORDER_REQ         300 /* 云存储订单 */
#define PRO_3RD_PARTY_STREAMING_REQ         301 /* echo show/chromecast request */
#define PRO_RTC_REQ                         302 /* cloud -> dev */
#define PRO_AI_DETECT_DATA_SYNC_REQ         304 /* 本地AI数据更新，当前用于人脸检测样本数据更新(新增/删除/变更) */
#define PRO_FACE_DETECT_DATA_SYNC           306 /* 人脸识别数据同步通知,门禁设备使用 */
#define PRO_CLOUD_STORAGE_EVENT_REQ         307 /* 联动触发云存储 */
#define PRO_DOORBELL_STATUS_REQ             308 /* 门铃请求被用户处理，接听或者拒绝 */
#define PRO_MQ_CLOUD_STREAM_GATEWAY         312

/** mqtt 目前支持的最大主题个数 */
#define TUYA_IPC_MQTT_MAX_NUMS   20

//回调函数指针类型（参数固定为json格式）
/**
* @brief      tuya ipc mqtt message callback
* @param[in]  receiver mqtt data in json format
* @return     VOID
*/
typedef VOID (*TUYA_IPC_MQTT_CB) (IN ty_cJSON* data);
typedef UINT_T TUYA_IPC_MQTT_PROTOCOL; 

/**
* @brief      attach callback function to mqtt protocol
* @param[in]  protocol    mqtt protocol number
* @param[in]  cb          mqtt receive callback
* @return     OPERATE_OK
* - OPRT_OK   success
* - Others    failed
*/
OPERATE_RET tuya_ipc_mqtt_attach(IN TUYA_IPC_MQTT_PROTOCOL protocol, IN TUYA_IPC_MQTT_CB cb);

/**
* @brief      detach callback function from mqtt protocol
* @param[in]  protocol    mqtt protocol number
* @param[in]  cb          mqtt receive callback
* @return     OPERATE_OK
* - OPRT_OK   success
* - Others    failed
*/
OPERATE_RET tuya_ipc_mqtt_detach(IN TUYA_IPC_MQTT_PROTOCOL protocol, IN TUYA_IPC_MQTT_CB cb);

/**
* @brief      mqtt register cb init
* @param[in]  VOID
*/
VOID tuya_ipc_mqtt_register_cb_init(VOID);

#ifdef __cplusplus
}
#endif

#endif

