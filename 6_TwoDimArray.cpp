#include <iostream>
using namespace std;

int main() {
    int ma[2][2] = {{1, 2},
                    {3, 4}
                    }; // declaring 2*2 array
    // here ma[row][col] is the syntax for 2D array, int is the data type.
    cout<<ma[1][0]<<endl; // accessing
    cout<< *(ma+2)<<endl;
    return 0;
}