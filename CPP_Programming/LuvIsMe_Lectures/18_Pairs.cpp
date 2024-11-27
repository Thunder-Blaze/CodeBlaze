#include <bits/stdc++.h>
using namespace std;

/*
* pair.first     ->  first element   ->  O(1)
* pair.second()  ->  second element  ->  O(1)
*/

int main(){
    pair<int,string> p;
    //! p = make_pair(2,"xyz");
    p = {2, "xyz"};
    //TODO we can directly copy a pair 
    pair <int,string> p2 = p;

    cout << p.first << " " << p.second << endl;

    //* Array of Pairs
    pair<int,int> pr[3];
    pr[0] = {1,2};
    pr[0] = {2,3};
    pr[0] = {3,4};
    swap(pr[0],pr[2]);          //? We can swap just like this 
    for (int i = 0; i < 3; i++) {
        cout << pr[i].first << " " << pr[i].second << endl;
    }
    
}