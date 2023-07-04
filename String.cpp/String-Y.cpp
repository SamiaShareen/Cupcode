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
    int m[25],i,j,p,x1,x2,f=0;
    ll sum=0;
    forcin(m);

    for(i=0;s[i];i++){

        if(s[i]=='?' && f==0 && i!=0){
            x1=m[s[i-1]-'a'];
            p=i;
        }
        if(s[i]=='?' && f==0 && i==0){
            x1=INT_MIN;
            p=i;
        }
        if(s[i+1]!='?' && s[i]=='?' && i!=0 && i!=sz(s)-1){
            x2=m[s[i+1]-'a'];
            f=0;
            if(x2>x1) swap(x1,x2);
            for(j=0;j<26;j++){
                if(m[j]==x1){
                    break;
                }
            }
            for(;s[p]=='?';p++){
                s[p]=(char)j+'a';
            }
        }

        if(s[i+1]!='?' && s[i]=='?' && i==0){
            x1=m[s[i+1]-'a'];
            f=0;
            for(j=0;j<26;j++){
                if(m[j]==x1){
                    break;
                }
            }
            for(;s[p]=='?';p++){
                s[p]=(char)j+'a';
            }
        }
        if(s[i+1]=='?' && s[i]=='?'){
            f=1;
        }
    }
    if(f==1){
        if(s[i-1]=='?')
            for(;s[p]=='?';p++){
                s[p]='a';
            }
        else 
            for(;s[p]=='?';p++){
                s[p]=s[i-1];
            }
    }
    for(i=0;i<sz(s)-1;i++){
        int x = m[s[i]-'a']-m[s[i+1]-'a'];
        if(x<0) x=x*(-1);
        sum+=x;
    }
    cout << sum << el << s;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}