/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef H_NIMBLE_OPT_
#define H_NIMBLE_OPT_

/** HOST / CONTROLLER: Maximum number of concurrent connections. */

#ifndef NIMBLE_OPT_MAX_CONNECTIONS
#define NIMBLE_OPT_MAX_CONNECTIONS              1
#endif


/**
 * HOST / CONTROLLER: Supported GAP roles.  By default, all four roles are
 * enabled.
 */

#ifndef NIMBLE_OPT_ROLE_CENTRAL
#define NIMBLE_OPT_ROLE_CENTRAL                 1
#endif

#ifndef NIMBLE_OPT_ROLE_PERIPHERAL
#define NIMBLE_OPT_ROLE_PERIPHERAL              1
#endif

#ifndef NIMBLE_OPT_ROLE_BROADCASTER
#define NIMBLE_OPT_ROLE_BROADCASTER             1
#endif

#ifndef NIMBLE_OPT_ROLE_OBSERVER   
#define NIMBLE_OPT_ROLE_OBSERVER                1
#endif

#ifndef NIMBLE_OPT_WHITELIST
#define NIMBLE_OPT_WHITELIST                    1
#endif

/** HOST / CONTROLLER: Security manager.  Disabled by default. */

#ifndef NIMBLE_OPT_SM
#define NIMBLE_OPT_SM                           0
#endif


/** HOST: Supported GATT procedures.  By default, all are enabled. */

#ifndef NIMBLE_OPT_GATT_DISC_ALL_SVCS
#define NIMBLE_OPT_GATT_DISC_ALL_SVCS           1
#endif

#ifndef NIMBLE_OPT_GATT_DISC_SVC_UUID
#define NIMBLE_OPT_GATT_DISC_SVC_UUID           1
#endif

#ifndef NIMBLE_OPT_GATT_FIND_INC_SVCS
#define NIMBLE_OPT_GATT_FIND_INC_SVCS           1
#endif

#ifndef NIMBLE_OPT_GATT_DISC_ALL_CHRS
#define NIMBLE_OPT_GATT_DISC_ALL_CHRS           1
#endif

#ifndef NIMBLE_OPT_GATT_DISC_CHR_UUID
#define NIMBLE_OPT_GATT_DISC_CHR_UUID           1
#endif

#ifndef NIMBLE_OPT_GATT_DISC_ALL_DSCS
#define NIMBLE_OPT_GATT_DISC_ALL_DSCS           1
#endif

#ifndef NIMBLE_OPT_GATT_READ         
#define NIMBLE_OPT_GATT_READ                    1
#endif

#ifndef NIMBLE_OPT_GATT_READ_UUID    
#define NIMBLE_OPT_GATT_READ_UUID               1
#endif

#ifndef NIMBLE_OPT_GATT_READ_LONG    
#define NIMBLE_OPT_GATT_READ_LONG               1
#endif

#ifndef NIMBLE_OPT_GATT_READ_MULT    
#define NIMBLE_OPT_GATT_READ_MULT               1
#endif

#ifndef NIMBLE_OPT_GATT_WRITE_NO_RSP 
#define NIMBLE_OPT_GATT_WRITE_NO_RSP            1
#endif

#ifndef NIMBLE_OPT_GATT_SIGNED_WRITE
#define NIMBLE_OPT_GATT_SIGNED_WRITE            1
#endif

#ifndef NIMBLE_OPT_GATT_WRITE              
#define NIMBLE_OPT_GATT_WRITE                   1
#endif

#ifndef NIMBLE_OPT_GATT_WRITE_LONG         
#define NIMBLE_OPT_GATT_WRITE_LONG              1
#endif

#ifndef NIMBLE_OPT_GATT_WRITE_RELIABLE     
#define NIMBLE_OPT_GATT_WRITE_RELIABLE          1
#endif

#ifndef NIMBLE_OPT_GATT_NOTIFY             
#define NIMBLE_OPT_GATT_NOTIFY                  1
#endif

#ifndef NIMBLE_OPT_GATT_INDICATE           
#define NIMBLE_OPT_GATT_INDICATE                1
#endif


/** HOST: Supported server ATT commands. */

#ifndef NIMBLE_OPT_ATT_SVR_FIND_INFO
#define NIMBLE_OPT_ATT_SVR_FIND_INFO            1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_FIND_TYPE
#define NIMBLE_OPT_ATT_SVR_FIND_TYPE            1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_READ_TYPE
#define NIMBLE_OPT_ATT_SVR_READ_TYPE            1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_READ
#define NIMBLE_OPT_ATT_SVR_READ                 1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_READ_BLOB
#define NIMBLE_OPT_ATT_SVR_READ_BLOB            1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_READ_MULT
#define NIMBLE_OPT_ATT_SVR_READ_MULT            1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_READ_GROUP_TYPE
#define NIMBLE_OPT_ATT_SVR_READ_GROUP_TYPE      1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_WRITE
#define NIMBLE_OPT_ATT_SVR_WRITE                1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_WRITE_NO_RSP
#define NIMBLE_OPT_ATT_SVR_WRITE_NO_RSP         1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_SIGNED_WRITE
#define NIMBLE_OPT_ATT_SVR_SIGNED_WRITE         1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_PREP_WRITE
#define NIMBLE_OPT_ATT_SVR_PREP_WRITE           1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_EXEC_WRITE
#define NIMBLE_OPT_ATT_SVR_EXEC_WRITE           1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_NOTIFY  
#define NIMBLE_OPT_ATT_SVR_NOTIFY               1
#endif

