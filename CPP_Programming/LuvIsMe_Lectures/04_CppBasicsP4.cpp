#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << endl;
    string str1 = "Hello";
    cout << str1 << endl;
    // string str2;
    // cin >> str2;
    string str2 = "World";
    cout << str2 << endl;
    string str3 = str1 + " " + str2;
    cout << str3 << endl;

    cout << endl;
    if (str1 == str2){
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }

    cout << str1[0] << endl;
    str1[0]='X';
    cout << str1 << endl;
    cout << str1.size() << endl;


    // String Input with spaces
    cout << endl;
    string str4;
    getline(cin, str4);


    // Input Multiple space seperated strings
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        cout << s << endl;
    }
}