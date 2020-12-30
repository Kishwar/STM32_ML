/* Copyright 2018 The TensorFlow Authors. All Rights Reserved.
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "tensorflow/lite/micro/kernels/all_ops_resolver.h"

#include "tensorflow/lite/micro/kernels/micro_ops.h"

namespace tflite {
namespace ops {
namespace micro {

// Register each supported op with:
// AddBuiltin(<operator ID>, <registration>, [min version], [max version])
AllOpsResolver::AllOpsResolver() {
  AddBuiltin(BuiltinOperator_FULLY_CONNECTED, Register_FULLY_CONNECTED(), 1, 4);
  AddBuiltin(BuiltinOperator_SOFTMAX, Register_SOFTMAX(), 1, 2);
  AddBuiltin(BuiltinOperator_LOGISTIC, Register_LOGISTIC(), 1, 2);
  AddBuiltin(BuiltinOperator_CONV_2D, Register_CONV_2D(), 1, 3);
  AddBuiltin(BuiltinOperator_DEPTHWISE_CONV_2D, Register_DEPTHWISE_CONV_2D(), 1, 3);
  AddBuiltin(BuiltinOperator_FLOOR, Register_FLOOR());
  AddBuiltin(BuiltinOperator_MAXIMUM, Register_MAXIMUM());
  AddBuiltin(BuiltinOperator_MINIMUM, Register_MINIMUM());
  AddBuiltin(BuiltinOperator_ROUND, Register_ROUND());
  AddBuiltin(BuiltinOperator_PAD, Register_PAD(), 1, 2);
  AddBuiltin(BuiltinOperator_PADV2, Register_PADV2(), 1, 2);
  AddBuiltin(BuiltinOperator_ADD, Register_ADD(), 1, 2);
  AddBuiltin(BuiltinOperator_MUL, Register_MUL(), 1, 3);
  AddBuiltin(BuiltinOperator_SUB, Register_SUB(), 1, 2);
  AddBuiltin(BuiltinOperator_L2_NORMALIZATION, Register_L2_NORMALIZATION());
}

}  // namespace micro
}  // namespace ops
}  // namespace tflite
