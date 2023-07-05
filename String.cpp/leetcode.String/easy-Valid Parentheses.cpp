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
    int i,f=0,m[10010],l,p=-1;
    l=(int)s.size();
    if(l % 2 == 0){
        for(i=0;s[i];i++){
            if(s[i]=='(') m[i]=1;
            else if(s[i]==')') m[i]=-1;
            else if(s[i]=='{') m[i]=2;
            else if(s[i]=='}') m[i]=-2;
            else if(s[i]=='[') m[i]=3;
            else if(s[i]==']') m[i]=-3;
        }
        for(i=0;i<l;i++){
            if(m[i]==0){
                continue;
            }
            if(p!=-1){
                if(m[p]+m[i]==0 && m[p]>0){
                    m[p]=m[i]=0;
                    p=i=-1;
                }
                else{
                    p=i;
                }
            }
            else if(m[i+1]==0){
                p=i;
            }
            else if(m[i]+m[i+1]==0 && m[i]>0){
                m[i]=m[i+1]=0;
                i=-1;
            }
        }
        for(i=0;i<l;i++){
            if(m[i]!=0){
                f=1;
                break;
            }
        }
        if(f == 0) cout << true;
        else cout << false;
    }
    else cout << false;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}