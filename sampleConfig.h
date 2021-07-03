//
// Copyright (c) 2019, NVIDIA CORPORATION. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

#pragma once

#define SAMPLES_DIR "D:/OptiX SDK 7.2.0/SDK"
#define SAMPLES_PTX_DIR "D:\\OptiX SDK 7.2.0\\SDK\\lib\\ptx"
#define SAMPLES_CUDA_DIR "D:/OptiX SDK 7.2.0/SDK/cuda"

// Include directories
#define SAMPLES_RELATIVE_INCLUDE_DIRS \
  "cuda", \
  "sutil", \
  "lib/optixPaging/include", \
  "lib/DemandLoading/include", \
  ".", 
#define SAMPLES_ABSOLUTE_INCLUDE_DIRS \
  "D:/OptiX SDK 7.2.0/include", \
  "D:/my_cuda/deve/include", 

// Signal whether to use NVRTC or not
#define CUDA_NVRTC_ENABLED 1

// NVRTC compiler options
#define CUDA_NVRTC_OPTIONS  \
  "-std=c++11", \
  "-arch", \
  "compute_60", \
  "-use_fast_math", \
  "-lineinfo", \
  "-default-device", \
  "-rdc", \
  "true", \
  "-D__x86_64",
