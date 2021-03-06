/*
 * Copyright (c) 2001-2019, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause OR Arm's non-OSI source license
 *
 */

#ifndef  _CC_FIPS_RSA_KAT_DATA_H
#define  _CC_FIPS_RSA_KAT_DATA_H

/*
vectors taken from RSA laboratories.  RSA-OAEP and RSA-PSS test vectors (.zip file)
web site: http://www.emc.com/emc-plus/rsa-labs/standards-initiatives/pkcs-rsa-cryptography-standard.htm
*/
// OAEP
// RSA modulus n:
static const uint8_t fipsRsaOaepKat2048Modulus[] = {
0xae, 0x45, 0xed, 0x56, 0x01, 0xce, 0xc6, 0xb8, 0xcc, 0x05, 0xf8, 0x03, 0x93, 0x5c, 0x67, 0x4d,
0xdb, 0xe0, 0xd7, 0x5c, 0x4c, 0x09, 0xfd, 0x79, 0x51, 0xfc, 0x6b, 0x0c, 0xae, 0xc3, 0x13, 0xa8,
0xdf, 0x39, 0x97, 0x0c, 0x51, 0x8b, 0xff, 0xba, 0x5e, 0xd6, 0x8f, 0x3f, 0x0d, 0x7f, 0x22, 0xa4,
0x02, 0x9d, 0x41, 0x3f, 0x1a, 0xe0, 0x7e, 0x4e, 0xbe, 0x9e, 0x41, 0x77, 0xce, 0x23, 0xe7, 0xf5,
0x40, 0x4b, 0x56, 0x9e, 0x4e, 0xe1, 0xbd, 0xcf, 0x3c, 0x1f, 0xb0, 0x3e, 0xf1, 0x13, 0x80, 0x2d,
0x4f, 0x85, 0x5e, 0xb9, 0xb5, 0x13, 0x4b, 0x5a, 0x7c, 0x80, 0x85, 0xad, 0xca, 0xe6, 0xfa, 0x2f,
0xa1, 0x41, 0x7e, 0xc3, 0x76, 0x3b, 0xe1, 0x71, 0xb0, 0xc6, 0x2b, 0x76, 0x0e, 0xde, 0x23, 0xc1,
0x2a, 0xd9, 0x2b, 0x98, 0x08, 0x84, 0xc6, 0x41, 0xf5, 0xa8, 0xfa, 0xc2, 0x6b, 0xda, 0xd4, 0xa0,
0x33, 0x81, 0xa2, 0x2f, 0xe1, 0xb7, 0x54, 0x88, 0x50, 0x94, 0xc8, 0x25, 0x06, 0xd4, 0x01, 0x9a,
0x53, 0x5a, 0x28, 0x6a, 0xfe, 0xb2, 0x71, 0xbb, 0x9b, 0xa5, 0x92, 0xde, 0x18, 0xdc, 0xf6, 0x00,
0xc2, 0xae, 0xea, 0xe5, 0x6e, 0x02, 0xf7, 0xcf, 0x79, 0xfc, 0x14, 0xcf, 0x3b, 0xdc, 0x7c, 0xd8,
0x4f, 0xeb, 0xbb, 0xf9, 0x50, 0xca, 0x90, 0x30, 0x4b, 0x22, 0x19, 0xa7, 0xaa, 0x06, 0x3a, 0xef,
0xa2, 0xc3, 0xc1, 0x98, 0x0e, 0x56, 0x0c, 0xd6, 0x4a, 0xfe, 0x77, 0x95, 0x85, 0xb6, 0x10, 0x76,
0x57, 0xb9, 0x57, 0x85, 0x7e, 0xfd, 0xe6, 0x01, 0x09, 0x88, 0xab, 0x7d, 0xe4, 0x17, 0xfc, 0x88,
0xd8, 0xf3, 0x84, 0xc4, 0xe6, 0xe7, 0x2c, 0x3f, 0x94, 0x3e, 0x0c, 0x31, 0xc0, 0xc4, 0xa5, 0xcc,
0x36, 0xf8, 0x79, 0xd8, 0xa3, 0xac, 0x9d, 0x7d, 0x59, 0x86, 0x0e, 0xaa, 0xda, 0x6b, 0x83, 0xbb
};

