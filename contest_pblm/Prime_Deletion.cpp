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
    ll i,j;
    string s;
    cin >> s;   //string ta 7 index thake niba 0 index takhe na
    //cout << s << el;
    for(ll mask=1;mask<(1<<9);mask++){ // mask r man joto toto r binary 
        ll x=0,cnt=0,f=1;              // valuer every digit and kore check 
        for(i=8;i>=0;i--){              // for getting the combination
            if(mask & (1<<i)){
                x=(x*10)+(s[8-i]-'0');
                cnt++;
            }
        }
        for(j=2;(j*j)<=x;j++){
            if(x%j==0){
                f=0;
            }
        }
        if(f==1 && cnt>=2){
            cout << x << el;
            return;
        }
    }
    cout << "-1" << el;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}