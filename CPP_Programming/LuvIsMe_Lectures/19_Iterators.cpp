#include <bits/stdc++.h>
using namespace std;

/*
* v.begin() -> v[0]
* v.end()   -> v[n]
*/

int main(){
    vector<int> v = {2,3,5,6,7};
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl << endl;

    // vector<int> ::iterator it = v.begin();
    // for (it = v.begin(); it != v.end(); it++) {
    //     cout << (*it) << " ";
    // }

    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> ::iterator it;
    for (it = v_p.begin(); it < v_p.end(); it++) {
        //! cout << (*it).first << " " << (*it).second << endl;
        //? we can also iterate like this just in case of pairs
        cout << (it->first) << " " << (it->second) << endl;
    }
    cout << endl;

    //TODO Shorter Iteration
    //? Range based Loops
    //* Here value is copies of each element, to get actual element replace value with &value
    for(auto value: v){
        cout << value << " ";
    }
    //? Auto keyword -> dynamically assumes the datatype
}