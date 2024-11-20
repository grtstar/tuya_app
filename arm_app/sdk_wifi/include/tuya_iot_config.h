/*
tuya_iot_config.h
Copyright(C),2018-2020, 涂鸦科技 www.tuya.comm
*/

/* AUTO-GENERATED FILE. DO NOT MODIFY !!!
*
* This config file is automatically generated by tuya cross-build system.
* It should not be modified by hand.
*/

#ifndef TUYA_IOT_CONFIG_H
#define TUYA_IOT_CONFIG_H

#ifdef __cplusplus
extern "C" {
#endif

/* default definitons */

#define SYSTEM_SMALL_MEMORY_BEGIN       0       /*small memory systems begin */

#define SYSTEM_REALTEK8710_1M           1
#define SYSTEM_REALTEK8710_2M           2


#define SYSTEM_FREERTOS                 98
#define SYSTEM_SMALL_MEMORY_END         99      /*small memory systems end */
#define SYSTEM_LINUX                    100
#define SYSTEM_LITEOS                   120

#define TLS_DISABLE                     0       /* disable tls function */
#define TLS_TUYA_PSK_ONLY               2       /* only enable ciper 0xAE */
#define TLS_TUYA_ECC_PSK                3       /* enable ciper 0xAE && 0xC027 */
#define TLS_TUYA_ECC_ONLY               4       /* only enable ciper 0xC027 */
#define TLS_TUYA_ECC_ONLY_NOSTRIP       5       /* only enable ciper 0xC027, but enable most of mbed-tls configs */
#define TLS_TUYA_ECC_CLIENT_AUTH        6       /* TLS Client Authentication and Server Authentication mode */


#define TUYA_OPERATOR_DISABLE           0x0
#define TUYA_OPERATOR_CUCC              0x01
#define TUYA_OPERATOR_CTCC              0x02
#define TUYA_OPERATOR_CMCC              0x04
#define TUYA_OPERATOR_CMCC_ANDLINK      0x08
#define TUYA_OPERATOR_ALL               (TUYA_OPERATOR_CUCC | TUYA_OPERATOR_CTCC | TUYA_OPERATOR_CMCC)

/*gateway platform*/
#define GW_RTL8196E     3
#define GW_RTL8197F     1
#define GW_RTL8711AM	2
#define GW_ROKIDK18     6

/* custom settings */
#define BUILD_DATE    "2023_07_10"
#define BUILD_TIME    "09_22_24"
#define GIT_USER    "ci_manage"
#define IOT_SDK_VER    "1.0.6"
#define SDK_BETA_VER    "beta.47"
#define PROJECT_NAME    "ty_ipc_wr_wl_linux_sdk"
#define TARGET_PLATFORM    "aarch64-openwrt-linux-gnu-gcc-6.4.1"
#define ENABLE_BASE_IOT_CONFIG 1
#define TUYA_IOT_DEBUG 1
#define ENABLE_LAN_ENCRYPTION 1
#define ENABLE_HTTP_TRUNK 1
#define ENABLE_ASTRO_TIMER 0
#define TUYA_REDUCE_BIN 0
#define TY_GPIO_TEST_V2 0

//
// 使能无线模式
//
#define WIFI_GW 1
#define TY_GET_RFTEST_STAT 0
#define TY_WIFI_FFC 0
#define TY_FFS_NETCFG 0
#define TY_PEGASUS_NETCFG 0

//
// 开启蓝牙功能
//
// CONFIG_TY_BT_MOD is not set
#define KV_FILE 1
#define KV_KEY_SEED "8710_2M"
#define KV_KEY_PROJECT_NAME "KV_KEY_PROJECT_NAME"
#define SHUTDOWN_MODE 1
#define LITTLE_END 1
#define ENABLE_NXP_SE050 0
#define TLS_MODE 4
#define TLS_SESSION 1
#define ENABLE_LAN_DEV 0
#define ENABLE_LAN_LINKAGE 0
#define ENABLE_SYS_RPC 0
#define TUYA_OPERATOR_TYPE 0x00
#define OPERATING_SYSTEM 100
#define TY_RTC 0
#define TY_WATCHDOG 1
#define ENABLE_STATION_AP_MODE 1
#define AP_SNIFFER_EN 0
#define ENABLE_AP_FAST_CONNECT 0
// CONFIG_ENABLE_WIFI_PROTECT is not set

//
// this is tuya monitor Kconfig
//
#define ENABLE_MONITOR_WORK 0

//
// this is tuya ai Kconfig
//
#define ENABLE_AI_DETECT 1
#define ENABLE_FACE_DETECTION 1

//
// this is ipc Kconfig
//
#define ENABLE_IPC 1
#define LOW_POWER_ENABLE 0
#define DB_EN_OLD_VER 0

//
// this is cloud stg Kconfig
//
#define ENABLE_REMOTE_EVENT 1
#define ENABLE_CLOUD_STORAGE 1

//
// this is tuya ipc common Kconfig
//
#define ENABLE_DOORBELL_STORAGE 1
#define ENABLE_VIDEO_MSG 1

//
// this is tuya local storage Kconfig
//
#define ENABLE_LOCAL_STORAGE 1

//
// this is tuya cloud operation Kconfig
//
#define ENABLE_CLOUD_OPERATION 1

//
// this is media service Kconfig
//
#define TUYA_P2P 4
#define ENABLE_CLOUD_STREAM 1
#define ENABLE_MQTT_P2P 1
#define ENABLE_MQTT_WEBRTC 1
#define IPC_SDK_VER "1.0.2"
#define ENABLE_P2P_ABILITY_CONTORL 1



/* default settings */

#ifndef WIFI_GW
#define WIFI_GW 0
#endif

#ifndef TUYA_IOT_DEBUG
#define TUYA_IOT_DEBUG 1
#endif

#ifndef KV_FILE
#define KV_FILE 1
#endif

#ifndef KV_SWAP_EQUAL_USER
#define KV_SWAP_EQUAL_USER 0
#endif

#ifndef ENABLE_LAN
#define ENABLE_LAN 1
#endif

#ifndef SHUTDOWN_MODE
#define SHUTDOWN_MODE 1
#endif

#ifndef LITTLE_END
#define LITTLE_END 1
#endif

#ifndef TLS_MODE
#define TLS_MODE TLS_TUYA_ECC_PSK
#endif

#ifndef ENABLE_LOCAL_LINKAGE
#define ENABLE_LOCAL_LINKAGE 0
#endif

#ifndef ENABLE_CLOUD_OPERATION
#define ENABLE_CLOUD_OPERATION 0
#endif

#ifndef ENABLE_SUBDEVICE
#define ENABLE_SUBDEVICE 0
#endif

#ifndef ENABLE_SIGMESH
#define ENABLE_SIGMESH 0
#endif

#ifndef ENABLE_ENGINEER_TO_NORMAL
#define ENABLE_ENGINEER_TO_NORMAL 0
#endif

#ifndef OPERATING_SYSTEM
#define OPERATING_SYSTEM SYSTEM_LINUX
#endif

#ifndef ENABLE_SYS_RPC
#define ENABLE_SYS_RPC 0
#endif

#ifndef TY_SECURITY_CHIP
#define TY_SECURITY_CHIP 0
#endif


#ifndef ENABLE_IPC
#define ENABLE_IPC 0
#endif


#ifndef ENABLE_AI_SPEAKER
#define ENABLE_AI_SPEAKER 0
#endif

#ifndef ENABLE_EXTRA_MQTT
#define ENABLE_EXTRA_MQTT 0
#endif


#ifndef TY_RTC
#define TY_RTC 0
#endif

#ifndef TY_GPIO_TEST_V2
#define TY_GPIO_TEST_V2 1
#endif

#ifndef RELIABLE_TRANSFER
#define RELIABLE_TRANSFER 0
#endif

#ifndef TY_WATCHDOG
#define TY_WATCHDOG 0
#endif

#ifndef ENABLE_LAN_ENCRYPTION
#define ENABLE_LAN_ENCRYPTION 1
#endif

#ifndef TUYA_OPERATOR_TYPE
#define TUYA_OPERATOR_TYPE TUYA_OPERATOR_DISABLE
#endif

#ifndef ENABLE_HTTP_TRUNK
#define ENABLE_HTTP_TRUNK 0
#endif

#ifndef ENABLE_AP_FAST_CONNECT
#define ENABLE_AP_FAST_CONNECT 0
#endif

#ifndef TY_WIFI_FFC
#define TY_WIFI_FFC 0
#endif

#ifndef TY_BT_MOD
#define TY_BT_MOD 0
#endif

#if defined(TY_BT_MOD) && TY_BT_MOD == 1
#ifndef BT_NETCFG
#define BT_NETCFG 1
#endif
#ifndef BT_CTRL
#define BT_CTRL 1
#endif
#ifndef BT_REMOTE_CTRL
#define BT_REMOTE_CTRL 1
#endif
#ifndef MF_BT
#define MF_BT 1
#endif
#ifndef BT_VIRTUAL
#define BT_VIRTUAL 0
#endif
#ifndef BT_ACTIVE
#define BT_ACTIVE 1
#endif

#endif

#ifndef TY_FFS_NETCFG
#define TY_FFS_NETCFG 0
#endif

#ifndef TY_PEGASUS_NETCFG
#define TY_PEGASUS_NETCFG 0
#endif


#ifndef ENABLE_LAN_LINKAGE
#define ENABLE_LAN_LINKAGE 0
#endif

#ifndef ENABLE_LAN_LINKAGE_MASTER
#define ENABLE_LAN_LINKAGE_MASTER 0
#endif

#ifndef ENABLE_LAN_DEV
#define ENABLE_LAN_DEV 0
#endif

#ifndef ENABLE_LAN_DEV_MASTER
#define ENABLE_LAN_DEV_MASTER 0
#endif

#ifndef RECORD_DB
#define RECORD_DB 0
#endif

#if (ENABLE_AI_SPEAKER == 1)

#ifdef ENABLE_EXTRA_MQTT
#undef ENABLE_EXTRA_MQTT
#endif
#define ENABLE_EXTRA_MQTT 1

#endif


#if (ENABLE_IPC == 1)

#ifdef ENABLE_EXTRA_MQTT
#undef ENABLE_EXTRA_MQTT
#endif
#define ENABLE_EXTRA_MQTT 1


#ifndef TUYA_P2P
#define TUYA_P2P 1
#endif

#ifndef ENABLE_ECHO_SHOW
#define ENABLE_ECHO_SHOW 0
#endif

#ifndef ENABLE_CHROMECAST
#define ENABLE_CHROMECAST 0
#endif

#ifndef ENABLE_CLOUD_STORAGE
#define ENABLE_CLOUD_STORAGE 0
#endif


#ifndef LOW_POWER_ENABLE
#define LOW_POWER_ENABLE 0
#endif

#ifndef TUYA_REDUCE_BIN
#define TUYA_REDUCE_BIN 0
#endif

#ifndef TUYA_BLE_VER
#define TUYA_BLE_VER 3
#endif

//#if (ENABLE_IPC == 1)
#endif

/* settings dependency check */

#ifndef BUILD_DATE
#err "BUILD_DATE is not defined"
#endif

#ifndef BUILD_TIME
#err "BUILD_TIME is not defined"
#endif

#ifndef GIT_USER
#err "GIT_USER is not defined"
#endif

#ifndef IOT_SDK_VER
#err "IOT_SDK_VER is not defined"
#endif

#ifndef PROJECT_NAME
#err "PROJECT_NAME is not defined"
#endif

#ifndef TARGET_PLATFORM
#err "TARGET_PLATFORM is not defined"
#endif


#if (ENABLE_IPC == 1) && (ENABLE_CLOUD_STORAGE == 1) && (ENABLE_CLOUD_OPERATION == 0)
#err "cloud storage is based on cloud operation"
#endif

#ifdef __cplusplus
}
#endif

#endif // TUYA_IOT_CONFIG_H
