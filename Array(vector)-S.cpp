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
    int n,m,i,j,p,x;
    cin >> n >> m;
    vector<int> arr;
    vector<int>::iterator it,is;
    
    for(i=0;i<n*m;i++)
    {
            cin >> p;
            arr.push_back(p);
    }
    cin >> x;
    
    it=find(arr.begin(),arr.end(),x);
    if(it == arr.end())
    {
        cout << "will take number" << endl;
    }
    else
    {
        cout << "will not take number" << endl;
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