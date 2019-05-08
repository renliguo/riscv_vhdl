/*
 *  Copyright 2019 Sergey Khabarov, sergeykhbr@gmail.com
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef __DEBUGGER_SRC_SOCSIM_PLUGIN_FPU_FUNC_TESTS_H__
#define __DEBUGGER_SRC_SOCSIM_PLUGIN_FPU_FUNC_TESTS_H__

#include <inttypes.h>

namespace debugger {

const uint64_t TestCases_FDIV_D[][2] = {
    {0x0000000000000000, 0xc17312d000000000},
    {0x0000000000000000, 0xc060000000000000},
    {0x0000000000000000, 0xbeb0c6f7a0b5ed8d},
    {0x0000000000000000, 0x0000000000000000},
    {0x0000000000000000, 0x413458550295fc56},
    {0x0000000000000000, 0x4060000000000000},
    {0x0000000000000000, 0x3ff0000000000000},
    {0x0000000000000000, 0x0000000000000000},
    {0xc17312d000000000, 0x0000000000000000},
    {0xc060000000000000, 0x0000000000000000},
    {0x0000000000000000, 0x0000000000000000},
    {0x413458550295fc56, 0x0000000000000000},
    {0x4060000000000000, 0x0000000000000000},
    {0x3ff0000000000000, 0x0000000000000000},
    {0xffff000000001100, 0x4136705100000000},
    {0x4179062540000000, 0x7fff000000000000},
    {0x410b543a8f5c28f6, 0x400f374bc6a7ef9e},
    {0x3fd2b020c49ba5e3, 0x410a67cc51eb851e},
    {0x0000000000000001, 0x0000000000000001},
    {0x0000000000000000, 0xc17312d000000000},
    {0x0000000000000000, 0xc060000000000000},
    {0x0000000000000000, 0xbeb0c6f7a0b5ed8d},
    {0x0000000000000000, 0x0000000000000000},
    {0x0000000000000000, 0x413458550295fc56},
    {0x0000000000000000, 0x4060000000000000},
    {0x0000000000000000, 0x3ff0000000000000},
    {0x0000000000000000, 0x0000000000000000},
    {0xc17312d000000000, 0x0000000000000000},
    {0xc060000000000000, 0x0000000000000000},
    {0x0000000000000000, 0x0000000000000000},
    {0x413458550295fc56, 0x0000000000000000},
    {0x4060000000000000, 0x0000000000000000},
    {0x3ff0000000000000, 0x0000000000000000},
    {0xffff000000001100, 0x41cc509cf9000000},
    {0x4190d62860000000, 0x7fff000000000000},
    {0x411a6f79f5c28f5c, 0x401b78d4fdf3b646},
    {0x403ba4dd2f1a9fbf, 0x412169da47ae147b},
    {0x0000000000000001, 0x0000000000000001},
    {0x0000000000000000, 0xc17312d000000000},
    {0x0000000000000000, 0xc060000000000000},
    {0x0000000000000000, 0xbeb0c6f7a0b5ed8d},
    {0x0000000000000000, 0x0000000000000000},
    {0x0000000000000000, 0x413458550295fc56},
    {0x0000000000000000, 0x4060000000000000},
    {0x0000000000000000, 0x3ff0000000000000},
    {0x0000000000000000, 0x0000000000000000},
    {0xc17312d000000000, 0x0000000000000000},
    {0xc060000000000000, 0x0000000000000000},
    {0x0000000000000000, 0x0000000000000000},
    {0x413458550295fc56, 0x0000000000000000},
    {0x4060000000000000, 0x0000000000000000},
    {0x3ff0000000000000, 0x0000000000000000},
    {0xffff000000001100, 0x41c28668a8000000},
    {0x41997e1c88000000, 0x7fff000000000000},
    {0x410cb99c00000000, 0x402e03126e978d50},
    {0x4038649ba5e353f8, 0x40ee43f1eb851eb8},
    {0x0000000000000001, 0x0000000000000001},
    {0x0000000000000000, 0xc17312d000000000},
    {0x0000000000000000, 0xc060000000000000},
    {0x0000000000000000, 0xbeb0c6f7a0b5ed8d},
    {0x0000000000000000, 0x0000000000000000},
    {0x0000000000000000, 0x413458550295fc56},
    {0x0000000000000000, 0x4060000000000000},
    {0x0000000000000000, 0x3ff0000000000000},
    {0x0000000000000000, 0x0000000000000000},
    {0xc17312d000000000, 0x0000000000000000},
    {0xc060000000000000, 0x0000000000000000},
    {0x0000000000000000, 0x0000000000000000},
    {0x413458550295fc56, 0x0000000000000000},
    {0x4060000000000000, 0x0000000000000000},
    {0x3ff0000000000000, 0x0000000000000000},
    {0xffff000000001100, 0x4180006560000000},
    {0x41930f4ff4000000, 0x7fff000000000000},
    {0x40f15cbdeb851eb8, 0x403da872b020c49c},
    {0x4023dc28f5c28f5c, 0x410dce91851eb851},
    {0x0000000000000001, 0x0000000000000001},
    {0x0000000000000001, 0xc17312d000000000},
    {0x0000000000000001, 0xc060000000000000},
    {0x0000000000000001, 0xbeb0c6f7a0b5ed8d},
    {0x0000000000000001, 0x0000000000000000},
    {0x0000000000000001, 0x413458550295fc56},
    {0x0000000000000001, 0x4060000000000000},
    {0x0000000000000001, 0x3ff0000000000000},
    {0x0000000000000001, 0x0000000000000001},
    {0xc17312d000000000, 0x0000000000000001},
    {0xc060000000000000, 0x0000000000000001},
    {0x0000000000000000, 0x0000000000000001},
    {0x413458550295fc56, 0x0000000000000001},
    {0x4060000000000000, 0x0000000000000001},
    {0x3ff0000000000000, 0x0000000000000001},
    {0xffff000000001100, 0x41b8d4ee24000000},
    {0x41b5f5621a000000, 0x7fff000000000000},
    {0x41068da947ae147b, 0x403b59999999999a},
    {0x4030f0e560418937, 0x411729f91eb851eb},
    {0x0000000000000001, 0x0000000000000001},
    {0x0000000000008000, 0xc17312d000000000},
    {0x0000000000008000, 0xc060000000000000},
    {0x0000000000008000, 0xbeb0c6f7a0b5ed8d},
    {0x0000000000008000, 0x0000000000000000},
    {0x0000000000008000, 0x413458550295fc56},
    {0x0000000000008000, 0x4060000000000000},
    {0x0000000000008000, 0x3ff0000000000000},
    {0x0000000000008000, 0x0000000000008000},
    {0xc17312d000000000, 0x0000000000008000},
    {0xc060000000000000, 0x0000000000008000},
    {0x0000000000000000, 0x0000000000008000},
    {0x413458550295fc56, 0x0000000000008000},
    {0x4060000000000000, 0x0000000000008000},
    {0x3ff0000000000000, 0x0000000000008000},
    {0xffff000000001100, 0x41a3190398000000},
    {0x41a97e881c000000, 0x7fff000000000000},
    {0x40caf28000000000, 0x40404ba5e353f7cf},
    {0x3ffa7ae147ae147b, 0x41129062cccccccc},
    {0x0000000000000001, 0x0000000000000001},
    {0x3ff0000000000000, 0x58c8000000000000},
    {0xffff000000001100, 0x41b9c0d8c0000000},
    {0x41b72aa22a000000, 0x7fff000000000000},
    {0x4113d77feb851eb8, 0x403070a3d70a3d71},
    {0x4031020c49ba5e35, 0x4104dfa2e147ae14},
    {0x0000000000000001, 0x0000000000000001},
    {0x0000000000000b1a, 0xc17312d000000000},
    {0x0000000000000b1a, 0xc060000000000000},
    {0x0000000000000b1a, 0xbeb0c6f7a0b5ed8d},
    {0x0000000000000b1a, 0x0000000000000000},
    {0x0000000000000b1a, 0x413458550295fc56},
    {0x0000000000000b1a, 0x4060000000000000},
    {0x0000000000000b1a, 0x3ff0000000000000},
    {0x0000000000000b1a, 0x0000000000000b1a},
    {0xc17312d000000000, 0x0000000000000b1a},
    {0xc060000000000000, 0x0000000000000b1a},
    {0x0000000000000000, 0x0000000000000b1a},
    {0x413458550295fc56, 0x0000000000000b1a},
    {0x4060000000000000, 0x0000000000000b1a},
    {0x3ff0000000000000, 0x0000000000000b1a},
    {0xffff000000001100, 0x419a6be460000000},
    {0x41a00fb4bc000000, 0x7fff000000000000},
    {0x410b4b9b0a3d70a4, 0x40392d916872b021},
    {0x40325ef9db22d0e5, 0x40e79ecdc28f5c29},
    {0x0000000000000001, 0x0000000000000001},
    {0x00000000058d0000, 0xc17312d000000000},
    {0x00000000058d0000, 0xc060000000000000},
    {0x00000000058d0000, 0xbeb0c6f7a0b5ed8d},
    {0x00000000058d0000, 0x0000000000000000},
    {0x00000000058d0000, 0x413458550295fc56},
    {0x00000000058d0000, 0x4060000000000000},
    {0x00000000058d0000, 0x3ff0000000000000},
    {0x00000000058d0000, 0x00000000058d0000},
    {0xc17312d000000000, 0x00000000058d0000},
    {0xc060000000000000, 0x00000000058d0000},
    {0x0000000000000000, 0x00000000058d0000},
    {0x413458550295fc56, 0x00000000058d0000},
    {0x4060000000000000, 0x00000000058d0000},
    {0x3ff0000000000000, 0x00000000058d0000},
    {0xffff000000001100, 0x419fd6b71c000000},
    {0x41c1b06d42800000, 0x7fff000000000000},
    {0x40b9fd3851eb851f, 0x402511eb851eb852},
    {0x403136872b020c4a, 0x40f9c0bdc28f5c28},
    {0x0000000000000001, 0x0000000000000001},
    {0x0163400000000000, 0xc17312d000000000},
    {0x0163400000000000, 0xc060000000000000},
    {0x0163400000000000, 0xbeb0c6f7a0b5ed8d},
    {0x0163400000000000, 0x0000000000000000},
    {0x0163400000000000, 0x413458550295fc56},
    {0x0163400000000000, 0x4060000000000000},
    {0x0163400000000000, 0x3ff0000000000000},
    {0x0163400000000000, 0x0163400000000000},
    {0xc17312d000000000, 0x0163400000000000},
    {0xc060000000000000, 0x0163400000000000},
    {0x0000000000000000, 0x0163400000000000},
    {0x413458550295fc56, 0x0163400000000000},
    {0x4060000000000000, 0x0163400000000000},
    {0x3ff0000000000000, 0x0163400000000000},
    {0xffff000000001100, 0x41af2f33e2000000},
    {0x41a0c38c80000000, 0x7fff000000000000},
    {0x4101d8570a3d70a4, 0x40345f7ced916873},
    {0x402750e560418937, 0x411fef69ffffffff},
    {0x0000000000000001, 0x0000000000000001},
    {0x58d0000000000000, 0xc17312d000000000},
    {0x58d0000000000000, 0xc060000000000000},
    {0x58d0000000000000, 0xbeb0c6f7a0b5ed8d},
    {0x58d0000000000000, 0x0000000000000000},
    {0x58d0000000000000, 0x413458550295fc56},
    {0x58d0000000000000, 0x4060000000000000},
    {0x41b4639ed0000000, 0x7fff000000000000},
    {0x41175fbaeb851eb8, 0x4007a3d70a3d70a4},
    {0x403e8147ae147ae1, 0x41205810a3d70a3d},
    {0x0000000000000001, 0x0000000000000001},
    {0x0000000000000b19, 0xc17312d000000000},
    {0x0000000000000b19, 0xc060000000000000},
    {0x0000000000000b19, 0xbeb0c6f7a0b5ed8d},
    {0x0000000000000b19, 0x0000000000000000},
    {0x0000000000000b19, 0x413458550295fc56},
    {0x0000000000000b19, 0x4060000000000000},
    {0x0000000000000b19, 0x3ff0000000000000},
    {0x0000000000000b19, 0x0000000000000b19},
    {0xc17312d000000000, 0x0000000000000b19},
    {0xc060000000000000, 0x0000000000000b19},
    {0x0000000000000000, 0x0000000000000b19},
    {0x413458550295fc56, 0x0000000000000b19},
    {0x4060000000000000, 0x0000000000000b19},
    {0x3ff0000000000000, 0x0000000000000b19},
    {0xffff000000001100, 0x4166829820000000},
    {0x41aa16b916000000, 0x7fff000000000000},
    {0x411e1dcad70a3d71, 0x40242353f7ced917},
    {0x3fc6a7ef9db22d0e, 0x40cc37d851eb851e},
    {0x0000000000000001, 0x0000000000000001},
    {0x00000000058c8000, 0xc17312d000000000},
    {0x00000000058c8000, 0xc060000000000000},
    {0x00000000058c8000, 0xbeb0c6f7a0b5ed8d},
    {0x00000000058c8000, 0x0000000000000000},
    {0x00000000058c8000, 0x413458550295fc56},
    {0x00000000058c8000, 0x4060000000000000},
    {0x00000000058c8000, 0x3ff0000000000000},
    {0x00000000058c8000, 0x00000000058c8000},
    {0xc17312d000000000, 0x00000000058c8000},
    {0xc060000000000000, 0x00000000058c8000},
    {0x0000000000000000, 0x00000000058c8000},
    {0x413458550295fc56, 0x00000000058c8000},
    {0x4060000000000000, 0x00000000058c8000},
    {0x3ff0000000000000, 0x00000000058c8000},
    {0xffff000000001100, 0x41ac1e2b90000000},
    {0x41b112678b000000, 0x7fff000000000000},
    {0x4116be493d70a3d7, 0x403d26e978d4fdf4},
    {0x40312b020c49ba5e, 0x411ed5fbb851eb85},
    {0x0000000000000001, 0x0000000000000001},
    {0x0163200000000000, 0xc17312d000000000},
    {0x0163200000000000, 0xc060000000000000},
    {0x0163200000000000, 0xbeb0c6f7a0b5ed8d},
    {0x0163200000000000, 0x0000000000000000},
    {0x0163200000000000, 0x413458550295fc56},
    {0x0163200000000000, 0x4060000000000000},
    {0x0163200000000000, 0x3ff0000000000000},
    {0x0163200000000000, 0x0163200000000000},
    {0xc17312d000000000, 0x0163200000000000},
    {0xc060000000000000, 0x0163200000000000},
    {0x0000000000000000, 0x0163200000000000},
    {0x413458550295fc56, 0x0163200000000000},
    {0x4060000000000000, 0x0163200000000000},
    {0x3ff0000000000000, 0x0163200000000000},
    {0xffff000000001100, 0x417cdb4760000000},
    {0x41bacc435a000000, 0x7fff000000000000},
    {0x40f463dd70a3d70a, 0x402289374bc6a7f0},
    {0x402c90624dd2f1aa, 0x40cfbb8ccccccccc},
    {0x0000000000000001, 0x0000000000000001},
    {0x58c8000000000000, 0xc17312d000000000},
    {0x58c8000000000000, 0xc060000000000000},
    {0x58c8000000000000, 0xbeb0c6f7a0b5ed8d},
    {0x58c8000000000000, 0x0000000000000000},
    {0x58c8000000000000, 0x413458550295fc56},
    {0x58c8000000000000, 0x4060000000000000},
    {0x58c8000000000000, 0x3ff0000000000000},
    {0x58c8000000000000, 0x58c8000000000000},
    {0xc17312d000000000, 0x58c8000000000000},
    {0xc060000000000000, 0x58c8000000000000},
    {0x0000000000000000, 0x58c8000000000000},
    {0x413458550295fc56, 0x58c8000000000000},
    {0x4060000000000000, 0x58c8000000000000}
};

const size_t TSTDDIV_LENGTH = sizeof(TestCases_FDIV_D) / sizeof(uint64_t) / 2;

}  // namespace debugger

#endif  // __DEBUGGER_SRC_SOCSIM_PLUGIN_FPU_FUNC_TESTS_H__
