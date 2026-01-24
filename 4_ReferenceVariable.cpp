/*
 *Reference variable : when a variable is declared as reference,
 *it becomes an alternative name for an existing variable. (alias)
 *- c doesn't have reference variables, cpp has.
 */

#include <iostream>
using namespace std;
int RV_main() {
    int x = 10;
    int &y = x; // reference variable or alias (another name of same memory)
    // can't assign later on -  when it is created then only assigned and can't modify later.
    int z = x; // diff memory for z.
    cout << x <<" "<< y << " " << z<< endl;
    y++; // both x and y refer to same memory, thus both modified.
    cout << x <<" "<< y << " " << z<< endl;
    cout << &x <<" "<< &y << " " << &z<< endl; // & = addressOf operator
    return 0;
}