#include <bits\stdc++.h>
using namespace std;

int main(){
    // int t;
    // cin >> t;
    // while(t--){
    //     int l, r;
    //     cin >> l >> r;
    //     // int count {};
    //     int diff = 1;
    //     for (int i=l; i<=r;){
    //         i+=diff;
    //         diff++;
    //         // count++;
    //     }
    //     cout << diff-1 << endl;
    // };
    int n {5};
    cin >> n;
    for (int i=n; i ;i--){
        int j = 0;
        while(j!=i){
            cout << ++j;
        }
        for (int l = 0; l < ((n-i)*2); l++)
        {
            cout << "*";
        }
        while(j){
            cout << j;
            j--;
        }
        cout << endl;
    }
}