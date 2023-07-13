// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}
int n,i,j;
void MM(vi m){
    int mi=m[0],ma=m[0];
    for(i=0;i<n;i++){
        if(mi>m[i]){
            mi=m[i];
        }
    }
    for(i=0;i<n;i++){
        if(ma<m[i]){
            ma=m[i];
        }
    }
    cout << mi <<' '<< ma;
}

void solve(){
    cin >> n;
    vi a(n);
    forcin(a);
    MM(a);
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}