#ifndef __LAN_DEV_BASE_MASTER_H
#define __LAN_DEV_BASE_MASTER_H

#include "tuya_cloud_com_defs.h"
#include "lan_cluster_api.h"


#ifdef __cplusplus
	extern "C" {
#endif


/***********************************************************
*************************micro define***********************
***********************************************************/


/***********************************************************
*************************variable define********************
***********************************************************/

/***********************************************************
*************************function define********************
***********************************************************/

VOID lan_dev_base_master_on_mqtt_online(IN BOOL_T online);

#ifdef __cplusplus
}
#endif
#endif

