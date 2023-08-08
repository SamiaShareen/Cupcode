// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define all(a) (a).begin(),(a).end()
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



void fun(vi a,int n){
    int i,cnt=0;
    for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            cnt++;
        }
    }
    cout << cnt+1 << el;
}

void solve(){
   int n;
   cin >> n;
   if(n==0){
    cout << '0' << el;
    return;
   }
   vi a(n);
   forcin(a);
   sort (all(a));
   fun(a,n);
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}