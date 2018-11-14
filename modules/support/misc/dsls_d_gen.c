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

#include "dsls_d_gen.h"

esp_err_t dsls_d_gen_f32(float* x, int len, int pos)
{
	if (pos >= len) return ESP_ERR_DSL_PARAM_OUTOFRANGE;
	if (pos <    0) return ESP_ERR_DSL_PARAM_OUTOFRANGE;
	for (int i=0 ; i< len ; i++)   x[i] = 0;
	x[pos] = 1;
	return ESP_OK;
}