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
    string s;
    vi arr(26);
    vi :: iterator it;
    string :: iterator i;
    cin >> s;
    for(i= s.begin() ; i!=s.end();i++){
        arr[*i-'a']++;
    }
    for(it=arr.begin();it!=arr.end();it++){
        if(*it!=0){
            cout<<(char)(it-arr.begin()+'a')<<' '<<':'<<' '<<*it<<el;
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