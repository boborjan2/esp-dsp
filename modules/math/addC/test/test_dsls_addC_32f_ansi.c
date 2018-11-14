// Copyright 2018-2019 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License. 

#include <string.h>
#include "unity.h"
#include "test_utils.h"
#include "freertos/FreeRTOS.h"
#include "freertos/portable.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "esp_clk.h"
#include "soc/cpu.h"

#include "dsls_addC.h"
#include "esp_attr.h"


TEST_CASE("dsls_addC_32f_ansi functionality", "[dsls]")
{
	int n = 64; 
	float x[n];
	float y[n];
	for (int i=0 ; i< n ; i++)
	{
		x[i] = i;
		y[i] = i + 10;
	}
	dsls_addC_32f_ansi(x, x, n, 10, 1, 1);
	for (int i=0 ; i< n ; i++)
	{
		if (x[i] != y[i])
		{
			TEST_ASSERT_EQUAL(x[i], y[i]);      
		}
	}
	//TEST_ASSERT_EQUAL(0, z[1]);
	//TEST_ASSERT_MESSAGE (false, "Exec time takes less then expected!"); 
}
