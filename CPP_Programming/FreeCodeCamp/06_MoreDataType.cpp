#include <iostream>
using namespace std;

int main(){
    int a = 3;

    // Size of variable
    cout << sizeof(int) << endl;
    cout << sizeof(a) << endl;


    // Sign of the Number
    unsigned int x;         // (Can only be +)
    signed int y;           // (Can be + or -) This is Default
    

    // Numerical Data Types
    short ast1 {122};       // Takes 2 Bytes
    int ast2 {333};         // Takes 4 Bytes
    long ast3 {12};         // Takes 4 or 8 Bytes
    long long ast4 {0};     // Takes 8 Bytes

    cout << "Size of Short      : " << sizeof(short) << endl;
    cout << "Size of Int        : " << sizeof(int) << endl;
    cout << "Size of Long       : " << sizeof(long) << endl;
    cout << "Size of Long Long  : " << sizeof(long long) << endl;

    return 0;
}