// https://youtu.be/nZe7P674xZo?list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&t=107

/*
Given array ar of N integers. Given Q queries and in each query given
L and R print sum of array elements from index L to R (L,R included)

Constraints
1 <= N <= 10^5
1 <= ar[i] <= 10^9
1 <= Q <= 10^5
1 <= L,R <= N
*/

const int N = 1e5+10;
int prfx[N];

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ar[N];
    for (int i=0; i<N; i++){
        cin >> ar[i];
        prfx[i+1] = prfx[i] + ar[i];
    }
    int q;
    cin >> q;
    while(q--){
        int l , r;
        cin >> l >> r;
        cout << ( prfx[r] - prfx[l-1] ) << endl;
    }

    // Time Complexity
    // O(N) + O(Q) = O(N) === 10^5
}

/*
6
3 6 2 8 9 2
4
2 3
4 6
1 5
3 6
*/