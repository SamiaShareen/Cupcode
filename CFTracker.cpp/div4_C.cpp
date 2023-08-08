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
    int  n,i,f=0;
    cin >> n;
    vi a(n);
    forcin(a);
    for(i=0;i<n-2;i++){
        if(i%2==0 && a[i]%2==0){
            if(a[i+2]%2!=0){
                f=1;
            }
        }
        else if(i%2==0 && a[i]%2!=0){
            if(a[i+2]%2==0){
                f=1;
            }
        }
        else if(i%2!=0 && a[i]%2==0){
            if(a[i+2]%2!=0){
                f=1;
            }
        }
        else if(i%2!=0 && a[i]%2!=0){
            if(a[i+2]%2==0){
                f=1;
            }
        }
    }
    if(f==1) NO;
    else YES;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}
