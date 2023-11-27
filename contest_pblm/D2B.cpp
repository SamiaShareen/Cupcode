// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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



void solve2(){
    ll n,i,cnt=0,sum=0,cnt2=0;
    cin >> n;
    vi a(n);
    forcin(a);
    sort(all(a));
    for(i=0;i<n;i++){
        if(a[i]==1){
            cnt++;
        }
        else{
            sum+=a[i];
            cnt2++;
        }
    }
    if(cnt<=(n/2) && n!=1){
        YES;
    }
    else{
        if(sum>=(cnt+cnt2) && n!=1){
            YES;
        }
        else
            NO;
    }
}

int main(){
    
    bismillah
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve2();
    }
    return 0;
}