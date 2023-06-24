#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
#define vi  vector<int>
#define forcin(n) for(auto &x:n) cin >>x;

//solve with iterator is cool heh ;/

void solve(){
    int n,temp;
    cin >> n;
    vi arr(n);
    vi :: iterator it,is;
    forcin(arr);
    for(it=arr.begin();it!=arr.end();it++){
        for(is=it+1;is!=arr.end();is++){
            if(arr[it-arr.begin()]>arr[is-arr.begin()]){
                temp=arr[it-arr.begin()];
                arr[it-arr.begin()]=arr[is-arr.begin()];
                arr[is-arr.begin()]=temp;
            }
        }
    }
    for(it=arr.begin();it!=arr.end();it++)
        cout << *it << ' ';
}

// what if I use sort func. ?

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}