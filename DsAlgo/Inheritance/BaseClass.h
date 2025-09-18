//
// Created by SHOAIB on 9/18/2025.
//

#ifndef CLION_BASECLASS_H
#define CLION_BASECLASS_H

class BaseClass {
public:
    BaseClass();                    // Constructor declaration
    void f(char *s = "unknown");    // Function declaration with default parameter

protected:
    void g(char *s = "unknown");                       // Protected function declaration

private:
    void h();                       // Private function declaration (fixed: added void)
};

#endif //CLION_BASECLASS_H