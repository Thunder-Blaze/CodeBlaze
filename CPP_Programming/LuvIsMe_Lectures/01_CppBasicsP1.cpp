#include <bits/stdc++.h>
using namespace std;


// https://youtu.be/lHJcLLsre70?list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&t=967


int main(){
    // char, int, double, float, bool
    // long int, long long int
    //  (you can use long & long long instead of above 2)
    char a = 'c';
    int b = 5;
    double c = 3.5;
    b = 4.5; // It gets truncated
    bool d = 321; // d becomes true (i.e. 1)
    d = 0; // d becomes false (i.e. 0)
    d = -123; // d becomes true (i.e. 1)
    cout << endl;
    cout << a << " " << b << " " << c << " " << d << endl;
    cout << 3%9 << endl;
    int ca = 10;
    cout << "ca => " << ca << endl;
    cout<< "ca++ => "  << ca++ << endl;
    cout << "ca => " << ca << endl;
    cout << "++ca => " << ++ca << endl;
    cout << "ca => " << ca << endl;
    // Same for --

    cout << endl;
    cout << endl;


    cout << "The ASCII value of "<< a << " is " << (int) a << endl;

    // Input
    int  x;
    double y;
    char z;
    cin >> x >> y >> z;
    cout << x << " " << y << " " << z;
    // if you give input of z as an integer between 0 to 9, it is
    // stored as a character represented by its ASCII value
    return 0;
}