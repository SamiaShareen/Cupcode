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
void solve_2();
void solve(){
    int i=0,p,j,k,cnt;
    string s;
    getline(cin,s);

    for(j=0;s[j];j++){
        if(s[j]==' '){
            for(p=j-1;p>=i;p--){
                cout << s[p];
            }
            cout <<' ';
            i=j+1;
        }
    }
    for(p=j-1;p>=i;p--){
        cout << s[p];
    }
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
        //solve_2();
    }
    return 0;
}


// 2nd solution by using func
void solve_2(){
    bool n=0;
    string s;
   while(cin >> s){
        reverse(s.begin(),s.end());
        if(n)
        cout << ' '<<s;
        else 
        cout << s;
        n=1;
    }
}