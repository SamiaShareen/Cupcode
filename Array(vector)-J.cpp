#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
#define vl vector<long long>
#define forcin(n) for(auto &x:n) cin>>x;

void solve(){
    int n;
    cin >> n;
    vi arr(n);
    vi :: iterator it;
    forcin(arr);
    int min=arr[0],cnt=0;
    for(it=arr.begin();it!=arr.end();it++){
        if(min>*it){
            min=*it;
        }
    }
    for(it=arr.begin();it!=arr.end();it++){
        if(*it==min){
            cnt++;
        }
    }
    if(cnt%2!=0) cout << "Lucky" << endl;
    else cout << "Unlucky" << endl;

}

int main(){
    int t=1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}