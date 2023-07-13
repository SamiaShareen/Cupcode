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

void solve(){
    int n,x,y,i,j,a[500][500],r[500];
    cin >> n >> x >> y;
    x--,y--;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<n;i++){
        r[i]=a[x][i];
        a[x][i]=a[y][i];
        a[y][i]=r[i];
    }
    for(i=0;i<n;i++){
        r[i]=a[i][x];
        a[i][x]=a[i][y];
        a[i][y]=r[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << a[i][j] << ' ';
        }
        cout << el;
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