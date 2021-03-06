/*
 * Copyright (c) 2001-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause OR Arm's non-OSI source license
 *
 */

#ifndef _CC71X_TEE_INTEGRATION_TE_SM2_H
#define _CC71X_TEE_INTEGRATION_TE_SM2_H
/*!
  @file
  @brief This file contains SM2 definitions for test usage.

  This file defines:
      <ol><li>SM2 mapping used for SM2 integration tests.</li>
      <li>Declarations of SM2  integration test functions.</li></ol>
 */

/*!
 @addtogroup sm2_apis
 @{
 */

/******************************************************************
 * Defines
 ******************************************************************/

/******************************************************************
 * Types
 ******************************************************************/

/******************************************************************
 * Externs
 ******************************************************************/

/******************************************************************
 * Globals
 ******************************************************************/

/******************************************************************
 * Functions
 ******************************************************************/

/*!
@brief This function allocates and initializes the sm2 test resources.


@return \c zero on success.
@return A non-zero value on failure.
*/
int TE_init_sm2_test(void);

/*!
 @}
 */
#endif /* _CC71X_TEE_INTEGRATION_TE_SM2_H */

