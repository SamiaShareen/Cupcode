// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define all(a) ((a).begin()),((a).end())
#define pb push_back 
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el '\n'
#define YES cout<< "YES\n"
#define NO cout<< "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

/*____________________________________________________________________________________________________________________________________*/



void solve(){
    int n,m,i,j;
    cin >> n >> m;
    char a[100][100];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> a[i][j];
        }
        
    }
    int v=0,I=0,k=0,A=0;
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            if(a[i][j]=='v' && v==0){
                v=1;
                break;
            }
            else if(v==1 && a[i][j]=='i' && I==0){
                I=1;
                break;
            }
            else if(I==1 && a[i][j]=='k' && k==0){
                k=1;
                break;
            }
            else if(k==1 && a[i][j]=='a' && A==0){
                A=1;
                break;
            }
        }
    }
    //cout << v << I << k << A <<el;
    if(v==1 && I==1 && k==1 && A==1) YES;

    else NO;
    
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}