#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
#define vi vector<int>

void solve(){
    int n,i,x;
    vi arr;
    vi::iterator it;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
    cin >> x;
    it = find(arr.begin(),arr.end(),x);
    if(it != arr.end()){
        cout << it-arr.begin() << endl;
    }
    else{
        cout << -1 << endl;
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