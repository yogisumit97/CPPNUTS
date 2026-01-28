// +-/* %(modulo) operators

#include <iostream>
using namespace  std;

int main() {
    int x = 10;
    int y = 3;
    cout << x  + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;
    cout << x / y << endl; // integer division here
    cout << x*1.0 / y << endl; // in decimals
    cout << x % y << endl;
    cout << (float)x / y << endl;


    // assignment operator

    int a = 10, b = 20, c = 30;
    a = b = c;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}