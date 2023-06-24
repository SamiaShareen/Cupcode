#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,i;
    cin >> n;
    vector<int> arr(n);
    vector<int>::iterator it;
    for(auto &x : arr){
        cin >> x;
    }
    for(i=0;i<(int)arr.size();i++){
        if(arr[i]<=10){
            it=find(arr.begin()+i,arr.end(),arr[i]);
            cout << 'A' << '[' << it-arr.begin() << ']' << " " << '=' << " " << arr[i] << endl;
        }
    }
}
int main(){
    int t=1;
    //cin >> t;          // removr '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}