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
    int n,max,max2,i,j;
    cin >> n;
    vi a(n),v;
    forcin(a);
    auto m=a;
    sort(all(m));
    max=m[n-1];
    for(i=0;i<n;i++){
        if(a[i]!=max){
            v.pb(a[i]-max);
        }
        else{
            max2=m[n-2];
            v.pb(max-max2);
        }
    }
    forcout(v);
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