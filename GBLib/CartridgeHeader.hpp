#pragma once

#include <array>
#include <cstdint>

#include "CartridgeType.hpp"

namespace GBLib {

#pragma pack(push)
#pragma pack(1) // std::memcpy()
struct CartridgeHeader {
    std::array<uint8_t, 16> title;
    std::array<uint8_t, 2> newLicenseeCode;
    uint8_t sgbFlag;
    CartridgeType cartridgeType;
    uint8_t romSize;
    uint8_t ramSize;
    uint8_t destinationCode;
    uint8_t oldLicenseeCode;
    uint8_t maskROMVersionNumber;
    uint8_t headerChecksum;
    uint16_t globalChecksum;
};
#pragma pack(pop)

} // namespace GBLib
