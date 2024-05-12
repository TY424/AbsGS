/*
 * Copyright (C) 2023, Inria
 * GRAPHDECO research group, https://team.inria.fr/graphdeco
 * All rights reserved.
 *
 * This software is free for non-commercial, research and evaluation use 
 * under the terms of the LICENSE.md file.
 *
 * For inquiries contact  george.drettakis@inria.fr
 */

#include <torch/extension.h>
#include "spatial.h"

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
  m.def("distCUDA2", &distCUDA2);
}


/*
 *
 * cpp文件是torch和CUDA连接的地方，将CUDA程序封装成了python可以调用的库。
 * .h文件是CUDA函数声明
 * .cu文件是CUDA函数实现
 * */
