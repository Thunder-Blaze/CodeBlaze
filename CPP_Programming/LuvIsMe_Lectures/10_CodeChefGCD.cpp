/*
Find the GCD of all the elements in array after removing the [L,R] interval
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        int arr[n+10];
        for (size_t i = 1; i <= n; i++){
            cin >> arr[i];
        }

        // Optimal Soln
        int forward[n+10];
        int backward[n+10];
        forward[0] = backward[n+1] = 0;
        for (size_t i = 1; i <= n; i++){
            forward[i] = __gcd(forward[i-1],arr[i]);
        }
        for (size_t i = n; i > 0; i--){
            backward[i] = __gcd(backward[i+1],arr[i]);
        }
        while (q--){
            int l, r;
            cin >> l >> r;
            cout << __gcd(forward[l-1],backward[r+1]) << endl;
        }
        
        // Time Complexity = O(T*N + T*Q) = O(T*N) = 10^6


        // Brute Force
        /*
        while (q--){
            int l, r;
            cin >> l >> r;
            int gc = 0;
            for (size_t i = 1; i <= l-1; i++){
                gc = __gcd(gc,arr[i]);
            }
            for (size_t i = r+1; i <= n; i++){
                gc = __gcd(gc,arr[i]);
            }
            cout << gc << endl;
        }

        // Time Complexity = O(T*N + T*Q*N) = O(T*Q*N) = 10^10
        */
    }
}


/*
1
3 3
2 6 9
1 1
2 2
2 3
*/