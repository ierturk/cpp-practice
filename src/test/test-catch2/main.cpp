//
// Created by Ibrahim ERTURK on 21.01.2022.
//

#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "../../lib/cpp-practice.h"

TEST_CASE("Simple Factorial Test") {
    REQUIRE(factorial( 1) == 1);
    REQUIRE(factorial(10) == 3628800);
    REQUIRE(factorial( 0) == 1);
}

TEST_CASE ("Simple Monotonic Array Test") {
    std::vector<int> in0{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    std::vector<int> in1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 10};
    std::vector<int> in3{12, 10, 10, 9, 9, 9, 8, 7, -1, -1, -2, -2};

    REQUIRE(isMonotonic(in0) == true);
    REQUIRE(isMonotonic(in1) == false);
    REQUIRE(isMonotonic(in3) == true);
}

TEST_CASE ("Simple Brackets Matcher Test") {
    std::string expr1 = "{()}[]";
    std::string expr2 = "{(}}[]";

    REQUIRE(areBracketsBalanced(expr1) == true);
    REQUIRE(areBracketsBalanced(expr2) == false);
}

TEST_CASE ("Baseball Game") {
    std::vector<std::string> expr{"5", "2", "C", "D", "+"};
    BaseballGame baseballGame;
    REQUIRE(baseballGame.calPoints(expr) == 30);
}

TEST_CASE ("TopK Frequent") {
    std::vector<int> in{1, 2, 2, 3, 3, 4, 5};
    TopK topK;
    REQUIRE(topK.topKFrequent(in, 2) == std::vector<int>{2, 3});
}

TEST_CASE ("k-sorted array") {
    int arr0[] = {3, 2, 1, 5, 6, 4};
    int arr1[] = {13, 8, 10, 7, 15, 14, 12};

    KSorted kSorted;
    REQUIRE(kSorted.isKSortedArray(arr0, 6, 2) == "Yes");
    REQUIRE(kSorted.isKSortedArray(arr1, 7, 1) == "No");
}

TEST_CASE ("Letter Pyramid") {

    std::string in_str {"ABCDEFG"};
    REQUIRE(letter_pyramid(in_str) == true);
}