// RSA public exponent e:
static const uint8_t fipsRsaOaepKatPubExponent[] = {0x01, 0x00, 0x01};

// RSA private exponent d:
static const uint8_t fipsRsaOaepKat2048PrivExpD[] =  {
0x05, 0x6b, 0x04, 0x21, 0x6f, 0xe5, 0xf3, 0x54, 0xac, 0x77, 0x25, 0x0a, 0x4b, 0x6b, 0x0c, 0x85,
0x25, 0xa8, 0x5c, 0x59, 0xb0, 0xbd, 0x80, 0xc5, 0x64, 0x50, 0xa2, 0x2d, 0x5f, 0x43, 0x8e, 0x59,
0x6a, 0x33, 0x3a, 0xa8, 0x75, 0xe2, 0x91, 0xdd, 0x43, 0xf4, 0x8c, 0xb8, 0x8b, 0x9d, 0x5f, 0xc0,
0xd4, 0x99, 0xf9, 0xfc, 0xd1, 0xc3, 0x97, 0xf9, 0xaf, 0xc0, 0x70, 0xcd, 0x9e, 0x39, 0x8c, 0x8d,
0x19, 0xe6, 0x1d, 0xb7, 0xc7, 0x41, 0x0a, 0x6b, 0x26, 0x75, 0xdf, 0xbf, 0x5d, 0x34, 0x5b, 0x80,
0x4d, 0x20, 0x1a, 0xdd, 0x50, 0x2d, 0x5c, 0xe2, 0xdf, 0xcb, 0x09, 0x1c, 0xe9, 0x99, 0x7b, 0xbe,
0xbe, 0x57, 0x30, 0x6f, 0x38, 0x3e, 0x4d, 0x58, 0x81, 0x03, 0xf0, 0x36, 0xf7, 0xe8, 0x5d, 0x19,
0x34, 0xd1, 0x52, 0xa3, 0x23, 0xe4, 0xa8, 0xdb, 0x45, 0x1d, 0x6f, 0x4a, 0x5b, 0x1b, 0x0f, 0x10,
0x2c, 0xc1, 0x50, 0xe0, 0x2f, 0xee, 0xe2, 0xb8, 0x8d, 0xea, 0x4a, 0xd4, 0xc1, 0xba, 0xcc, 0xb2,
0x4d, 0x84, 0x07, 0x2d, 0x14, 0xe1, 0xd2, 0x4a, 0x67, 0x71, 0xf7, 0x40, 0x8e, 0xe3, 0x05, 0x64,
0xfb, 0x86, 0xd4, 0x39, 0x3a, 0x34, 0xbc, 0xf0, 0xb7, 0x88, 0x50, 0x1d, 0x19, 0x33, 0x03, 0xf1,
0x3a, 0x22, 0x84, 0xb0, 0x01, 0xf0, 0xf6, 0x49, 0xea, 0xf7, 0x93, 0x28, 0xd4, 0xac, 0x5c, 0x43,
0x0a, 0xb4, 0x41, 0x49, 0x20, 0xa9, 0x46, 0x0e, 0xd1, 0xb7, 0xbc, 0x40, 0xec, 0x65, 0x3e, 0x87,
0x6d, 0x09, 0xab, 0xc5, 0x09, 0xae, 0x45, 0xb5, 0x25, 0x19, 0x01, 0x16, 0xa0, 0xc2, 0x61, 0x01,
0x84, 0x82, 0x98, 0x50, 0x9c, 0x1c, 0x3b, 0xf3, 0xa4, 0x83, 0xe7, 0x27, 0x40, 0x54, 0xe1, 0x5e,
0x97, 0x07, 0x50, 0x36, 0xe9, 0x89, 0xf6, 0x09, 0x32, 0x80, 0x7b, 0x52, 0x57, 0x75, 0x1e, 0x79
};

