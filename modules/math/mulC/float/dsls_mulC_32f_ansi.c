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

#include "dsls_mulC.h"

esp_err_t dsls_mulC_f32_ansi(float* x, float* y, int len, float C, int step1, int step2)
{
	for (int i=0 ; i< len ; i++)
	{
		y[i*step2] = x[i*step1]*C;
	}
	return ESP_OK;
}