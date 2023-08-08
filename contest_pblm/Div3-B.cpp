// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define all(a) (a.begin(),a.end())
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
    int n,i,j,t;
    cin >> n;
    vi a(n),v;
    forcin(a);
    v=a;
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
        if(v[i]%2==0 && a[i]%2==0){
            continue;
        }
        else if(v[i]%2!=0 && a[i]%2!=0){
            continue;
        }
        else{
            NO;
            return;
        }
    }
    YES;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}