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
/*____________________________________________________________________________________________________________________________________*/

void solve(){
    string s;
    cin >> s;
    int i,n,cnt=0,x;
    n=sz(s);
    for(i=0;i<n;i++){
        if(s[i]=='?'){
            cnt++;
        }
    }
    if(s[0]>='1' && s[0]<='9'){
        x=(int)pow(10,(double)cnt);
    }
    else if(s[0]=='?'){
        x=(int)pow(10,(double)cnt)-pow(10,(double)(cnt-1));
    }
    else{
        x=0;
    }
    cout << x << el;
}


int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}