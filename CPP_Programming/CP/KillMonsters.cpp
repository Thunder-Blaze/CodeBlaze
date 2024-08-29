#include <bits/stdc++.h>
using namespace std;

// int maxi(int arr[], int n){
//     int max = 0;
//     int maxi = -1;
//     for (int i = 0; i < n; i++){
//         if ((arr[i]>max)) {
//             max = arr[i];
//             maxi = i;
//         }
//     }
//     cout << arr[maxi] << endl;
//     return maxi;
// }

// int specmax(int arr[], int n,int x){
//     int max = 0;
//     int maxi = -1;
//     for (int i = 0; i < n; i++){
//         if ((arr[i]>max)&&(arr[i])<x) {
//             max = arr[i];
//             maxi = i;
//         }
//     }
//     return maxi;
// }

// int maximum(int a, int b){
//     if (a>b) return a;
//     return b;
// }

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--){
        int n,x,k;
        cin >> n >> x >> k;
        int h[n];
        for (int m = 0; m < n; m++){
            cin >> h[m];
        }
        // for (int m = 0; m < n; m++){
        //     cout << h[m];
        // }
        // cout << endl;
        int count  = 0;
        int spell = 1;
        while (true){
            int max = 0;
            int mi = -1;
            int l;
            for (int j = 0; j < n; j++){
                // cout << h[j];
                if ((h[j]>max)) {
                    max = h[j];
                    mi = j;
                // cout << (l++) << "th max : " << max << endl;
                }
            }
            // int mi = maxi(h,n);
            // cout << h[mi] << endl;
            if (mi==-1){
                break;
            }
            if (h[mi]>=((spell==1)?(x*k):(x))){
                h[mi]=0;
            }
            // int smi = specmax(h,n,x);
            // int smik = specmax(h,n,(x*k));
            if((x<=h[mi])&&((x*k)>h[mi])&&(spell==1)){
            // cout << h[mi] <<"*"<<k << endl;
                x=x*k;
                spell--;
            }
            if ((x>h[mi])&&(h[mi]!=0)){
                x = h[mi];
                h[mi] = 0;
                count++;
            }
            // if ((smik != -1 && spell==1)){
                // x=h[smik];
                // h[smik]=0;
                // count++;
        }
        cout << count << endl;
    }
}