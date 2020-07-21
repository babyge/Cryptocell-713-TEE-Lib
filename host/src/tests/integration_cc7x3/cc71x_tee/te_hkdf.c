/*
 * Copyright (c) 2001-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause OR Arm's non-OSI source license
 *
 */

#include <stdio.h>
#include <stdint.h>

#include "test_engine.h"

#include "cc_hkdf.h"
#include "te_hkdf.h"

/******************************************************************
 * Defines
 ******************************************************************/
#define HKDF_MAX_IKM_SIZE            512
#define HKDF_MAX_SALT_SIZE           512
#define HKDF_MAX_INFO_SIZE          1024 /*128*/
#define HKDF_MAX_PRK_SIZE           2048
#define HKDF_MAX_OKM_SIZE           4096

/******************************************************************
 * Enums
 ******************************************************************/

/******************************************************************
 * Types
 ******************************************************************/
typedef struct HkdfVector_t{
    uint32_t                inputKeyLen;
    uint32_t                saltLen;
    uint32_t                infoLen;
    uint32_t                outputLen;
    bool                    isStrong;
    CCHkdfHashOpMode_t      hash_mode;
    uint8_t                 inputKey[HKDF_MAX_IKM_SIZE];
    uint8_t                 salt[HKDF_MAX_SALT_SIZE];
    uint8_t                 info[HKDF_MAX_INFO_SIZE];
    uint8_t                 ouputKey[HKDF_MAX_OKM_SIZE];
    uint8_t                 ouputKeyRef[HKDF_MAX_OKM_SIZE];
} HkdfVector_t;

/******************************************************************
 * Externs
 ******************************************************************/

/******************************************************************
 * Globals
 ******************************************************************/


static HkdfVector_t hkdf_vector_short_strong = {
    .inputKeyLen = 32,
    .saltLen = 10,
    .infoLen = 12,
    .outputLen = 13,
    .isStrong = true,
    .hash_mode = CC_HKDF_HASH_SHA256_mode,
    .inputKey = {0x6c, 0x40, 0x63, 0x33, 0xe9, 0xca, 0xd7, 0x2a, 0x9b, 0xb6, 0xeb, 0xf8, 0x81, 0x02, 0xaf, 0x5c,
                 0xb7, 0x2e, 0x7d, 0x06, 0x50, 0xbb, 0xbd, 0x70, 0x50, 0x6f, 0x94, 0x6a, 0x6e, 0xc2, 0x85, 0xd0, },
    .salt = {0x27, 0xd5, 0x6f, 0x0b, 0x88, 0xc4, 0x18, 0x8a, 0x69, 0x3c,},
    .info = {0x81, 0x94, 0x86, 0x62, 0x19, 0x13, 0x97, 0x96, 0x7d, 0x18, 0xcd, 0x2e, },
    .ouputKey = {},
    .ouputKeyRef = {0x55, 0x6b, 0x49, 0x47, 0x86, 0xca, 0x73, 0x46, 0xa1, 0xd1, 0x62, 0x82, 0xdf,}
};

