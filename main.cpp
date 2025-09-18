#include "DsAlgo/Inheritance/BaseClass.h"
#include "DsAlgo/Inheritance/DerivedLevel2.h"
#include "DsAlgo/Inheritance/DerivedLevel1.h"
#include "DsAlgo/Inheritance/Derived2Level1.h"


#include<bits/stdc++.h>
using namespace std;
int main() {
    BaseClass bc;
    DerivedLevel1 dl1;
    Derived2Level1 dl21;
    DerivedLevel2 dl2;
    bc.f("main(1)");
    // bc.g(); //error
    // bc.h(); // error
    dl1.f("main(2)");

}