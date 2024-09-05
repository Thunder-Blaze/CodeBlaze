#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 2;
    int b = 3;
    int c = 4;
    cout << endl;
    cout << (a!=b) << endl;
    cout << ((b>a) && (b>c)) << endl;       // And
    cout << ((b>a) || (b>c)) << endl;       // Or


    cout << endl;
    cout << endl;
    int n;
    cin >> n;
    if (n%2==0){
        cout << "YES" << endl;
    } else if (n%3==0) {
        cout << "Divisible by 3" << endl;
    } else {
        cout << "NO" << endl;
    }

    // Everything written inside {} becomes a new scope
    // Scope variables can only be inside its own scope

    
}