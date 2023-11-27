// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    int n,i,cnt=0;
    cin >> n;
    string s;
    cin >> s;
    for(i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
        if(i%2!=0){
            if(cnt%2==0){
                cout << '-';
            }
            else{
                cout << '+';
            }
        }
        else if(i%2==0 && i!=0){
            if(cnt%2==0){
                cout << '-';
            }
            else{
                cout << '+';
            }
        }
    }
}

int main(){
    
    bismillah
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
        cout << el;
    }
    return 0;
}