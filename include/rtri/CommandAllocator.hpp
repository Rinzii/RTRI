/*
 * Copyright (c) Ian Pike
 *
 * RTRI is provided under the Apache-2.0 License WITH LLVM-exception.
 * See LICENSE for more information.
 *
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#ifndef RTRI_COMMAND_ALLOCATOR_HPP
#define RTRI_COMMAND_ALLOCATOR_HPP

#include "RTRIConfig.hpp"

namespace rtri
{
	class CommandAllocator
	{
	public:
		CommandAllocator();
		~CommandAllocator();
	};
} // namespace rtri

#endif // RTRI_COMMAND_ALLOCATOR_HPP
