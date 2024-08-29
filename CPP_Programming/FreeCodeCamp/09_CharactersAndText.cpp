#include <iostream>
using namespace std;

int main(){
    char c1 {'a'};
    // One byte in memory : 2^8 =256 different values (0 ~ 255)
    cout << "c1 : " << c1 << endl;
    
    // It is possible to assign a valid ASCII code to char variable, and the
    // corresponding character will be stored in. You choose to interpret that
    // either as a character or a regular integral value.

    char value = 65;  // ASCII character code for 65 is 'A'
    // value becomes (value % 256)
    cout << "value : " << value << endl;
    cout << "value(int) : " << static_cast<int>(value) << endl;

    // ASCII was among the first encodings to represent text in computer.
    // It falls short when it comes to representing languages other than English
    // There are better ways to represent text that is meant to be seen in different
    // languages, one of the most common being Unicode

    return 0;
}