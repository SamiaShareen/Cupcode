#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    int n,m,x;
    cin >> n >> m;
    vi arr(n);
    vi :: iterator it;
    forcin(arr);
    sort(arr.begin(),arr.end());
    while(m--){
        cin >> x;
        if(binary_search(arr.begin(),arr.end(),x))
            cout << "found" << endl;
        else cout << "not found" << endl;
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