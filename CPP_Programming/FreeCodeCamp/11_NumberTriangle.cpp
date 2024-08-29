#include <iostream>
using namespace std;

// int func(int n){

// }

int main(){
    int n;
    cout << "Enter a Number : ";
    cin >> n;
    // func(n);
    int x = 1;
    while (x!=(n+1)){
        for (int j=0; j<(n-x); j++){
            cout << " ";
        }
        for (int i=0; i<x ;i++){
            cout << (i+1);
        }
        for (int i=x-1; i>0 ;i--){
            cout << (i);
        }
        cout << endl;
        x++;
    }
}