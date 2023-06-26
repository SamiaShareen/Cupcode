#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cin >> x

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

int is_digit(int n){
    vi a;
    vi::iterator it;
    for(int i=0;i<=9;i++)
        a.push_back(i);
    for(it=a.begin();it!=a.end();it++){
        if(*it==n)
            return 0;
    }
    return 1;
}

void solve(){
    int n,m,f=0;
    cin >> n >> m;
    vector<char> arr(n+m+1);
    vector<char> :: iterator it;

    forcin(arr);
    for(it=arr.begin();it!=arr.end();it++){
        if(it-arr.begin()==n){
            if(*it!='-')
                f=1;
        }
        else if(is_digit( *it-'0' )){
            f=1;
        }
    }
    if(f) cout << "No" << endl;
    else cout << "Yes" << endl;
}

int main(){
    int t=1;
    //cin >> t;          //remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}