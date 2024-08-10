#include <iostream>
using namespace std;

int glo = 6;

void num(){
    cout << "\n" << glo;
}

// Local Variable has more precedence than Global Variables

int main(){
    // int a = 14;
    // int b = 6;
    int a = 14, b = 6;
    int pi = 3.14;
    char c = 'Z';
    bool x = true; // true is treated as 1 and false as 0 in value
    cout << "The value of a is " << a << ".\nThe value of b is " << 6 << ".\n";
    cout << "The value of pi is " << pi;
    cout << "\nThe value of c is " << c;
    cout << "\nThe value of x is " << x;

    int glo = 9;
    glo = glo + 1;
    num();
    cout << glo << "\n";
    return 0;
}