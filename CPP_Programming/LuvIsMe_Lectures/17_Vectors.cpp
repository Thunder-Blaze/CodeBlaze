#include <bits/stdc++.h>
using namespace std;

/*
* vector<int> x(4,1)
    ? Above command will result in formation of vector of 4 elements each initialized to 1
* vector.push_back()    ->  O(1)
* vector.size()         ->  O(1)

* vector<int> v2 = v;   ->  O(n)    // where n is size of v
*/

int main(){
    int n = 6;
    vector<int> x;
    for (int i = 0; i < n; i++){
        x.push_back(i+1);
        cout << "Pushed : " << i+1 << endl;
        cout << "Size   : " << x.size() << endl;
    }
    cout << "Vector" << endl;
    for (int i = 0; i < n; i++){
        cout << x[i] << " ";
    }
}