//
// Created by SHOAIB on 9/18/2025.
//

#include "DerivedLevel1.h"

#include <iostream>
#include <ostream>

void DerivedLevel1::f(char *s) {
    std::cout << "Function f() in Derived1level1 called from "<< s << std::endl;
    g("(Derived1level1)");
    h("Derived1level1");
}
void DerivedLevel1::h(char *s) {
    std::cout << "Function h() in Derived1level1 called from "<< s << std::endl;
}
