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
    int i,f=0;
    for(i=0;s[i];i++){
        if(s[i]=='E'){
            if(s[i+1]=='G'){
                if(s[i+2]=='Y'){
                    if(s[i+3]=='P'){
                        if(s[i+4]=='T'){
                            cout <<" ";
                            i+=4;
                        }
                        else f=1;
                    }
                    else f=1;
                }
                else f=1;
            }
            else f=1;
        }
        else f=1;
        if(f==1){
            cout << s[i];
            f=0;
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