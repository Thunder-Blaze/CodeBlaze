#include <bits/stdc++.h>
using namespace std;

// const int X = 10e5+10;
// long int arr[X];


int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        bool result{};
        if (((((a+c))%(b*2))==0)&&(((a+c)/2)>0)){
            result = 1;
            cout << "debug : 1" << endl;
        } else if (((a+(b-a)*2)%c==0)&&((a+(b-a)*2)>0)) {
            result = 1;
            cout << "debug : 2" << endl;
        } else if (((c-(b-c)*2)%c==0)&&((c-(b-c)*2)>0)) {
            result = 1;
            cout << "debug : 3" << endl;
        }
        cout << ((result)?"YES":"NO") << endl;
    }
    
}