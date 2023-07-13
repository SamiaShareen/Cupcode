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

void solve(){
    int n,k,x,i,j;
    cin >> n >> k;
    vi a(n);
    forcin(a);
    x=k%n;
    if(x==0){
        forcout(a);
    }
    else{
        int v1[x],v2[n-x];
        for(i=n-x;i<n;i++){
            cout << a[i] <<' ';
        }
        for(i=0;i<n-x;i++){
            cout << a[i] <<' ';
        }
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