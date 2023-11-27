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
    int a,b,c;
    cin >> a >> b >> c;
    if(b>c){
        if(a==b){
            cout << 3 << el;
        }
        else if(a>b){
            cout << 2 << el;
        }
        else{
            cout << 1 << el;
        }
    }
    else{
        if(a==(abs(b-c)+c)){
            cout << 3 << el;
        }
        else if((abs(b-c)+c)<a){
            cout << 2 << el;
        }
        else{
            cout << 1 << el;
        }
    }
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}