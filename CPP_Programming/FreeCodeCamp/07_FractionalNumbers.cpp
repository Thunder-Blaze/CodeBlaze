#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    // Decimal DataTypes
    // Remember to use these suffixes else problem might occur
    float a {1.2345678901234567890f};
    double b {1.2345678901234567890};
    long double c  {1.2345678901234567890L};


    // Size of Double
    cout << "Size of Float :" << sizeof (float) << endl;
    cout << "Size of Double :" << sizeof (double) << endl;
    cout << "Size of Long Double :" << sizeof (long double) << endl;

    // cout << setprecision(20);
    // cout << "a is " << a <<endl;
    // cout << "b is " << b <<endl;
    // cout << "c is " << c <<endl;


    // Scientific Notation
    double n5 {192400023};
    double n6 {1.92400023e8};
    double n7 {1.924e8};
    double n8 {0.00000000003498};
    double n9 {3.498e-11};

    double n10 {5.6};
    double n11 {}; // 0
    double n12 {}; // 0

    // Infinity
    double result {n10/n11};
    
    cout << "Num 10 / Num 11 yields " << result << endl;
    cout << result << " + " << n10 << " yields " << (result+n10) << endl;

    // NaN
    result = n11/n12;

    cout << n11 << " / " << n12 << " = " << result << endl;
}