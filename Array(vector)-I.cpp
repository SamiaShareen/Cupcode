#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
#define vi  vector<int>
#define forcin(n) for(auto &x:n) cin>>x;

void solve(){
    int n;
    cin >> n;
    vi arr(n),v;
    vi :: iterator it,is;
    forcin(arr);

    for(it=arr.begin();it!=arr.end()-1;it++){
        for(is=it+1;is!=arr.end();is++){
            int x=*it+*is+(is-arr.begin())-(it-arr.begin());
            v.push_back(x);
        }
    }

    int min=v[0];
    for(it=v.begin();it!=v.end();it++){
        if(min>v[it-v.begin()]){
            min=v[it-v.begin()];
        }
    }
    cout << min << endl;
}
int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}