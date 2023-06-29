#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el endl

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}
// main code start from here :/
void solve(){
    string s,t;
    int i,j,ls,lt;
    cin >> s >> t;
    ls=sz(s);
    lt=sz(t);
    if(ls>lt){
        for(i=0;t[i];i++){
            cout <<s[i]<<t[i];
        }
        for(;s[i];i++){
            cout<<s[i];
        }
    }
    else{
        for(i=0;s[i];i++){
            cout <<s[i]<<t[i];
        }
        for(;t[i];i++){
            cout<<t[i];
        }
    }
    cout << el;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}