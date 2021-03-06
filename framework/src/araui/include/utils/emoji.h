/****************************************************************************
 *
 * Copyright 2019 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#ifndef __EMOJI_H__
#define __EMOJI_H__

#include <stdio.h>
#include <stdbool.h>
#include <araui/ui_asset.h>
#include "emoji_assets.h"

#ifdef __cplusplus
extern "C" {
#endif

void emoji_init(void);

void emoji_deinit(void);

ui_asset_t emoji_get_asset(uint32_t utf_code);

bool is_emoji(uint32_t utf_code);

#ifdef __cplusplus
}
#endif

#endif // __EMOJI_H__