// ----------------------------------
// RSAES-OAEP Encryption Example 10.1
// ----------------------------------
//
// Message to be encrypted:
static const uint8_t  fipsRsaOaepKatDataIn[] = {
0x8b, 0xba, 0x6b, 0xf8, 0x2a, 0x6c, 0x0f, 0x86, 0xd5, 0xf1, 0x75, 0x6e, 0x97, 0x95, 0x68, 0x70,
0xb0, 0x89, 0x53, 0xb0, 0x6b, 0x4e, 0xb2, 0x05, 0xbc, 0x16, 0x94, 0xee
};

// Seed:
static const uint8_t  fipsRsaOaepKatSeed[] =  {
0x47, 0xe1, 0xab, 0x71, 0x19, 0xfe, 0xe5, 0x6c, 0x95, 0xee, 0x5e, 0xaa, 0xd8, 0x6f, 0x40, 0xd0,
0xaa, 0x63, 0xbd, 0x33
};

// Encryption:
static const uint8_t  fipsRsaOaepKat2048ExpEncryption[] = {
0x53, 0xea, 0x5d, 0xc0, 0x8c, 0xd2, 0x60, 0xfb, 0x3b, 0x85, 0x85, 0x67, 0x28, 0x7f, 0xa9, 0x15,
0x52, 0xc3, 0x0b, 0x2f, 0xeb, 0xfb, 0xa2, 0x13, 0xf0, 0xae, 0x87, 0x70, 0x2d, 0x06, 0x8d, 0x19,
0xba, 0xb0, 0x7f, 0xe5, 0x74, 0x52, 0x3d, 0xfb, 0x42, 0x13, 0x9d, 0x68, 0xc3, 0xc5, 0xaf, 0xee,
0xe0, 0xbf, 0xe4, 0xcb, 0x79, 0x69, 0xcb, 0xf3, 0x82, 0xb8, 0x04, 0xd6, 0xe6, 0x13, 0x96, 0x14,
0x4e, 0x2d, 0x0e, 0x60, 0x74, 0x1f, 0x89, 0x93, 0xc3, 0x01, 0x4b, 0x58, 0xb9, 0xb1, 0x95, 0x7a,
0x8b, 0xab, 0xcd, 0x23, 0xaf, 0x85, 0x4f, 0x4c, 0x35, 0x6f, 0xb1, 0x66, 0x2a, 0xa7, 0x2b, 0xfc,
0xc7, 0xe5, 0x86, 0x55, 0x9d, 0xc4, 0x28, 0x0d, 0x16, 0x0c, 0x12, 0x67, 0x85, 0xa7, 0x23, 0xeb,
0xee, 0xbe, 0xff, 0x71, 0xf1, 0x15, 0x94, 0x44, 0x0a, 0xae, 0xf8, 0x7d, 0x10, 0x79, 0x3a, 0x87,
0x74, 0xa2, 0x39, 0xd4, 0xa0, 0x4c, 0x87, 0xfe, 0x14, 0x67, 0xb9, 0xda, 0xf8, 0x52, 0x08, 0xec,
0x6c, 0x72, 0x55, 0x79, 0x4a, 0x96, 0xcc, 0x29, 0x14, 0x2f, 0x9a, 0x8b, 0xd4, 0x18, 0xe3, 0xc1,
0xfd, 0x67, 0x34, 0x4b, 0x0c, 0xd0, 0x82, 0x9d, 0xf3, 0xb2, 0xbe, 0xc6, 0x02, 0x53, 0x19, 0x62,
0x93, 0xc6, 0xb3, 0x4d, 0x3f, 0x75, 0xd3, 0x2f, 0x21, 0x3d, 0xd4, 0x5c, 0x62, 0x73, 0xd5, 0x05,
0xad, 0xf4, 0xcc, 0xed, 0x10, 0x57, 0xcb, 0x75, 0x8f, 0xc2, 0x6a, 0xee, 0xfa, 0x44, 0x12, 0x55,
0xed, 0x4e, 0x64, 0xc1, 0x99, 0xee, 0x07, 0x5e, 0x7f, 0x16, 0x64, 0x61, 0x82, 0xfd, 0xb4, 0x64,
0x73, 0x9b, 0x68, 0xab, 0x5d, 0xaf, 0xf0, 0xe6, 0x3e, 0x95, 0x52, 0x01, 0x68, 0x24, 0xf0, 0x54,
0xbf, 0x4d, 0x3c, 0x8c, 0x90, 0xa9, 0x7b, 0xb6, 0xb6, 0x55, 0x32, 0x84, 0xeb, 0x42, 0x9f, 0xcc
};


