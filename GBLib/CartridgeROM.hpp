#pragma once

#include <cstdint>
#include <vector>

#include "CartridgeHeader.hpp"

namespace GBLib {

class CartridgeROM {
public:
    explicit CartridgeROM(const std::vector<uint8_t>& bytes);

private:
    CartridgeHeader m_header;
    std::vector<uint8_t> m_bytes;
};

} // namespace GBLib
