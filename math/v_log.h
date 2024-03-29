/*
 * Declarations for double-precision log(x) vector function.
 *
 * Copyright (c) 2019, Arm Limited.
 * SPDX-License-Identifier: MIT
 */

#include "v_math.h"

#define V_LOG_TABLE_BITS 7

extern const struct v_log_data
{
  f64_t invc;
  f64_t logc;
} __v_log_data[1 << V_LOG_TABLE_BITS] HIDDEN;
