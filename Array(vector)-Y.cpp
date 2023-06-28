#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    int n,m,l,r;
    cin >> n >> m;

    vl arr(n),psum(n);
    vl :: iterator it;
    forcin(arr);

    psum[0]=arr[0];

    for(it = arr.begin()+1; it-arr.begin()<n; it++)
    {
        psum[it-arr.begin()]=psum[it-arr.begin()-1]+ *it;
    }
    //forcout(psum);

    while(m--){
        cin >>l>>r;
        if(l==1)
        {
            r--;
            cout << psum[r] << endl;
        }
        else
        {
            l--;
            r--;
            cout << psum[r]-psum[l-1] << endl;
        }
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