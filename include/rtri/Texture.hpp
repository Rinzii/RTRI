/*
 * Copyright (c) Ian Pike
 *
 * RTRI is provided under the Apache-2.0 License WITH LLVM-exception.
 * See LICENSE for more information.
 *
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#ifndef RTRI_TEXTURE_HPP
#define RTRI_TEXTURE_HPP

#include "RTRIConfig.hpp"

#include <cstdint>

namespace rtri
{
	enum class TextureType : uint8_t {
	    eTEXTURE_1D,
	    eTEXTURE_2D,
	    eTEXTURE_3D
	};
	
	enum class Texture1DViewType : uint8_t {
	    eSHADER_RESOURCE_1D,
	    eSHADER_RESOURCE_1D_ARRAY,
	    eSHADER_RESOURCE_STORAGE_1D,
	    eSHADER_RESOURCE_STORAGE_1D_ARRAY,
	    eCOLOR_ATTACHMENT,
	    eDEPTH_STENCIL_ATTACHMENT,
	    eDEPTH_READONLY_STENCIL_ATTACHMENT,
	    eDEPTH_ATTACHMENT_STENCIL_READONLY,
	    eDEPTH_STENCIL_READONLY
	};
	
	enum class Texture2DViewType : uint8_t {
	    eSHADER_RESOURCE_2D,
	    eSHADER_RESOURCE_2D_ARRAY,
	    eSHADER_RESOURCE_CUBE,
	    eSHADER_RESOURCE_CUBE_ARRAY,
	    eSHADER_RESOURCE_STORAGE_2D,
	    eSHADER_RESOURCE_STORAGE_2D_ARRAY,
	    eCOLOR_ATTACHMENT,
	    eDEPTH_STENCIL_ATTACHMENT,
	    eDEPTH_READONLY_STENCIL_ATTACHMENT,
	    eDEPTH_ATTACHMENT_STENCIL_READONLY,
	    eDEPTH_STENCIL_READONLY,
	    eSHADING_RATE_ATTACHMENT
	};
	
	enum class Texture3DViewType : uint8_t {
	    eSHADER_RESOURCE_3D,
	    eSHADER_RESOURCE_STORAGE_3D,
	    eCOLOR_ATTACHMENT
	};
	
	enum class BufferViewType : uint8_t {
	    eSHADER_RESOURCE,
	    eSHADER_RESOURCE_STORAGE,
	    eCONSTANT
	};
	
	enum class DescriptorType : uint8_t {
	    eSAMPLER,
	    eCONSTANT_BUFFER,
	    eTEXTURE,
	    eSTORAGE_TEXTURE,
	    eBUFFER,
	    eSTORAGE_BUFFER,
	    eSTRUCTURED_BUFFER,
	    eSTORAGE_STRUCTURED_BUFFER,
	    eACCELERATION_STRUCTURE
	};

	class Texture
	{
	public:
		Texture();
		~Texture();
	};
} // namespace rtri

#endif // RTRI_TEXTURE_HPP
