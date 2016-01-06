/**
 * Copyright (c) 2015 Runtime Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef H_HOST_TEST_
#define H_HOST_TEST_

#include <inttypes.h>
struct os_mbuf;

void ble_hs_test_pkt_txed(struct os_mbuf *om);
void ble_hs_test_hci_txed(uint8_t *cmdbuf);

int l2cap_test_all(void);
int ble_att_svr_test_all(void);
int ble_att_clt_test_all(void);
int ble_host_hci_test_all(void);
int ble_hs_conn_test_all(void);
int ble_os_test_all(void);
int ble_uuid_test_all(void);
int ble_gatt_disc_s_test_all(void);
int ble_gatt_disc_c_test_all(void);
int ble_gatt_read_test_all(void);
int ble_gatt_write_test_all(void);
int ble_gatt_conn_test_all(void);
int ble_hs_adv_test_all(void);
int ble_gatts_reg_test_all(void);
int ble_gatts_notify_test_all(void);
int ble_gatt_find_s_test_all(void);

#endif
