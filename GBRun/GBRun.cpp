#include "GBRun.h"

#include <cstdint>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <vector>

#include <CartridgeROM.hpp>

int main(int argc, char** argv)
{
    if (argc != 2) {
        std::cout << "Provide a cartridge ROM dump as an argument\n";
        return EXIT_FAILURE;
    }

    std::ifstream ifs(argv[1], std::ios::binary | std::ios::ate);
    const auto size = ifs.tellg();
    ifs.seekg(0);

    std::vector<uint8_t> bytes(size);
    ifs.read(reinterpret_cast<char*>(bytes.data()), size);

    const GBLib::CartridgeROM rom(bytes);
    std::cout << "Loaded cartridge ROM: " << rom << '\n';

    return EXIT_SUCCESS;
}
