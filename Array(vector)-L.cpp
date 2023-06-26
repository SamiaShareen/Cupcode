#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
#define vi  vector<int>
#define forcin(n) for(auto &x:n) cin >> x;
#define forcout(n) for(auto x:n) cout << x;

void solve(){
    int n,i,x,sz,max;
    cin >> n;
    vi arr(n);
    forcin(arr);

    for(sz=0;sz<n;sz++){
        for(x=0;x<n-sz;x++){
            max=arr[x];
            for(i=x;i<=x+sz;i++){
                if(max<arr[i])
                    max=arr[i];
            }
            cout << max << " ";
        }
    }
    cout << endl;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}