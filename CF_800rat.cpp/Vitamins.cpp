// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define all(a) ((a).begin()),((a).end())
#define pb push_back 
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el '\n'
#define YES cout<< "YES\n"
#define NO cout<< "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

/*____________________________________________________________________________________________________________________________________*/



void solve(){
    int n,x,f=0;
    string s;
    cin >> n;
    vi a,m;
    for(int j=0;j<n;j++){
        int p=0;
        cin >> x;
        cin >> s;
        a.pb(x);
        for(int i=0;s[i];i++){
            p+=(int)s[i];
        }
        if(p==198 || p==263 || p==264 || p==265){
            a.pb(x);
            m.pb(p);
        }
    }
    int min=INT_MAX,o=sz(a);
    for(int mask=1;mask<o;mask++){
        int p=0,v=0;
        for(int i=0;i<n;i++){
            if(mask&(1<<i)){
                p+=a[i];
                v+=m[i];
            }
        }
        if(v==198 || v==263 || v==264 || v==265){
            f=1;
            if(min>p){
                min=p;
            }
        }
    }
    if(f){
        cout << min << el;
    }
    else{
        cout << "-1" << el;
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