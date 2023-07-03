//Bismillahir Rahmanir Raheem
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
    int l=0,r=0,cnt=0,i,j=0;
    string s;
    cin >> s;
    for(i=0;s[i];i++){
        if(s[i]=='L') l++;
        else r++;
        if(l==r){
            cnt++;
            l=r=0;
        }
    }
    cout << cnt << el;
    for(i=0;s[i];i++){
        if(s[i]=='L') l++;
        else r++;
        if(l==r){
            for(;j<=i;j++){
                cout << s[j];
            }
            cout << el;
            l=r=0;
        }
    }
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}