#include <iostream>

#include "../lib/cpp-practice.h"

int main(int argc, char **argv) {
    // Test Letter Pyramid
    std::string in_str {};
    std::cout << "Enter your string to display letter pyramid: ";
    std::cin >> in_str;
    letter_pyramid(in_str);
}