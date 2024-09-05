#include <bits/stdc++.h>
using namespace std;

/*
// Reverse the string
int main(){
    string str;
    cin >> str;
    // int n = str.size();
    string rev;
    // string rev[n];
    for (int i=str.size(); i; i--){
        // rev[(n-i)]=str[(i-1)];
        rev.push_back(str[(i-1)]);
    }
    // for (int i=0; i<n; i++){
    //     cout << rev[i];
    // }
    cout << rev << endl;
}
*/




/*
// Check if the string is Palindrome
// -------------- M1 ---------------
// int main(){
//     string str;
//     cin >> str;
//     string rev;
//     for (int i=str.size(); i; i--){
//         rev.push_back(str[(i-1)]);
//     }
//     if (str == rev){
//         cout << "This is a Palindrome" << endl;
//     } else {
//         cout << "This is not a Palindrome" << endl;
//     }
// }

// --------------- M2 ----------------
int main(){
    string str;
    cin >> str;
    bool palindrome{1};
    int n = str.size();
    for (int i=0 ; i<(n/2) ; i++){
        if (str[i]!=str[n-i-1]){
            palindrome = 0;
            break;
        };
    }
    if (palindrome){
        cout << "This is a Palindrome" << endl;
    } else {
        cout << "This is not a Palindrome" << endl;
    }
}
*/



// How to deal with large numbers in CP
int main(){
    string s;
    cin >> s;
    int last_digit = s[s.size()-1] - '0';
    cout << last_digit;
}