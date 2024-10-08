#include <bits/stdc++.h>
using namespace std;

// const int X = 10e5+10;
// long int arr[X];


int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum {};
        while(n){
            sum+=(n%10);
            n/=10;
        }
        cout << sum << endl;
    }
    
}