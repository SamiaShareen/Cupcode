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

void solve(){
    int n,f=0,cnt=0;
    cin >> n;
    vi arr(n);
    vi :: iterator it;
    forcin(arr);

    for(it=arr.begin();it!=arr.end();it++){
        if(*it%2==0){
            *it=*it/2;
        }
        else{
            f=1;
        }
        if(it-arr.begin()==n-1 && f==0){
            cnt++;
            it=arr.begin()-1;
            continue;
        }
    }
    cout << cnt << endl;

}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}