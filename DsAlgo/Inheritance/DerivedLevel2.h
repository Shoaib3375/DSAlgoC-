//
// Created by SHOAIB on 9/18/2025.
//

#ifndef CLION_DERIVEDLEVEL2_H
#define CLION_DERIVEDLEVEL2_H
#include "Derived2Level1.h"
#include "DerivedLevel1.h"


class DerivedLevel2 : public DerivedLevel1, public Derived2Level1{
public:
    void f(char *s = "unknown");
};


#endif //CLION_DERIVEDLEVEL2_H