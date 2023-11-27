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
    unsigned long long n,cnt1=0,cnt2=0,i;
    cin >> n;
    vi a(n);
    forcin(a);
    sort(all(a));
    int maxe=a[n-1];
    int mine=a[0];
    for(i=0;i<n;i++){
        if(maxe==a[i]){
            cnt1++;
        }
        if(mine==a[i]){
            cnt2++;
        }
    }
    if(maxe==mine){
        cout << n*(n-1) << el;
    }
    else if(cnt1!=1 && cnt2!=1 && maxe!=mine){
        cout << (cnt1*2)*(cnt2) << el;
    }
    else{
        if(cnt1==1){
            cout << cnt2*2 << el;
        }
        else{
            cout << cnt1*2 << el;
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