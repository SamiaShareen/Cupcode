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
    int n,i;
    cin >> n;
    vi a(n);
    forcin(a);
    if(n==1){
        if(a[0]==0) YES;
        else NO;
        return;
    }
    int max=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    vi ar(max+1,0),vr;
    for(i=0;i<n;i++){
        ar[a[i]]++;
    }
    vr=ar;
    sort(ar.rbegin(),ar.rend());
    if(vr==ar) YES;
    else NO;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}

