#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
#define vi vector<int>

void solve(){
    int n,i;
    cin >> n;
    vi arr(n);
    vi::iterator it;
    for(auto &x : arr){
        cin >> x;
        if(x<0){
            cout << '2' << " ";
        }
        else if(x>0){
            cout << '1' << " ";
        }
        else{
            cout << '0' << " ";
        }
    }
}
int main(){
    int t=1;
    //cin >> t;        // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}