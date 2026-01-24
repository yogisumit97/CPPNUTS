/*
OOPS language : anstraction, encapsulation, inheritance, polymorphism
but not pure oops ? -- c style functional/ procedural programming too.
extension to c
Bjarne stroustrup in 1979

c++ is -> statically typed, free form, compiled , general purpose language.
gaming engines, embedded, software development, speed of execution(less overhead)

// --> used for single line comments. used for user to understsand what is going on.
*/

/*all files in this project will have function name : XXXX_main() >> this is our main function
 *if you want to run the program XXXX_main() should be updated to main() only.
 *as there can be only 1 main thus this is being done.
*/

#include <iostream> // header file - include relevant functionalities
using namespace std; //std = standard namespace, in our code cout is declared here

int INTRO_main() { // function - returns integer. one main function only in a program.
    // os searches for main to start program.

    cout << "First program !!" << endl; // output to console.
    // "First Program !!" ----> character string
    // cout - object in std lib, << - stream insertion operator

    return 0; //returning integer- 0 means successful execution.
}


