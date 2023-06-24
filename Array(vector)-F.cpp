#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
#define vi  vector<int>
// for taking an array
#define forcin(n) for(auto &x : n) cin>>x;


void solve(){
    int n;
    cin >> n;
    vi arr(n);
    vi :: iterator it;
    forcin(arr);
    for(it=arr.end()-1;it!=arr.begin()-1;it--){
        cout << *it <<" ";
    }
}
int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}