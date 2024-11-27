#include <bits/stdc++.h>
using namespace std;

//> Author  - ThunderBlaze
//> College - IIITL

// |> Hello There +_+

// <| Template Begins |>  
#define int long long
#define fastkill ios_base::sync_with_stdio(false);cin.tie(NULL)
#define fr(i, a, n) for (int32_t i = a; i < n; i++)
#define frs(i, a, n, s) for (int32_t i = a; i < n; i += s)
#define rfrs(i, a, n, s) for (int32_t i = a; i >= n; i -= s)
#define ff first
#define ss second
#define dedmap unordered_map
#define dedset unordered_set
#define invec(x) fr(i,0,x.size()){cin>>x[i];}
#define ptr(x) x.begin(), x.end()
#define rptr(x) x.rbegin(), x.rend()
#define pb push_back
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define sz(x) x.size()
// <| Template Ends |>  

bool rcmp_pair(pair<int, int> p, int val){
    return p.ss > val;
}
 
bool cmp_pair(pair<int, int> p, int val){
    return p.ss < val;
}

bool isDivisible(int n,int k){
    if((int)((int)n / (int)k) * k == n) return true;
    return false;
}

bool isPrime(int n){
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}
 
int32_t countChars(string s, char c){
    int32_t count = 0;
    for(auto &ch: s) if(ch == c) count++;
    return count;
}

void killemall(){
    // int a, b, xk, yk, xq, yq;
    // cin >> a >> b >> xk >> yk >> xq >> yq ;
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    invec(a);
}

int32_t main(){
    fastkill;
    int t = 1;
    cin >> t;
    while(t--){
        killemall();
    }
}