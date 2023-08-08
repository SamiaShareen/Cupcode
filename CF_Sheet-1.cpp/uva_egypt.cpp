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
    ll a,b,c,m;
    while(1){
        cin >> a >> b >> c;
        if(a==0 && b==0 && c==0){
            break;
        }
        m=max(a,max(b,c));
        if(m==c){
            if((c*c)==((a*a)+(b*b)))
                cout << "right" << el;
            else 
                cout << "wrong" << el;
        }
        else if(m==a){
            if((a*a)==((c*c)+(b*b)))
                cout << "right" << el;
            else 
                cout << "wrong" << el;
        }
        else{
            if((b*b)==((c*c)+(a*a)))
                cout << "right" << el;
            else 
                cout << "wrong" << el;
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