static HkdfVector_t hkdf_vector_long_not_strong = {
    .inputKeyLen = 100,
    .saltLen = 123,
    .infoLen = 50,
    .outputLen = 200,
    .isStrong = false,
    .hash_mode = CC_HKDF_HASH_SHA1_mode,
    .inputKey = {0x43, 0x61, 0xf5, 0x33, 0x98, 0x13, 0xfd, 0xb8, 0x2a, 0xf3, 0x4a, 0xbb, 0x66, 0x03, 0xab, 0x2a,
                 0xbb, 0xaa, 0x1a, 0x68, 0x53, 0x89, 0xa7, 0xb0, 0x87, 0x9f, 0x02, 0xd3, 0x83, 0xa5, 0x67, 0x1a,
                 0x58, 0x3c, 0x6e, 0xbf, 0xc1, 0x3a, 0x09, 0xa7, 0xe2, 0xf0, 0x08, 0x0c, 0x02, 0x2f, 0xc7, 0x22,
                 0x6e, 0x46, 0x15, 0x2e, 0x00, 0x95, 0x1e, 0x70, 0xf5, 0x5d, 0xce, 0x34, 0xa3, 0x0a, 0x69, 0x47,
                 0x50, 0xbb, 0x01, 0x6b, 0xb3, 0xd8, 0xe6, 0x50, 0x13, 0x0d, 0x85, 0x95, 0x46, 0xfa, 0x84, 0x51,
                 0x34, 0x20, 0x5f, 0xd1, 0x90, 0xa1, 0xe9, 0xf8, 0x70, 0xbe, 0x23, 0x62, 0xe3, 0x38, 0x94, 0xb6,
                 0x55, 0xcc, 0x31, 0x99,},
    .salt = {0x59, 0x35, 0x8d, 0x5f, 0x70, 0x85, 0x7f, 0x70, 0x66, 0x60, 0xbe, 0x71, 0x09, 0xe3, 0xfa, 0x58,
            0x3f, 0x2b, 0x15, 0xe8, 0xd9, 0x71, 0x7e, 0x6d, 0xd6, 0xe8, 0x31, 0x8a, 0xe8, 0x24, 0x4e, 0x6e,
            0xc6, 0x4b, 0xbf, 0x41, 0x36, 0x69, 0x7b, 0x14, 0x86, 0x62, 0x89, 0x28, 0x7d, 0x1c, 0x61, 0xec,
            0x03, 0x3c, 0x84, 0x3a, 0x31, 0x52, 0x73, 0x33, 0x21, 0x78, 0xd4, 0xf4, 0x35, 0x68, 0x3d, 0x1e,
            0xa7, 0x20, 0xa6, 0xcc, 0x8c, 0x09, 0xd7, 0xcb, 0xf2, 0x9e, 0x8e, 0x11, 0x7d, 0x3e, 0xa3, 0x8d,
            0xad, 0x96, 0xc0, 0xcf, 0x2e, 0xa9, 0x0e, 0xfa, 0x5d, 0x69, 0x9c, 0xfc, 0xdb, 0xf4, 0x29, 0x19,
            0x65, 0x5e, 0x14, 0x83, 0xe5, 0x0a, 0xe2, 0x26, 0x6b, 0x01, 0x2c, 0x5d, 0x5e, 0xb7, 0xf5, 0x96,
            0x03, 0x33, 0xf6, 0x1b, 0x69, 0xef, 0x64, 0x4b, 0xb2, 0x8d, 0xf8,},
    .info = {0x0a, 0x0b, 0x85, 0x24, 0x5e, 0x27, 0x8a, 0x5e, 0xba, 0xbd, 0x69, 0x49, 0x99, 0x27, 0xda, 0xcc,
            0xde, 0xc2, 0x98, 0xb4, 0xe7, 0xa9, 0x9e, 0xf1, 0xd9, 0x3b, 0x59, 0x37, 0x44, 0x25, 0x8e, 0xfb,
            0xef, 0x7b, 0x56, 0x63, 0x59, 0x06, 0x04, 0xc6, 0x29, 0x1c, 0xf8, 0xf3, 0x13, 0x99, 0x48, 0x27,
            0xa1, 0x5b,                                                                                     },
    .ouputKey = {},
    .ouputKeyRef = {0x42, 0xfc, 0x7c, 0xc5, 0xba, 0x68, 0x24, 0xad, 0x16, 0x9a, 0x40, 0x75, 0x6b, 0x80, 0x8b, 0xee,
            0x8e, 0x43, 0xe5, 0x50, 0x5e, 0xcc, 0x76, 0x79, 0xd4, 0xe1, 0x52, 0x62, 0x73, 0x76, 0x89, 0x3c,
            0x02, 0x5e, 0xfa, 0x17, 0x18, 0x8c, 0xa0, 0x04, 0x8b, 0x1e, 0x0b, 0xa1, 0xa8, 0x61, 0x2f, 0xcb,
            0xbc, 0xea, 0x66, 0xc2, 0x25, 0xe1, 0x97, 0x4a, 0xfe, 0x1d, 0x69, 0x10, 0x12, 0xec, 0xea, 0xe8,
            0xb2, 0x34, 0xeb, 0x74, 0xed, 0x83, 0x72, 0xec, 0x57, 0x38, 0x89, 0x43, 0x9e, 0xa0, 0x70, 0xd9,
            0x05, 0xdf, 0x52, 0xab, 0xea, 0xff, 0x35, 0xca, 0xeb, 0x0e, 0xfb, 0x86, 0x2e, 0xa4, 0x69, 0x51,
            0x5f, 0x3c, 0xe5, 0x1f, 0xea, 0x2d, 0x96, 0xaf, 0x71, 0x75, 0x04, 0xcd, 0x85, 0xd7, 0x6a, 0xa2,
            0xe6, 0xc6, 0xc8, 0x6b, 0x21, 0x6c, 0x47, 0x5f, 0x3d, 0xc9, 0x71, 0x98, 0xa1, 0x53, 0x49, 0x7a,
            0x6a, 0x69, 0xe4, 0xfc, 0x2f, 0x2f, 0xd8, 0x66, 0x45, 0x22, 0x41, 0xc1, 0x39, 0x52, 0x5b, 0x54,
            0x7c, 0xeb, 0xbd, 0xc5, 0xf3, 0x49, 0xf8, 0x18, 0x10, 0xb6, 0x83, 0xb7, 0x33, 0x22, 0xbd, 0xad,
            0x38, 0xe6, 0x96, 0x68, 0xfa, 0x26, 0xb6, 0x16, 0xcd, 0xd4, 0x46, 0xdc, 0x46, 0x16, 0x15, 0xf4,
            0xf0, 0x70, 0xd3, 0xf6, 0xad, 0x35, 0xb3, 0x6e, 0xc1, 0x60, 0x76, 0xa3, 0xcc, 0x1b, 0xdf, 0x57,
            0x8c, 0x56, 0x2a, 0xe2, 0x16, 0xf6, 0xbb, 0x4b,                                                 }
};

