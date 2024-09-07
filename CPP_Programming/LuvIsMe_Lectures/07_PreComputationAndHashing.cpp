/*
Given array a of N integers. Given Q queries and in each query
given a number X, print count of that number in array.

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5
*/

#include <bits\stdc++.h>
using namespace std;


// // Pre Computation
// const int M = 1e9 + 7;
// const int N = 1e5 + 10;
// long long fact[N];
// int main(){
//     fact[0] = fact[1] = 1;
//     for (int i=2; i<N; i++){
//         fact[i] = (fact[i-1] * i) % M;
//     }
//     int t;
//     cin >> t;
//     while(t--){
//         int x;
//         cin >> x;
//         cout << fact[x] << endl;
//     }

//     // Time Complexity
//     // O(T*N) = 10^10            === O(N^2)     OLD METHOD
//     // O(N) + O(T) = 10^5 + 10^5 === O(N)       NEW METHOD
// }





// // Querying
//
// int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i=0; i<n; i++){
//         cin >> a[i];
//     }
//     int q;
//     cin >> q;
//     while (q--){
//         int x;
//         cin >> x;
//         int ct = 0;
//         for (int i=0; i<n; ++i){
//             if (a[i] == x){
//                 ct++;
//             }
//         }
//         cout << ct << endl;
//     }

//     // Time Complexity
//     // O(n) + O(q*n)  ===  O(n^2)
// }





// // Hashing
//
const int N = 1e7 + 10;
// Hash can only be used when the a[i] are <= 10^7
// If numbers are negetive then add the most negative number with positive sign to all the "i" in hash array
int hsh[N];  // Global Initalised arrays are "0" initialised
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        hsh[a[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        cout << hsh[x] << endl;
    }

    // Time Complexity
    // O(N) + O(Q) = O(N) = 2*10^5
}