#include <iostream>
using namespace std;

int md_main() {
    int ma[2][2] = {{1, 2},
                    {3, 4}
                    }; // declaring 2*2 array
    // here ma[row][col] is the syntax for 2D array, int is the data type for this 2d array.
    cout<<ma[1][0]<<endl; // accessing
    ma[1][0] = 7; // modifying value
    cout<<ma[1][0]<<endl;

    // another method of declaring 2d matrix.
    int mat[][2] = {{5, 6}, {9,8}}; // rows not given, will check automatically.
    cout<<mat[1][0]<<endl;

    // 1 more method
    int matr[2][2] = {1,2,3,4};
    cout<<matr[1][0]<<endl;

    cout<<matr[1][10]<<endl; // surprised ? no error : UB undefined value.
    cout<<matr[10][1]<<endl; // same here.

    // C++ does not perform runtime bounds checking on raw arrays.
    // Out-of-bounds access compiles successfully but results in undefined behavior.

    return 0;
}