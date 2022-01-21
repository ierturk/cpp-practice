//
// Created by Ibrahim ERTURK on 21.01.2022.
//

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "../lib/cpp-practice.h"


TEST_CASE("Simple Factorial Test") {
    REQUIRE(factorial( 1) == 1);
    REQUIRE(factorial(10) == 3'628'800);
    REQUIRE(factorial( 0) == 1);
}

TEST_CASE ("Simple Monotonic Array Test") {
    std::vector<int> in0{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    std::vector<int> in1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 10};

    REQUIRE(isMonotonic(in0) == true);
    REQUIRE(isMonotonic(in1) == false);
}
