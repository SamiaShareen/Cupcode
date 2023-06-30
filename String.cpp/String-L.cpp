#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el endl

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    int n,q;
    cin >> n >> q;
    string s,t;
    cin.ignore();
    cin >> s;
    while(q--){
        cin >> t;
        if(t=="pop_back")
            s.pop_back();
        else if(t=="front")
            cout << s.front() <<el;
        else if(t=="back")
            cout << s.back() << el;
        else if(t=="sort"){            int l,r;
            cin >> l >> r;
            if (l>r){
                swap(l,r);
            }
            sort(s.begin()+l-1,s.begin()+r);
        }
        else if(t=="reverse"){
            int l,r;
            cin >> l >> r;
            if(l>r) swap(l,r);
            reverse(s.begin()+l-1,s.begin()+r);
        }
        else if(t=="print"){
            int pos;
            cin >> pos;
            cout << s[pos-1] << el;
        }
        else if(t=="substr"){
            int l,r;
            cin >> l >> r;
            if(l>r) swap(l,r);
            cout << s.substr(l-1,(r-l+1))<<el;
        }
        else if(t=="push_back"){
            char c;
            cin >> c;
            s.push_back(c);
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