// https://youtu.be/nZe7P674xZo?list=PLauivoElc3ggagradg8MfOZreCMmXMmJ-&t=107

/*
Given 2D array ar of N*N integers. Given Q queries and in each query given
a, b, c and d print sum of rectangle represented by (a,b) as top left point and (c, d) as bottom right point

Constraints
1 <= N <= 10^3
1 <= ar[i][j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N
*/

const int N = 1e3+10;
int prfx[N][N];

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int ar[N][N];
    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            cin >> ar[i][j];
            // prfx[i+1][j+1] = ar[i][j];
            prfx[i+1][j+1] = ar[i][j] + prfx[i+1][j] + prfx[i][j+1] - prfx[i][j];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << ( prfx[c][d] - prfx[c][b-1] - prfx[a-1][d] + prfx[a-1][b-1] ) << endl;
    }

    // Time Complexity
    // O(N^2) + O(Q) = O(N^2) === 10^6
}

/*
3
3 6 2
8 9 2
3 4 1
2
1 1 2 2
1 2 3 3
*/