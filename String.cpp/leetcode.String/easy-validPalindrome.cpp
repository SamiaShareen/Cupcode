// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el endl
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    string s,t;
    getline(cin,s);
    int i,l,f=0;
    for(i=0;s[i];i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
            t.push_back(s[i]);
        }
        else if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
            t.push_back(s[i]);
        }
    }
    l=(int)t.size();
    //cout << l << el;
    for(i=0;i<(l/2);i++){
        if(t[i]!=t[l-i-1]){
            f=1;
        }
    }
    if(f==1) cout << false;
    else cout << true;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}