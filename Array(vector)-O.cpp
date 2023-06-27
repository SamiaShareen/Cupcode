#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cin >> x

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    ll n;
    cin >> n;
    vl fib(n+2);
    vl :: iterator it;
    fib[0]=0;
    fib[1]=0;
    fib[2]=1;
        for(it=fib.begin()+3;it!=fib.end();it++){
            fib[it-fib.begin()]=fib[it-fib.begin()-1]+fib[it-fib.begin()-2];
        }
    cout << fib[n];
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}