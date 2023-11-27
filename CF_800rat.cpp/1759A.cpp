// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    string s;
    cin >> s;
    int i,n=sz(s);
    vi a;
    if(n==1){
        if(s[i]=='Y'|| s[i]=='e' || s[i]=='s'){
            YES;
            return;
        }
        else{
            NO;
            return;
        }
    }
    for(i=0;i<n;i++){
        if(s[i]=='Y'){
            a.pb(1);
        }
        else if(s[i]=='e'){
            a.pb(2);
        }
        else if(s[i]=='s'){
            a.pb(3);
        }
        else{
            a.pb(-5);
        }
    }
    int f=1;
    for(i=0;i<n-1;i++){
        if(a[i]+1 == a[i+1]){
            continue;
        }
        if(a[i]==3 && a[i+1]==1){
            continue;
        }
        else{
            f=0;
            break;
        }
    }
    if(f) YES;
    else NO;
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