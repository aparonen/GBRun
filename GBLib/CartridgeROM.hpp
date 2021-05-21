#pragma once

#include <cstdint>
#include <vector>

namespace GBLib {

class CartridgeROM {
public:
    explicit CartridgeROM(const std::vector<uint8_t>& bytes);

private:
    std::vector<uint8_t> m_bytes;
};

} // namespace GBLib
