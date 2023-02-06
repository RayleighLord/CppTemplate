#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "my_lib.h"

TEST_CASE("Testing the factorial function", "[factorial]") {
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(10) == 3628800);
}

TEST_CASE("Testing the fibonacci function", "[fibonacci]") {
    REQUIRE(fibonacci(1) == 1);
    REQUIRE(fibonacci(2) == 1);
    REQUIRE(fibonacci(3) == 2);
    REQUIRE(fibonacci(4) == 3);
    REQUIRE(fibonacci(5) == 5);
    REQUIRE(fibonacci(6) == 8);
}
