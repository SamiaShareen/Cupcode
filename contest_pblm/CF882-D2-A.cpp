// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el endl
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    int n,k,i,j,x;
    ll sum=0;
    cin >> n >> k;
    vi arr(n),vrr;
    forcin(arr);
    for(i=0;i<n-1;i++){
        x=abs((arr[i]-arr[i+1]));
        vrr.push_back(x);
    }
    sort(vrr.begin(),vrr.end());
    for(i=0;i<(n-k);i++){
        sum+=vrr[i];
    }
    cout << sum << el;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}