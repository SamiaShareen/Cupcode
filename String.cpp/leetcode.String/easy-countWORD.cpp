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
// eta AC
void solve(){
    string s;
    getline(cin,s);
    int i,cnt=0;
    for(i=0;s[i];i++){
        if(s[i]==' ' && (s[i+1]!=' ' && s[i+1]!='\0')){
            cnt=0;
            continue;
        }
        if(s[i]!=' '){
            cnt++;
        }
    }
    cout << cnt;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}