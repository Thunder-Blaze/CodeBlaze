/*
Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

Example


Queries are interpreted as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of  between the indices  and  inclusive:

index->	 1 2 3  4  5 6 7 8 9 10
	[0,0,0, 0, 0,0,0,0,0, 0]
	[3,3,3, 3, 3,0,0,0,0, 0]
	[3,3,3,10,10,7,7,7,0, 0]
	[3,3,3,10,10,8,8,8,1, 0]
The largest value is 10 after all operations are performed.

! Constraints
! 3 <= n <= 10^7
! 1 <= m <= 2*10^5
! 1 <= a <= b <= n
! 1 <= k <= 10^9
*/

#include <bits/stdc++.h>
using namespace std;
const int X = 10e7+10;
long long int arr[X];

int main(){
    int n, m;
    cin >> n >> m;

    // Optimal Solution
    while(m--){
        int a, b, k;
        cin >> a >> b >> k;
        arr[a] += k;
        arr[b+1] -= k;
    }
    long long int mx = -1;
    for (size_t i = 1; i <= n; i++){
        arr[i] = arr[i-1] + arr[i];
        if (arr[i]>mx){
            mx = arr[i];
        }
    }
    cout << mx << endl;

    // Time Complexity = O(M+N) = O(N) = 10^7
    


    // Brute Force
    /*
    while(m--){
        int a, b, k;
        cin >> a >> b >> k;
        for (size_t i = a; i <= b; i++){
            arr[i]+=k;
        }
    }
    long long int mx = -1;
    for (size_t i = 1; i <= n; i++){
        if (arr[i]>mx){
            mx = arr[i];
        }
    }
    cout << mx << endl;

    // Time Complexity = O(M*N + N) = O(M*N) = 2*10^12
    */
}

/*
5 3
1 2 100
2 5 100
3 4 100
*/