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
    string s,t="hello";
    int cnt=0;
    cin >> s;
    string :: iterator it,is;
    is=s.begin();
    for(it=t.begin();it!=t.end();it++){
        for(;is!=s.end();is++){
            if(*it == *is){
                cnt++;
                is++;
                break;
            }
        }
    }
    if(cnt==sz(t)) cout << "YES\n";
    else cout <<"NO\n";
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}