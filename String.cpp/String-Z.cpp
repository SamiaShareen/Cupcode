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
    string s=".";
    int i,x=-1;
    getline(cin,s);
    while(s[0]!='}'){
        
        getline(cin,s);
        
            x = s.find("//");
            if(x==-1){
                x = s.find("/*");
                if(x!=-1){
                    while(s!="*/"){           
                        getline(cin,s);
                    }
                }
            }

            if(sz(s)==0) continue;
            //cout << x << el;

            if(x==0){
            }
            else if(x>0){
                for(i=0;i<x;i++){
                    cout << s[i];
                }
                cout << el;
            }
            else if(x==-1) cout << s << el;
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