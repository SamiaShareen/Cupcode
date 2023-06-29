#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el endl
#define all(n) n.begin(),n.end()

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    string s;
    string :: iterator it;
    cin >> s;
    replace(all(s),',',' ');
    for(it=s.begin();it!=s.end();it++){
        if(islower(*it)){
            *it=toupper(*it);
        }
        else if(isupper(*it)){
            *it=tolower(*it);
        }
    }
    cout << s;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}