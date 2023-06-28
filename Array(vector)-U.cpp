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
    int n,m;
    cin >>n>>m;
    vi arr(n),vrr(m),p;
    vi :: iterator it,is;
    forcin(arr);
    forcin(vrr);
    is=arr.begin();

    for(it=vrr.begin();it!=vrr.end();it++){
        for( ; is!=arr.end() ; is++){
            if(*it==*is){
                p.push_back(is-arr.begin());
                is++;
                break;
            }
        }
    }
    //forcout(p);
    if((int)p.size()==m) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}