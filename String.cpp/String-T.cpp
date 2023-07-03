// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el cout << endl
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    string s;
    cin >> s;
    int n,i;
    n=s.find("username");
    cout << "username: ";
    for(i=n+9;s[i]!='&';i++){
        cout << s[i];
    }
    el;
    n=s.find("pwd");
    cout << "pwd: ";
    for(i=n+4;s[i]!='&';i++){
        cout << s[i];
    }
    el;
    n=s.find("profile");
    cout << "profile: ";
    for(i=n+8;s[i]!='&';i++){
        cout << s[i];
    }
    el;
    n=s.find("role");
    cout << "role: ";
    for(i=n+5;s[i]!='&';i++){
        cout << s[i];
    }
    el;
    n=s.find("key");
    cout << "key: ";
    for(i=n+4;s[i];i++){
        cout << s[i];
    }
    el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}