// Copyright(c) lisponsored@gmail.com 2024 ****

#ifndef PRIVATE_CLASS_H_
#define PRIVATE_CLASS_H_

namespace cmake_with_gtest {

class PrivateClass {
 public:
    PrivateClass() = default;
    PrivateClass(const PrivateClass&) = default;
    PrivateClass& operator=(const PrivateClass&) = default;
    PrivateClass(PrivateClass&&) = default;
    PrivateClass& operator=(PrivateClass&&) = default;
    ~PrivateClass() = default;

    static int Add(int a, int b);

    int Add(int a);

 private:
    int result_ = 0;
}; // class PrivateClass

} // namespace cmake_with_gtest

#endif // PRIVATE_CLASS_H_
