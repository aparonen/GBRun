#include "CartridgeROM.hpp"

namespace GBLib {

CartridgeROM::CartridgeROM(const std::vector<uint8_t>& bytes)
    : m_bytes(bytes)
{
}

} // namespace GBLib
