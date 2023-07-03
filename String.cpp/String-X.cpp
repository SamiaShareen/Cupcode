// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el endl
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    vector<string> temp;
    string s;
    cin >> s;
    int i,k;
    if(sz(s)>1){
        for(i=0 ; i<sz(s)-1 ; i++){
            int j=0;
            string t,u,v;
            for(;j<=i;j++){
                u.push_back(s[j]);
            }
            for(k=i+1;s[k];k++){
                v.push_back(s[k]);
            }
            sort(u.begin(),u.end());
            sort(v.begin(),v.end());
            t=u+v;
            temp.push_back(t);
        }
        sort(temp.begin(),temp.end());
        cout << temp[0] << el;
    }
    else{
        cout << s << el;
    }
}

//sol^n 2

void solve_2()
{
    string s;
    int i=0;
    cin >> s;
    string x,y,z,ans=s;
    for(int i = 0; i < sz(s)-1; i++)
    {
        x = s.substr(0, i+1);
        //cout << x << el;
        y=s.substr(i+1);
        //cout << y << el;
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        z = x + y;
        if(z < ans)
        {
            ans = z;
        }
        //cout << z << endl;
    }
    cout << ans;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        //solve();
        solve_2();
    }
    return 0;
}