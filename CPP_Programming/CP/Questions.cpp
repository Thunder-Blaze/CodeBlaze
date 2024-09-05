#include <bits\stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    if (a[0]>'Z'){
        a[0]-=32;
    }
    cout << a;
}