//
// Created by SHOAIB on 9/18/2025.
//

#include "DerivedLevel2.h"

#include <iostream>
#include <ostream>

void DerivedLevel2::f(char *s) {
    std::cout << "Function f() in DerivedLevel2 called from " << s << std::endl;
    DerivedLevel2::h("DerivedLevel2");
    BaseClass::f("DerivedLevel2");
}
