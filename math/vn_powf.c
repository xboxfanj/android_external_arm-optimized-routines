/*
 * AdvSIMD vector PCS variant of __v_powf.
 *
 * Copyright (c) 2019, Arm Limited.
 * SPDX-License-Identifier: MIT
 */
#include "include/mathlib.h"
#ifdef __vpcs
#define VPCS 1
#define VPCS_ALIAS strong_alias (__vn_powf, _ZGVnN4vv_powf)
#include "v_powf.c"
#endif
