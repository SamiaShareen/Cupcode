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
    int n,i,cnt1=0,cnt0=0;
    cin >> n;
    if(n&(1<<0)){
        for(i=0;(1<<i)<=n;i++){
            if(n&(1<<i)){
                cnt1++;
                if(cnt1/2.0!=0){
                }
                else{
                    cout << 2 <<' ';
                    cnt1=0;
                }
            }
            else{
                cout << 0 <<' ';
            }
        }
    }
    else{
        cout << "-1";
    }
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
        cout << el;
    }
    return 0;
}





/*_____________________________________________IGNORE_________________________________________________________________________________*/
    
   