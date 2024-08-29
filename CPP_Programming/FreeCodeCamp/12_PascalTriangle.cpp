#include <iostream>
using namespace std;

int func(int n, int r){
    if (r>(n/2.0)){
        r = n-r;
    }
    if (r==0){
        return 1;
    }
    int pro = 1;
    for (int i=0; i<r; i++){
        pro*=(n-i);
    };
    return (pro/r);
}

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;

    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << func(i,j) << " ";
        }
        cout << endl;
    }

    // cout << func(n,r);

    // int x = 0;
    // while (x!=(n+1)){
    //     for (int j=0; j<(n-x); j++){
    //         cout << " ";
    //     }
    //     for (int i=0; i<x ;i++){
    //         cout << (i+1);
    //     }
    //     for (int i=x-1; i>0 ;i--){
    //         cout << (i);
    //     }
    //     cout << endl;
    //     x++;
    // }
}