#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define ll long long
#define vl vector<ll>
#define forcin(n) for(auto &x:n) cin >> x;

void solve(){
    int n,j=0;
    cin >> n;
    vi arr(n),vrr(n);
    vi::iterator it;
    forcin(arr);
    for(it=arr.end()-1;it!=arr.begin()-1;it--){
        vrr[j]= *it;
        j++;
    }
    if(arr==vrr) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}