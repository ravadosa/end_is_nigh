#include <iostream>
#include <limits>

#include "../../utils.h"

// Make below as #if 1 to really print
#if 0
    #define PRINT_HELLO() std::cout << "Hello!\n"
#else
    #define PRINT_HELLO()
#endif

void printHello(std::uint64_t& overflowCounter,
                std::uint64_t& modestCounter,
                int number,
                int power) {
    if (number == 0) {
        PRINT_HELLO();
        ++modestCounter;
    }
    if (power == 1) {
        for (std::int64_t i = 0; i < number; ++i) {
            if (modestCounter == std::numeric_limits<std::uint64_t>::max()) {
                std::cout << "Count overflow!" << std::endl;
                ++overflowCounter;
                modestCounter = 0;
            }
            ++modestCounter;
            PRINT_HELLO();
        }
        return;
    }
    for (auto i = 0; i < number; ++i) {
        printHello(overflowCounter, modestCounter, number, power - 1);
    }
}

int main() {
    auto test = [](int number, std::uint64_t modestExpectedCount) {
        auto modestCounter = std::uint64_t(0);
        auto overflowCounter = std::uint64_t(0);
        printHello(overflowCounter, modestCounter, number, number);
        std::cout << "Test for '" << number << "' | ";
        std::cout << "Counts: ";
        if (overflowCounter != 0) {
            std::cout << "(" << overflowCounter << " * "
                      << std::numeric_limits<std::uint16_t>().max() << ") + ";
        }
        std::cout << modestCounter << " ==> ";
        if (overflowCounter == 0) {
            auto success = modestCounter == modestExpectedCount;
            if (success) {
                std::cout << "Succeeded";
            } else {
                std::cout << "Failed! => " << modestCounter
                          << " != " << modestExpectedCount;
            }
        } else {
            std::cout << "Cannot test for `" << number
                      << "'. Counter overflow detected";
        }
        std::cout << std::endl;
    };

    test(2, 4);
    test(0, 1);
    test(5, 3125);
    test(10, 10000000000);
    return 0;
}
