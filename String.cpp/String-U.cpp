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
    string s;
    cin >> s;
    int i,e=0,g=0,y=0,p=0,t=0;
    for(i=0;s[i];i++){
        if(s[i]=='e' || s[i]=='E') e++;
        else if(s[i]=='g' || s[i]=='G') g++;
        else if(s[i]=='y' || s[i]=='Y') y++;
        else if(s[i]=='p' || s[i]=='P') p++;
        else if(s[i]=='t' || s[i]=='T') t++;
    }
    cout << (e<g ? (e<y?(e<p?(e<t?e:t):(p<t?p:t)):(y<p?(y<t?y:t):(p<t?p:t))) : (g<y?(g<p?(g<t?g:t):(p<t?p:t)):(y<p?(y<t?y:t):(p<t?p:t)))) << el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}