// PSS
// RSA modulus n:
static const uint8_t  fipsRsaPssKat2048Modulus[] =  {
0xa5, 0xdd, 0x86, 0x7a, 0xc4, 0xcb, 0x02, 0xf9, 0x0b, 0x94, 0x57, 0xd4, 0x8c, 0x14, 0xa7, 0x70,
0xef, 0x99, 0x1c, 0x56, 0xc3, 0x9c, 0x0e, 0xc6, 0x5f, 0xd1, 0x1a, 0xfa, 0x89, 0x37, 0xce, 0xa5,
0x7b, 0x9b, 0xe7, 0xac, 0x73, 0xb4, 0x5c, 0x00, 0x17, 0x61, 0x5b, 0x82, 0xd6, 0x22, 0xe3, 0x18,
0x75, 0x3b, 0x60, 0x27, 0xc0, 0xfd, 0x15, 0x7b, 0xe1, 0x2f, 0x80, 0x90, 0xfe, 0xe2, 0xa7, 0xad,
0xcd, 0x0e, 0xef, 0x75, 0x9f, 0x88, 0xba, 0x49, 0x97, 0xc7, 0xa4, 0x2d, 0x58, 0xc9, 0xaa, 0x12,
0xcb, 0x99, 0xae, 0x00, 0x1f, 0xe5, 0x21, 0xc1, 0x3b, 0xb5, 0x43, 0x14, 0x45, 0xa8, 0xd5, 0xae,
0x4f, 0x5e, 0x4c, 0x7e, 0x94, 0x8a, 0xc2, 0x27, 0xd3, 0x60, 0x40, 0x71, 0xf2, 0x0e, 0x57, 0x7e,
0x90, 0x5f, 0xbe, 0xb1, 0x5d, 0xfa, 0xf0, 0x6d, 0x1d, 0xe5, 0xae, 0x62, 0x53, 0xd6, 0x3a, 0x6a,
0x21, 0x20, 0xb3, 0x1a, 0x5d, 0xa5, 0xda, 0xbc, 0x95, 0x50, 0x60, 0x0e, 0x20, 0xf2, 0x7d, 0x37,
0x39, 0xe2, 0x62, 0x79, 0x25, 0xfe, 0xa3, 0xcc, 0x50, 0x9f, 0x21, 0xdf, 0xf0, 0x4e, 0x6e, 0xea,
0x45, 0x49, 0xc5, 0x40, 0xd6, 0x80, 0x9f, 0xf9, 0x30, 0x7e, 0xed, 0xe9, 0x1f, 0xff, 0x58, 0x73,
0x3d, 0x83, 0x85, 0xa2, 0x37, 0xd6, 0xd3, 0x70, 0x5a, 0x33, 0xe3, 0x91, 0x90, 0x09, 0x92, 0x07,
0x0d, 0xf7, 0xad, 0xf1, 0x35, 0x7c, 0xf7, 0xe3, 0x70, 0x0c, 0xe3, 0x66, 0x7d, 0xe8, 0x3f, 0x17,
0xb8, 0xdf, 0x17, 0x78, 0xdb, 0x38, 0x1d, 0xce, 0x09, 0xcb, 0x4a, 0xd0, 0x58, 0xa5, 0x11, 0x00,
0x1a, 0x73, 0x81, 0x98, 0xee, 0x27, 0xcf, 0x55, 0xa1, 0x3b, 0x75, 0x45, 0x39, 0x90, 0x65, 0x82,
0xec, 0x8b, 0x17, 0x4b, 0xd5, 0x8d, 0x5d, 0x1f, 0x3d, 0x76, 0x7c, 0x61, 0x37, 0x21, 0xae, 0x05
};

// RSA public exponent e:
static const uint8_t  fipsRsaPssKatPubExponent[] = {0x01, 0x00, 0x01};

