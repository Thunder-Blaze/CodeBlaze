#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int x[n];
        int unequal{};
        int equal{};
        for (int i=0; i<n ; i++){
            cin >> x[i];
        }
        for (int i=0; i<(n-1); i++){
            if (x[i]==x[i+1]){
                equal++;
            } else {
                unequal++;
            }
        }
        cout << "Equal : " << equal << endl;
        cout << "Unequal : " << unequal << endl;
        // int ans = unequal*equal;
        // int temp = equal;
        // n-=unequal;
        // while (n!=1){
        //     temp--;
        //     ans+=temp;
        //     n--;
        //     cout << 0 << endl;
        // }
        // cout << ans << endl;
    }
}