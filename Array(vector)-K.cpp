#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vl;
#define forcin(n) for(auto &x : n) cin >> x;

void solve(){
    int n,sum=0;
    cin >> n;
    vector<char> arr(n);
    vector<char>::iterator it;
    forcin(arr);

    for(it=arr.begin();it!=arr.end();it++){
        sum+= *it-'0' ;
    }
    cout << sum << endl;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}