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
// done manually
void solve2(){
    string s;
    string :: iterator it;
    cin >> s;
    int f=0,l;
    l=sz(s);
    if(l>2){
        for(it=s.begin()+1;it!=s.end()-1;it++)
        {
            if(*it!=*(it+1) && *it!=*(it-1))
                f=1;
        }
        if(f) cout << "Good\n";
        else cout << "Bad\n";
    }
    else cout << "Bad\n";
}

// by using function
 void solve(){
    string s;
    cin >> s;
    int l=sz(s);
    if(l>2){
        if(s.find("101")<l) cout << "Good\n";
        else if(s.find("010")<l) cout << "Good\n";
        else cout << "Bad\n";
    }
    else cout << "Bad\n";
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
        //slove2();
    }
    return 0;
}