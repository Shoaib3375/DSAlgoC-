//
// Created by SHOAIB on 9/18/2025.
//
#include <iostream>  // Use iostream instead of bits/stdc++.h for better practice
#include "BaseClass.h"

// Constructor implementation
BaseClass::BaseClass() {
    // Constructor body - initialization code goes here
    std::cout << "BaseClass constructor called" << std::endl;
}

// Function f() implementation
void BaseClass::f(char *s) {
    std::cout << "Function f() in BaseClass called from " << s << std::endl;
}

// Protected function g() implementation
void BaseClass::g(char *s) {
    std::cout << "Protected function g() called" << std::endl;
}

// Private function h() implementation
void BaseClass::h() {
    std::cout << "Private function h() called" << std::endl;
}