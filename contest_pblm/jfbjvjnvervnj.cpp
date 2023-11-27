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
    int i,n,c=0;
    n=sz(s);
    for(i=0;s[i];i++){
        if(s[i]=='h' && c==0){
            c++;
        }
        else if(c>=1 && s[i]=='e'){
            c++;
        }
        else if(c>=2 && s[i]=='l'){
            c++;
        }
        else if(c>=4 && s[i]=='o'){
            c++;
        }
    }
    if(c>4) YES;
    else NO;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}