// Data types and variable.

#include <iostream>
using namespace std;

int DT_main() {
    bool b = true; // boolean data type, 1 Byte
    char c = 'A'; // character data type, 1 Byte
    int x = 10; // integer data type,
    float f = 2.4;  // float data type
    double d = 3.3; // double data type : big decimal range.

    // b, c, x, f, d = variables (place in memory, RAM)
    // variable name length can't exceed 255 characters in cpp. (with modern compilers it can be more)
    // variable names should begin with letter or underscores.
    // after first character number can be there in var name.
    // special symbols and space is not allowed.
    // reserved keywords can't be used as var name

    // const keyword : to make variable constant : after assigning value once, it can't be changed.
    return 0;
}