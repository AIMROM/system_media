/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/** \file IID_to_MPH.c Interface ID to MPH mapping */

#include "SLES/OpenSLES.h"
#include "MPH.h"
#include <assert.h>
#include <string.h>

extern const struct SLInterfaceID_ SL_IID_array[MPH_MAX];

/** \brief Map SLInterfaceID to its minimal perfect hash (MPH), or -1 if unknown */

int IID_to_MPH(const SLInterfaceID iid)
{