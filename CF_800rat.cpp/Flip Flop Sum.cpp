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
    int n,i,f=0,cnt=0;
    ll sum=0;
    cin >> n;
    vi a(n);
    forcin(a);
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1] && a[i]==-1){
            a[i]=a[i+1]=1;
            f=1;
            break;
        }
    }
    if(f==0){
        for(i=0;i<n;i++){
            if(a[i]==-1){
                cnt++;
            }
        }
    }
    if(f==0 && cnt==0){
        a[0]=a[1]=-1;
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    cout << sum << el;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}