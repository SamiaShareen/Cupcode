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

#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*____________________________________________________________________________________________________________________________________*/



void solve(){
    int n;
    cin >> n;
    vi a(n);
    forcin(a);
    if(n%2==0){
        cout << 2 << el;
        cout << 1 << ' ' <<n<< el;
        cout << 1 << ' ' <<n<< el;
    }
    else{
        cout << 4 << el;
        cout << 1 << ' ' << n << el;
        cout << 1 << ' ' << n-1 << el;
        cout << n-1 << ' ' << n << el;
        cout << n-1 << ' ' << n << el;
    }
}

int main(){
    
    bismillah
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}