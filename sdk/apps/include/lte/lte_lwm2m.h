/****************************************************************************
 * apps/include/lte/lte_lwm2m.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __APPS_INCLUDE_LTE_LTE_LWM2M_H
#define __APPS_INCLUDE_LTE_LTE_LWM2M_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include <stdint.h>
#include <nuttx/wireless/lte/lte.h>
#include <nuttx/wireless/lte/lte_lwm2m.h>

#ifdef __cplusplus
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

int lte_commit_m2msetting(void);

int lte_set_report_m2mwrite(lwm2mstub_write_cb_t cb);
int lte_set_report_m2mread(lwm2mstub_read_cb_t cb);
int lte_set_report_m2mexec(lwm2mstub_exec_cb_t cb);
int lte_set_report_m2movstart(lwm2mstub_ovstart_cb_t cb);
int lte_set_report_m2movstop(lwm2mstub_ovstop_cb_t cb);
int lte_set_report_m2mserverop(lwm2mstub_serverop_cb_t cb);
int lte_set_report_m2mfwupdate(lwm2mstub_fwupstate_cb_t cb);

#undef EXTERN
#ifdef __cplusplus
}
#endif

#endif  /* __APPS_INCLUDE_LTE_LTE_LWM2M_H */