/******************************************************************
 * Static Prototypes
 ******************************************************************/
static TE_rc_t hkdf_prepare(void *pContext);
static TE_rc_t hkdf_execute(void *pContext);
static TE_rc_t hkdf_verify(void *pContext);
static TE_rc_t hkdf_clean(void *pContext);

/******************************************************************
 * Static functions
 ******************************************************************/
static TE_rc_t hkdf_prepare(void *pContext)
{
    TE_rc_t res = TE_RC_SUCCESS;
    TE_UNUSED(pContext);

    goto bail;
bail:
    return res;
}

static TE_rc_t hkdf_execute(void *pContext)
{
    TE_rc_t res = TE_RC_SUCCESS;
    HkdfVector_t *testVector = (HkdfVector_t *)pContext;
    TE_perfIndex_t cookie;

    if (testVector->isStrong) {
        cookie = TE_perfOpenNewEntry("hkdf", "strong");
    } else {
        cookie = TE_perfOpenNewEntry("hkdf", "not_strong");
    }

    /* test HKDF API */
    TE_ASSERT(CC_HkdfKeyDerivFunc(
            testVector->hash_mode,
            testVector->salt, testVector->saltLen,
            testVector->inputKey, testVector->inputKeyLen,
            testVector->info, testVector->infoLen,
            testVector->ouputKey, testVector->outputLen,
            testVector->isStrong)== CC_OK);

    TE_perfCloseEntry(cookie);

    goto bail;

bail:
    return res;
}

static TE_rc_t hkdf_verify(void *pContext)
{
    TE_rc_t res = TE_RC_SUCCESS;
    HkdfVector_t *testVector = (HkdfVector_t *)pContext;

    TE_ASSERT( memcmp(testVector->ouputKey,
                      testVector->ouputKeyRef,
                      testVector->outputLen) == 0);

    goto bail;
bail:
    return res;
}

static TE_rc_t hkdf_clean(void *pContext)
{
    TE_rc_t res = TE_RC_SUCCESS;
    TE_UNUSED(pContext);

    goto bail;
bail:
    return res;
}

/******************************************************************
 * Public
 ******************************************************************/
int TE_init_hkdf_test(void)
{
    TE_rc_t res = TE_RC_SUCCESS;

    TE_perfEntryInit("hkdf", "short");
    TE_perfEntryInit("hkdf", "long");
    TE_perfEntryInit("hkdf", "strong");
    TE_perfEntryInit("hkdf", "not_strong");



    TE_ASSERT(TE_registerFlow("hkdf",
                              "short",
                              "strong",
                              hkdf_prepare,
                              hkdf_execute,
                              hkdf_verify,
                              hkdf_clean,
                              &hkdf_vector_short_strong) == TE_RC_SUCCESS);

    TE_ASSERT(TE_registerFlow("hkdf",
                              "long",
                              "not_strong",
                              hkdf_prepare,
                              hkdf_execute,
                              hkdf_verify,
                              hkdf_clean,
                              &hkdf_vector_long_not_strong) == TE_RC_SUCCESS);

    goto bail;

bail:
    return res;
}
