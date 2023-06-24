#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
#define vi  vector<int>

void solve(){
    int n,i;
    cin >> n;
    vi arr(n);
    vi::iterator it;
    for(auto &x:arr)
        cin >> x;
    int min=arr[0],p=0;
    for(it=arr.begin();it!=arr.end();it++){
        if(min>arr[it-arr.begin()]){
            min=arr[it-arr.begin()];
            p=it-arr.begin();
        }
    }
    cout << min << " " << p+1 << endl;
}
int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}