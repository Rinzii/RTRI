/*
 * Copyright (c) Ian Pike
 *
 * RTRI is provided under the Apache-2.0 License WITH LLVM-exception.
 * See LICENSE for more information.
 *
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#ifndef RTRI_TEXTURE_NONE_HPP
#define RTRI_TEXTURE_NONE_HPP

#include "rtri/Device.hpp"

#include <memory>

template <>
class rtri::Device<rtri::Backend::eNone>
{
public:
    Device();
    ~Device();

private:
    struct Impl;
    std::unique_ptr<Impl> impl;
};


#endif // RTRI_TEXTURE_NONE_HPP
