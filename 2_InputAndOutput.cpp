/* IO :
cin = console input
cout = console output

cin and cout both are objects of istream and ostream class respectively,
these 2 classes reside inside istream and ostream header files - merged as iostream.

cin is used with >> (stream extraction operator)
cout is used with << (stream insertion operator)
*/

/*
 *Escape sequences : (used as some of the chars are already used in syntax so how to tell if you want
 *to print it or not? )
    newline escape sequence : \n
    tab : \t
    backspace : \b
    single quotation mark :  \'
    double quotation mark : \"
    backslash : \\
*/
#include <iostream>
using namespace std;

int IO_main() {
    string name; // string datatype, name is variable to store string type value.
    cin >> name; // cin stops reading at whitespaces(space, tab, newline)
    // to read full line use getline(cin, name);
    //cin >> → token-based input
    //getline → line-based input

    cout << "Hello " << name << endl; // printing on console
    // endl is used for newline : as cout uses stream only we have to tell when to change line.
    int i=0, j=0; // interger type variables i and j initialized with 0 value.
    // 2 integers - and addition
    cin >> i >> j; // user input
    cout << "Addition for "<<i <<" and "<<j<< " is "<< i+j <<endl;
    // i+j is expression whereas "i+j" -- will be string
    //'i+j' -- gives garbage values, as it is used with one char only.
    return 0;
}


/*Interview Trap :
When mixing formatted input (cin >>) with line-based input (getline()),
unexpected empty strings may be read.
This occurs because cin >> extracts only the required token
(e.g., an integer or word) and leaves the trailing newline character ('\n')
in the input buffer. When getline() is called immediately afterward,
it encounters this leftover newline and terminates without reading the intended line.
*/