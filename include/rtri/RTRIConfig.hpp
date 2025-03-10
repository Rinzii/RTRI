/*
* Copyright (c) Ian Pike
 *
 * RTRI is provided under the Apache-2.0 License WITH LLVM-exception.
 * See LICENSE for more information.
 *
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#ifndef RTRI_CONFIG_HPP
#define RTRI_CONFIG_HPP

#ifndef RTRI_NAMESPACE
#define RTRI_NAMESPACE rtri
#endif

namespace RTRI_NAMESPACE
{
    enum class Backend
    {
        eNone,
#ifdef RTRI_ENABLE_VULKAN
        eVulkan,
#endif
  #ifdef RTRI_ENABLE_METAL
        eMetal,
    #endif
  #ifdef RTRI_ENABLE_DX12
        eDX12,
    #endif
  #ifdef RTRI_ENABLE_DX11
        eDX11,
    #endif


    };
} // namespace RTRI_NAMESPACE


#ifdef RTRI_ENABLE_VULKAN
#endif


#endif // RTRI_CONFIG_HPP