/*
 * Arrays :  continuous memory allocation
 * multiple elements of same data type.
*/
// array overflow error: going beyond defined size. ex: int arr[3] = {1,2,3,4};


#include <iostream>
using namespace std;

int arr5[3]; // global array - automatically 0 initialized.
// above means 3 elements of int data types : in continuous memory allocation.

int Arr_main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // 0 based indexing

    cout << arr[2] << endl; // should print 3. // accessing array
    arr[2] = 11; // modification
    cout << arr[2] << endl;

    int arr2[3]; // declaration. -- all values are garbage values.
    int arr3[3] = {}; // 0 initialized array.
    cout << arr2[2] << endl;
    cout << arr3[2] << endl;

    static int arr4[3]; // static array & global array are automatically 0 initialized.
    cout << arr4[2] << endl;

    cout << arr5[2] << endl;

    int arr7[3] = {1,2}; // 1, 2, rest all will be 0 -- so 1, 2 ,0
    cout << arr7[1] << endl;
    cout << arr7[2] << endl; // no garbage value here.


    // another way to print array element is 2[arr7 ] or 1[arr7] like this
    cout << 1[arr7] << endl; // 1[arr7] == arr7[1] as  compiler converts it into *(arr7+1).
    cout << 2[arr7] << endl<< endl;

    // another syntax using pointer arithmatic
    cout << *(arr7+1) << endl;
    cout << *(arr7+2) << endl;

    //arr7 represents starting address of first element or continous memory.
    cout << *arr7 << endl;
    cout << arr7 << endl;

    return 0;
}