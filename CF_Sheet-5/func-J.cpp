// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el '\n'
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void avg(vector<double> a,int n){
    double sum=0;
    int i;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    // for print fixed decimal point :|
    cout << fixed << setprecision(7) << (sum/(double)n) << el;
}
void solve(){
    int n;
    cin >> n;
    vector<double> a(n);
    forcin(a);
    avg(a,n);
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}