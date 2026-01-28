#include <iostream>
using namespace std;
class Base {

};
class Base2 {
    int x;
};
class Base3 {
    int x;
    char y;
    bool z;
    int p;
};
void fun(char arr[]) {
    cout<< sizeof(arr) << endl;
}
int main() {
    // Relational operators : ==, !=, >, >=, <, <=
    string s1="c++", s2="c++";
    if (s1==s2) cout << "equal" << endl; // in java you can't compare string literals like this.
    cout<< &s1 << endl;
    cout<< &s2 << endl; // diff addresses, not same in java (string pool concept)

    //logical operators : &&, ||, ! (and, or, not)
    s2 = "cpp";
    if (!(s1==s2)) cout << "not equal "<<s1<<" "<<s2 << endl;
    if (!2) cout << "2";
    if (!0) cout << "0" << endl; // only not zero is true.


    // bitwise operatos :
    // &, |, ^,  - binary and, or and xor operator
    // ~ binary one's complement
    // << binary left shift
    // >> binary right shift
    cout << (2 & 5) << endl; // 010 & 101 = 0
    cout << (2 & 3) << endl; // 010 & 011 = 010 = 2
    cout << (2 | 5) << endl; // 010 | 101 = 111 = 7
    cout << (2 | 3) << endl; // 010 & 011 = 011= 3
    // xor 0^0 = 0 and 1^1 = 0 and 1^0 or 0^1 = 1
    cout << (2 ^ 5) << endl; // 010 ^ 101 = 111 = 7
    cout << (2 ^ 3) << endl; // 010 ^ 011 = 001 = 1
    cout << ~2 << endl; // ~010 -> one's complement ~x = -(x+1) thus -3
    // to get one's complement flip all bits.
    // to get values from one's complement flip all bits, add 1 and multiply with -1
    cout << (2<<1) << endl;
    cout << (4<<1) <<endl; // multiply by 2^1
    cout << (4<<2) << endl; // multiply by 2^2
    cout << (4<<3) << endl;
    cout << (4>>1) << endl; // divide by 2^1
    cout << (32>>2) << endl;// divide by 2^2


    int i = 2;
    // preincrement and predecrement --i, ++i
    cout << ++i << endl; // increment first than print = 3
    cout << --i << endl; // decrement first than print = 2
    // postincrement and postdecrement i--, i++
    cout << i++ << endl; // print than increment, print 2 and i = 3 now
    cout << i-- << endl; // print 3 than decrement so i = 2 now
    cout << i << endl;

    // ternary operator // if expr is true do left else do right.
    // syntax expr ? expr_left : expr_right;
    i == 2 ? cout<<true<<endl : cout<<false<<endl; // prints 1
    i == 4 ? cout<<true<<endl : cout<<false<<endl; // prints 0
    cout<< endl;
    // sizeof operator : to find size of object in bytes >> amt of ram occupied
    // sizeof is not a function, it is operator only.
    cout << sizeof(bool) << endl; // 1
    cout << sizeof(char) << endl; // 1
    cout << sizeof(short) << endl; // 2
    cout << sizeof(int) << endl; // 4
    cout << sizeof(float) << endl; // 4
    cout << sizeof(double) << endl;// 8
    cout << sizeof(long double) << endl; // 16
    cout << sizeof(long int) << endl; // 4
    cout << sizeof(long long int) << endl; // 8

    cout << sizeof(Base) <<endl; // 1 -- no memeber in class, so 1 byte given to identify diff objects
    cout << sizeof(Base2) << endl; // int member so 4 bytes
    cout << sizeof(Base3) << endl; // 12 due to structural padding. 4 + 1 + 1 + 4 = 10 only, but due to packing 4 + 4 + 4

    char arr[] = {'a', 'a', 'b', 'c', 'd'};
    cout << sizeof(arr) << endl;

    string str = "hello";
    cout << sizeof(str) << endl; // as string is object here.

    char s[] = "hello"; // c style string
    cout << sizeof(s) << endl; // 5 len + null char

    fun(arr); // as arr is declared here only, it is not known to function fun, thus size is not proper.
    // above is the reason we provide array size also as argument to function.
    // thus above prints size of (char*)
    cout << sizeof(char*) << endl;

    // heap memory
    int *ptr = new int(10);
    cout << sizeof(ptr) << endl; // for 64 bit system.
    delete ptr; // to avoid memory leak
    return 0;
}