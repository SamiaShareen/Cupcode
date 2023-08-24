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

// check a bit is 1/0. if 1,return 1 else return 0
bool check(int a,int n){
    return (a & (1<<n))!=0;
}

// set a bit to 1(a r n tomo bit k 1 korbo)
int set(int a,int n){
    return a|(1<<n);
}

// set a bit to 0(a r n tomo bit k 0 korbo)
int reset(int a,int n){
    return a&(~(1<<n));
}

/*____________________________________________________________________________________________________________________________________*/



void solve(){
    int n,m;
    cin >> n >> m;
    vector<char> a(n),b(m);
    forcin(a);
    forcin(b);
    int i,cnt=0;
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
    }
    for(i=0;i<m-1;i++){
        if(b[i]==b[i+1]){
            cnt++;
        }
    }
    if(cnt==0){
        YES;
        return;
    }
    if(a[n-1]==b[m-1] && cnt!=0){
        NO;
        return;
    }
    else{
        if(cnt==1 && a[n-1]!=b[m-1]){
            YES;
            return;
        }
        else{
            NO;
            return;
        }
    }
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}