// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define all(a) (a.begin(),a.end())
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
   int n,i,in=0,ay=0,al=0;
   cin >> n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            in++;
        }
        if(i%2!=0 && i%3!=0){
            ay++;
        }
        if(i%2!=0 && i%5==0){
            al++;
        }
    }
    cout <<"Inaya = " << in << el <<"Ayzel = " << ay << el <<"Alice = "<< al << el;
    cout << "Average marks = " << fixed << setprecision(6) << ((double)(in+ay+al)/(double)3) << el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}