#ifndef NIMBLE_OPT_ATT_SVR_INDICATE
#define NIMBLE_OPT_ATT_SVR_INDICATE             1
#endif

/*** CONTROLLER ***/

/* 
 * Sleep clock accuracy (sca). This is the amount of drift in the system during 
 * when the device is sleeping (in parts per million).
 *
 * NOTE: the master sca is an enumerated value based on the sca. Rather than
 * have a piece of code calculate this value, the developer must set this
 * value based on the value of the SCA using the following table:
 * 
 *  SCA between 251 and 500 ppm (inclusive); master sca = 0
 *  SCA between 151 and 250 ppm (inclusive); master sca = 1
 *  SCA between 101 and 150 ppm (inclusive); master sca = 2
 *  SCA between 76 and 100 ppm (inclusive); master sca = 3
 *  SCA between 51 and 75 ppm (inclusive); master sca = 4
 *  SCA between 31 and 50 ppm (inclusive); master sca = 5
 *  SCA between 21 and 30 ppm (inclusive); master sca = 6
 *  SCA between 0 and 20 ppm (inclusive); master sca = 7
 * 
 *  For example:
 *      if your clock drift is 101 ppm, your master should be set to 2.
 *      if your clock drift is 20, your master sca should be set to 7.
 * 
 *  The values provided below are merely meant to be an example and should
 *  be replaced by values appropriate for your platform.
 */
#ifndef NIMBLE_OPT_LL_OUR_SCA
#define NIMBLE_OPT_LL_OUR_SCA                   (60)    /* in ppm */
#endif

#ifndef NIMBLE_OPT_LL_MASTER_SCA
#define NIMBLE_OPT_LL_MASTER_SCA                (4)
#endif

/* transmit power level */
#ifndef NIMBLE_OPT_LL_TX_PWR_DBM
#define NIMBLE_OPT_LL_TX_PWR_DBM                (0)
#endif

/* 
 * Determines the maximum rate at which the controller will send the
 * number of completed packets event to the host. Rate is in os time ticks
 */
#ifndef NIMBLE_OPT_NUM_COMP_PKT_RATE
#define NIMBLE_OPT_NUM_COMP_PKT_RATE    ((2000 * OS_TICKS_PER_SEC) / 1000)
#endif

/* Manufacturer ID. Should be set to unique ID per manufacturer */
#ifndef NIMBLE_OPT_LL_MFRG_ID
#define NIMBLE_OPT_LL_MFRG_ID                   (0xFFFF)
#endif

/* 
 * Configuration items for the number of duplicate advertisers and the
 * number of advertisers from which we have heard a scan response.
 */
#ifndef NIMBLE_OPT_LL_NUM_SCAN_DUP_ADVS
#define NIMBLE_OPT_LL_NUM_SCAN_DUP_ADVS         (8)
#endif

#ifndef NIMBLE_OPT_LL_NUM_SCAN_RSP_ADVS
#define NIMBLE_OPT_LL_NUM_SCAN_RSP_ADVS         (8)
#endif

/* Size of the LL whitelist */
#ifndef NIMBLE_OPT_LL_WHITELIST_SIZE
#define NIMBLE_OPT_LL_WHITELIST_SIZE            (8)
#endif

/* 
 * Data length management definitions for connections. These define the maximum
 * size of the PDU's that will be sent and/or received in a connection. 
 */
#ifndef NIMBLE_OPT_LL_SUPP_MAX_RX_BYTES
#define NIMBLE_OPT_LL_SUPP_MAX_RX_BYTES         (251)
#endif

#ifndef NIMBLE_OPT_LL_SUPP_MAX_TX_BYTES
#define NIMBLE_OPT_LL_SUPP_MAX_TX_BYTES         (251)
#endif

#ifndef NIMBLE_OPT_LL_CONN_INIT_MAX_TX_BYTES
#define NIMBLE_OPT_LL_CONN_INIT_MAX_TX_BYTES    (251)
#endif

/* The number of slots that will be allocated to each connection */
#ifndef NIMBLE_OPT_LL_CONN_INIT_SLOTS
#define NIMBLE_OPT_LL_CONN_INIT_SLOTS           (2)
#endif

/* The number of random bytes to store */
#ifndef NIMBLE_OPT_LL_RNG_BUFSIZE
#define NIMBLE_OPT_LL_RNG_BUFSIZE               (32)
#endif

/* Include automatically-generated settings. */
#include "nimble/nimble_opt_auto.h"

#endif