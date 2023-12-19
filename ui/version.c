/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#include <string.h>
#include "ui/gfx.h"
#include "ui/helper.h"
#include "ui/version.h"

void UI_DrawVersion(void)
{
	DISPLAY_Fill(0, 159, 1, 55, COLOR_BACKGROUND);
	UI_DrawString(24, 48, "OEFWCOM V1+ ",12);
	UI_DrawString(24, 24, "M7OCM V2.0.0", 12);
}

