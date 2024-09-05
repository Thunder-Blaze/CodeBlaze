#include <bits/stdc++.h>
using namespace std;

// Function with return value
int sum(int a, int b){
    int result = a+b;
    return result;
}

// Function without return value
void printhello(){
    cout << "Hello";
}

// Function by Value
int digit_sum(int n){
    int digit_sum = 0;
    while(n){
        digit_sum = digit_sum + n%10;
        n = n/10;
    }
    cout << digit_sum;
}

// Function by Reference
int increment(int &n){
    n++;
    return n;
}

// Function of String
void func(string s){
    cout << s << endl;
    s="l";
    cout << s << endl;
}

int main(){
    // Array size is limited
    // We can't define array of size > 10^5 inside main() or any other function
    //
    // But we can define a const array in global upto size 10^7


    // https://youtu.be/cMTFGOmYT9E?list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&t=40

    // printhello();

    // int n = 4;
    // cout << n << endl;
    // increment(n);
    // cout << n << endl;
    // cin >> n;   
    // digit_sum(n);

    string s =  "asfsa";
    func(s);
    cout << s << endl;

}