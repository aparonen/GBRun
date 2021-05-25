#include "CartridgeROM.hpp"

#include <cstring>

#include "CartridgeHeader.hpp"

namespace {

GBLib::CartridgeHeader parseHeader(const std::vector<uint8_t>& bytes)
{
    GBLib::CartridgeHeader header;
    std::memcpy(&header, &bytes[0x134], sizeof(header));

    return header;
}

} // namespace

namespace GBLib {

CartridgeROM::CartridgeROM(const std::vector<uint8_t>& bytes)
    : m_header(parseHeader(bytes))
    , m_bytes(bytes)
{
}

} // namespace GBLib
