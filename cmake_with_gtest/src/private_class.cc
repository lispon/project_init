#include "private_class.h"

namespace cmake_with_gtest {

int PrivateClass::Add(int a, int b) {
    return a + b;
}

int PrivateClass::Add(int a) {
    result_ += a;
    return result_;
}

} // namespace cmake_with_gtest
