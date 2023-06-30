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

void solve(){
    string s;
    getline(cin,s);
    int i,cnt=0;
    for(i=0;s[i];i++){
        if((s[i-1]>'Z' && s[i-1]<'a') || s[i-1]<'A' || s[i-1]>'z'){
            continue;
        }
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){}
        
        else cnt++;
        
    }
    if((s[i-1]>='A' && s[i-1]<='Z') || (s[i-1]>='a' && s[i-1]<='z')){
        cnt++;
    }
    cout << cnt << el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}