#pragma once

namespace GBLib {

enum class CartridgeType {
    romOnly,
    mbc1,
    mbc1RAM,
    mbc1RAMBattery,
    mbc3TimerBattery = 0x0f,
    mbc3TimerRAMBattery,
    mbc3,
    mbc3RAM,
    mbc3RAMBattery
};

} // namespace GBLib
