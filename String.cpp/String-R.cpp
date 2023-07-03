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
    int n,i,cnt=0,scr=0;
    string s;
    cin >> n;
    cin >> s;
    for(i=0;s[i];i++){
        cnt++;
            if(s[i]=='V'){
                scr+=5;
            }
            else if(s[i]=='W'){
                scr+=2;
            }
            else if(s[i]=='X' && i!=sz(s)-1){
                i++;
            }
            else if(s[i]=='Y' && i!=sz(s)-1){
                s.push_back(s[i+1]);
                i++;
            }
            else if(s[i]=='Z' && i!=sz(s)-1){
                if(s[i+1]=='V'){
                    scr/=5;
                    i++;
                }
                else if(s[i+1]=='W'){
                    scr/=2;
                    i++;
                }
            }
    }
    cout <<scr << el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}