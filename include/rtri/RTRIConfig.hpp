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

#ifndef RTRI_ATTR_FALLTHROUGH
	#if defined(__cplusplus) && __cplusplus >= 201703L
		#define RTRI_ATTR_FALLTHROUGH [[fallthrough]]
	#elif defined(_MSC_VER) && _MSC_VER >= 1912
		#define RTRI_ATTR_FALLTHROUGH [[fallthrough]]
	#else
		#define RTRI_ATTR_FALLTHROUGH
	#endif
#endif

#ifndef RTRI_ATTR_NODISCARD
	#if defined(__cplusplus) && __cplusplus >= 201703L
		#define RTRI_ATTR_NODISCARD [[nodiscard]]
	#elif defined(_MSC_VER) && _MSC_VER >= 1912
		#define RTRI_ATTR_NODISCARD [[nodiscard]]
	#else
		#define RTRI_ATTR_NODISCARD
	#endif
#endif

#ifndef RTRI_ATTR_NODISCARD_MSG // C++20
	#if defined(__cplusplus) && __cplusplus >= 202002L
		#define RTRI_ATTR_NODISCARD_MSG(msg) [[nodiscard(msg)]]
	#elif defined(_MSC_VER) && _MSC_VER >= 1921
		#define RTRI_ATTR_NODISCARD_MSG(msg) [[nodiscard(msg)]]
	#else
		#define RTRI_ATTR_NODISCARD_MSG(msg) RTRI_ATTR_NODISCARD
	#endif
#endif

#ifndef RTRI_ATTR_MAYBE_UNUSED
	#if defined(__cplusplus) && __cplusplus >= 201703L
		#define RTRI_ATTR_MAYBE_UNUSED [[maybe_unused]]
	#elif defined(_MSC_VER) && _MSC_VER >= 1912
		#define RTRI_ATTR_MAYBE_UNUSED [[maybe_unused]]
	#else
		#define RTRI_ATTR_MAYBE_UNUSED
	#endif
#endif

// Some compilers use a special export keyword
#ifndef RTRI_DECLSPEC
	#if defined(_WIN32)
		#ifdef DLL_EXPORT
			#define RTRI_DECLSPEC __declspec(dllexport)
		#else
			#define RTRI_DECLSPEC
		#endif
	#else
		#if defined(__GNUC__) && __GNUC__ >= 4
			#define RTRI_DECLSPEC __attribute__((visibility("default")))
		#else
			#define RTRI_DECLSPEC
		#endif
	#endif
#endif

#if defined(_WIN32)
	#define RTRI_CALL __stdcall
#else
	#define RTRI_CALL
#endif

#ifndef RTRI_API
	#if defined(__cplusplus)
		#define RTRI_API extern "C"
	#else
		#define RTRI_API extern
	#endif
#endif

#include <cstdint>

namespace rtri
{
	/**
	 * @brief The backend to use for rendering
	 * Current Supported Backends:
	 *     - Vulkan
	 *     - DirectX 12
	 *
	 * Possibly Planned Supported Backends:
	 *     - DirectX 11 (Very Likely)
	 *     - Metal (MoltenVK) (Very Likely)
	 *     - Metal
	 *     - WebGPU
	 *     - Gnm
	 *     - NVN (Unlikely)
	 */
	enum class Backend : std::uint8_t
	{
		eNone,
#ifdef RTRI_ENABLE_VULKAN
		eVulkan,
#endif
#ifdef RTRI_ENABLE_MOLTENVK
		eMoltenVK,
#endif
#ifdef RTRI_ENABLE_DX12
		eDX12,
#endif
#ifdef RTRI_ENABLE_DX11
		eDX11,
#endif
#ifdef RTRI_ENABLE_METAL
		eMetal,
#endif
	};
} // namespace rtri

#endif // RTRI_CONFIG_HPP
