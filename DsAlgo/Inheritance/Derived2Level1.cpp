//
// Created by SHOAIB on 9/18/2025.
//

#include "Derived2Level1.h"

#include <iostream>

void Derived2Level1::f(char *s) {
    std::cout << "Function f() in Derived2Level1 called from "<< s << std::endl;
    g("(Derived2Level1)");
    // h("Derived2Level1");
}
