#include <iostream>
using namespace std;

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
    return 0;
}