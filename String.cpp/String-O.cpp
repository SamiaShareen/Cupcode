#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el endl

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    int n,i,j,a[26]={};
    cin >> n;
    char c;
    for(i=0;i<n;i++){
        cin >> c;
        a[c-'a']++;
    }
    for(i=0;i<26;i++){
        if(a[i]!=0){
            for(j=0;j<a[i];j++){
                cout << (char)(i+'a');
            }
        }
    }
    cout << el;

}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}