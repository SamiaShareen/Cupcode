#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define yes "YES"<<endl
#define no "NO"<<endl

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    int n,cnt=0;
    cin >> n;
    vi arr(n),v;
    vi :: iterator it,is,in;

    forcin(arr);

    for(it=arr.begin();it!=arr.end();it++){
        for(is=arr.begin();is!=arr.end();is++){
            int f=0,p=0;
            vi v,w;
            for(in=it;in<=is;in++){
                v.push_back(*in);
                p=1;
            }
            if(p==1){
                w=v;
                sort(v.begin(),v.end());
                if(v==w){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}