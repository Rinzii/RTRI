/*
 * Copyright (c) Ian Pike
 *
 * RTRI is provided under the Apache-2.0 License WITH LLVM-exception.
 * See LICENSE for more information.
 *
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#ifndef RTRI_DEVICE_HPP
#define RTRI_DEVICE_HPP

#include "RTRIConfig.hpp"

namespace rtri
{
	template <Backend>
	class Device;

	extern template class Device<Backend::eNone>;

#ifdef RTRI_ENABLE_VULKAN
	extern template class Device<Backend::eVulkan>;
#endif
} // namespace rtri



#endif // RTRI_DEVICE_HPP