// RSA private exponent d:
static const uint8_t  fipsRsaPssKat2048PrivExponent[] = {
0x2d, 0x2f, 0xf5, 0x67, 0xb3, 0xfe, 0x74, 0xe0, 0x61, 0x91, 0xb7, 0xfd, 0xed, 0x6d, 0xe1, 0x12,
0x29, 0x0c, 0x67, 0x06, 0x92, 0x43, 0x0d, 0x59, 0x69, 0x18, 0x40, 0x47, 0xda, 0x23, 0x4c, 0x96,
0x93, 0xde, 0xed, 0x16, 0x73, 0xed, 0x42, 0x95, 0x39, 0xc9, 0x69, 0xd3, 0x72, 0xc0, 0x4d, 0x6b,
0x47, 0xe0, 0xf5, 0xb8, 0xce, 0xe0, 0x84, 0x3e, 0x5c, 0x22, 0x83, 0x5d, 0xbd, 0x3b, 0x05, 0xa0,
0x99, 0x79, 0x84, 0xae, 0x60, 0x58, 0xb1, 0x1b, 0xc4, 0x90, 0x7c, 0xbf, 0x67, 0xed, 0x84, 0xfa,
0x9a, 0xe2, 0x52, 0xdf, 0xb0, 0xd0, 0xcd, 0x49, 0xe6, 0x18, 0xe3, 0x5d, 0xfd, 0xfe, 0x59, 0xbc,
0xa3, 0xdd, 0xd6, 0x6c, 0x33, 0xce, 0xbb, 0xc7, 0x7a, 0xd4, 0x41, 0xaa, 0x69, 0x5e, 0x13, 0xe3,
0x24, 0xb5, 0x18, 0xf0, 0x1c, 0x60, 0xf5, 0xa8, 0x5c, 0x99, 0x4a, 0xd1, 0x79, 0xf2, 0xa6, 0xb5,
0xfb, 0xe9, 0x34, 0x02, 0xb1, 0x17, 0x67, 0xbe, 0x01, 0xbf, 0x07, 0x34, 0x44, 0xd6, 0xba, 0x1d,
0xd2, 0xbc, 0xa5, 0xbd, 0x07, 0x4d, 0x4a, 0x5f, 0xae, 0x35, 0x31, 0xad, 0x13, 0x03, 0xd8, 0x4b,
0x30, 0xd8, 0x97, 0x31, 0x8c, 0xbb, 0xba, 0x04, 0xe0, 0x3c, 0x2e, 0x66, 0xde, 0x6d, 0x91, 0xf8,
0x2f, 0x96, 0xea, 0x1d, 0x4b, 0xb5, 0x4a, 0x5a, 0xae, 0x10, 0x2d, 0x59, 0x46, 0x57, 0xf5, 0xc9,
0x78, 0x95, 0x53, 0x51, 0x2b, 0x29, 0x6d, 0xea, 0x29, 0xd8, 0x02, 0x31, 0x96, 0x35, 0x7e, 0x3e,
0x3a, 0x6e, 0x95, 0x8f, 0x39, 0xe3, 0xc2, 0x34, 0x40, 0x38, 0xea, 0x60, 0x4b, 0x31, 0xed, 0xc6,
0xf0, 0xf7, 0xff, 0x6e, 0x71, 0x81, 0xa5, 0x7c, 0x92, 0x82, 0x6a, 0x26, 0x8f, 0x86, 0x76, 0x8e,
0x96, 0xf8, 0x78, 0x56, 0x2f, 0xc7, 0x1d, 0x85, 0xd6, 0x9e, 0x44, 0x86, 0x12, 0xf7, 0x04, 0x8f
};

// ---------------------------------
// RSASSA-PSS Signature Example 10.1
// ---------------------------------
//
// Message to be signed:
static const uint8_t  fipsRsaPssKatDataIn[] = {
0x88, 0x31, 0x77, 0xe5, 0x12, 0x6b, 0x9b, 0xe2, 0xd9, 0xa9, 0x68, 0x03, 0x27, 0xd5, 0x37, 0x0c,
0x6f, 0x26, 0x86, 0x1f, 0x58, 0x20, 0xc4, 0x3d, 0xa6, 0x7a, 0x3a, 0xd6, 0x09
};

