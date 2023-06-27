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
void solve_2();
// easiest way
/*void solve(){
    int n;
    cin >> n;
    vi a(n),v(n);
    forcin(a);
    forcin(v);
    sort(a.begin(),a.end());
    sort(v.begin(),v.end());
    if(a==v)
     cout << "yes" << endl;
     else 
     cout << "no" << endl;
}*/

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve_2();
    }
    return 0;
}

// another nasty way
void solve_2(){
    int n,f=1;
    cin >> n;
    vi a(n),v(n);
    vi :: iterator it,is;

    forcin(a);
    forcin(v);

    for(it=v.begin();it!=v.end();it++){
        for(is=a.begin();is!=a.end();is++){
            if(*it==*is){
                *is=-1;
                break;
            }
        }
    }
    for(is=a.begin();is!=a.end();is++){
        if(*is!=-1){
            f=0;
            break;
        }
    }
    if(f) cout << "yes" << endl;
    else cout << "no" << endl;
}