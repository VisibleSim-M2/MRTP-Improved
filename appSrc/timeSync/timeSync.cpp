#include <iostream>

#include "robots/blinkyBlocks/blinkyBlocksSimulator.h"
#include "robots/blinkyBlocks/blinkyBlocksBlockCode.h"

#include "timeSyncBlockCode.hpp"

using namespace std;
using namespace BlinkyBlocks;

int main(int argc, char **argv) {
    try
    {
        createSimulator(argc, argv, TimeSyncBlockCode::buildNewBlockCode);
        getSimulator()->printInfo();
        BaseSimulator::getWorld()->printInfo();
        deleteSimulator();
    }
    catch(std::exception const& e)
    {
        cerr << "Uncaught exception: " << e.what();
    }

    return 0;
}
