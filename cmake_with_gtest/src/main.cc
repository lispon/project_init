#include <iostream>

#include "private_class.h"
#include "public_class.h"

int main(int argc, char** argv) {
    std::cout << "run:" << argv[0] << std::endl;
    const int result = cmake_with_gtest::PrivateClass::Add(1, 2);
    std::cout << "add result:" << result << std::endl;
    return 0;
}
