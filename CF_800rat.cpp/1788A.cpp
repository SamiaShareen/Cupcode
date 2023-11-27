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
    int n,i,cnt=0;
    cin >> n;
    vi a(n);
    forcin(a);
    for(i=0;i<n;i++){
        if(a[i]==2){
            cnt++;
        }
    }
    if(cnt==0){
        cout << 1 << el;
    }
    else if(cnt%2!=0){
        cout << "-1" << el;
    }
    else{
        cnt=cnt/2;
        i=0;
        for(;i<n;i++){
            if(cnt==0){
                break;
            }
            if(a[i]==2){
                cnt--;
            }
        }
        cout << i << el;
    }
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}