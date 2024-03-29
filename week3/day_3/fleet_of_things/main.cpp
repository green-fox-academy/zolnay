#include <iostream>

#include "fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    //   You have the `Thing` class
    // - You have the `Fleet` class
    // - You have the `FleetOfThings` class with a `main` method
    // - Download those, use those
    // - In the main method create a fleet
    // - Achieve this output:
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch
    Thing First("Get milk");
        fleet.add(First);

    Thing Second("Remove the obstacles");
        fleet.add(Second);

    Thing Third("Stand up");
        Third.complete();
        fleet.add(Third);

    Thing Fourth("Eat lunch");
        Fourth.complete();
        fleet.add(Fourth);

    std::cout << fleet.toString() << std::endl;
    return 0;
}