// Salt:
static const uint8_t  fipsRsaPssKatSalt[] = {
0x04, 0xe2, 0x15, 0xee, 0x6f, 0xf9, 0x34, 0xb9, 0xda, 0x70, 0xd7, 0x73, 0x0c, 0x87, 0x34, 0xab,
0xfc, 0xec, 0xde, 0x89
};

// Signature:
static const uint8_t  fipsRsaPssKat2048ExpSignature[] =  {
0x82, 0xc2, 0xb1, 0x60, 0x09, 0x3b, 0x8a, 0xa3, 0xc0, 0xf7, 0x52, 0x2b, 0x19, 0xf8, 0x73, 0x54,
0x06, 0x6c, 0x77, 0x84, 0x7a, 0xbf, 0x2a, 0x9f, 0xce, 0x54, 0x2d, 0x0e, 0x84, 0xe9, 0x20, 0xc5,
0xaf, 0xb4, 0x9f, 0xfd, 0xfd, 0xac, 0xe1, 0x65, 0x60, 0xee, 0x94, 0xa1, 0x36, 0x96, 0x01, 0x14,
0x8e, 0xba, 0xd7, 0xa0, 0xe1, 0x51, 0xcf, 0x16, 0x33, 0x17, 0x91, 0xa5, 0x72, 0x7d, 0x05, 0xf2,
0x1e, 0x74, 0xe7, 0xeb, 0x81, 0x14, 0x40, 0x20, 0x69, 0x35, 0xd7, 0x44, 0x76, 0x5a, 0x15, 0xe7,
0x9f, 0x01, 0x5c, 0xb6, 0x6c, 0x53, 0x2c, 0x87, 0xa6, 0xa0, 0x59, 0x61, 0xc8, 0xbf, 0xad, 0x74,
0x1a, 0x9a, 0x66, 0x57, 0x02, 0x28, 0x94, 0x39, 0x3e, 0x72, 0x23, 0x73, 0x97, 0x96, 0xc0, 0x2a,
0x77, 0x45, 0x5d, 0x0f, 0x55, 0x5b, 0x0e, 0xc0, 0x1d, 0xdf, 0x25, 0x9b, 0x62, 0x07, 0xfd, 0x0f,
0xd5, 0x76, 0x14, 0xce, 0xf1, 0xa5, 0x57, 0x3b, 0xaa, 0xff, 0x4e, 0xc0, 0x00, 0x69, 0x95, 0x16,
0x59, 0xb8, 0x5f, 0x24, 0x30, 0x0a, 0x25, 0x16, 0x0c, 0xa8, 0x52, 0x2d, 0xc6, 0xe6, 0x72, 0x7e,
0x57, 0xd0, 0x19, 0xd7, 0xe6, 0x36, 0x29, 0xb8, 0xfe, 0x5e, 0x89, 0xe2, 0x5c, 0xc1, 0x5b, 0xeb,
0x3a, 0x64, 0x75, 0x77, 0x55, 0x92, 0x99, 0x28, 0x0b, 0x9b, 0x28, 0xf7, 0x9b, 0x04, 0x09, 0x00,
0x0b, 0xe2, 0x5b, 0xbd, 0x96, 0x40, 0x8b, 0xa3, 0xb4, 0x3c, 0xc4, 0x86, 0x18, 0x4d, 0xd1, 0xc8,
0xe6, 0x25, 0x53, 0xfa, 0x1a, 0xf4, 0x04, 0x0f, 0x60, 0x66, 0x3d, 0xe7, 0xf5, 0xe4, 0x9c, 0x04,
0x38, 0x8e, 0x25, 0x7f, 0x1c, 0xe8, 0x9c, 0x95, 0xda, 0xb4, 0x8a, 0x31, 0x5d, 0x9b, 0x66, 0xb1,
0xb7, 0x62, 0x82, 0x33, 0x87, 0x6f, 0xf2, 0x38, 0x52, 0x30, 0xd0, 0x70, 0xd0, 0x7e, 0x16, 0x66
};

#endif // _CC_FIPS_RSA_KAT_DATA_H
