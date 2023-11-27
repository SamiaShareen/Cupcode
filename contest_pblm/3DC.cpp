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
    int a,b,i;
    cin >> a >> b;
    if(a==b){
        for(i=2;i*i<=a;i++){
            if((__gcd(i,a-i))!=1){
                cout << i << ' ' << a-i << el;
                //cout << __gcd(2,1791791) << el;
                return;
            }
        }
    }
    else{
        for(i=b-2;((2+i)>=a && (2+i)<=b);i--){
            if(i==0){
                break;
            }
            if((__gcd(2,i))!=1){
                cout << 2 << ' ' << i << el;
                return;
            }
        }
    }
    cout << "-1" << el;
    //cout << __gcd(2,1791788) << el;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}