cmake_minimum_required(VERSION 4.0)
project(cLion)

set(CMAKE_CXX_STANDARD 20)

add_executable(cLion main.cpp
        DsAlgo/Inheritance/BaseClass.cpp
        DsAlgo/Inheritance/BaseClass.h
        DsAlgo/Inheritance/DerivedLevel1.cpp
        DsAlgo/Inheritance/DerivedLevel1.h
        DsAlgo/Inheritance/Derived2Level1.cpp
        DsAlgo/Inheritance/Derived2Level1.h
        DsAlgo/Inheritance/DerivedLevel2.cpp
        DsAlgo/Inheritance/DerivedLevel2.h
)
