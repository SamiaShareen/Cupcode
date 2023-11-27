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
    int n,i=0,cnt=0;
    cin >> n;

    /*
    faltu kno use kortesi nijao jni na 
    jotokkhon janbo na totokkhon ami aita korbo na
    cout << (n%2==0?1:2) << endl;
    */ 

    while((1<<i)<=n){ 
        if(n&(1<<i)){       /*dhuru baji ki gadha ami: 14 akta even num,
        bacteria double hoite takhle 14ta bacteria ami jiboneo pbo na
        (ami pbo 2,4,8,16,32... ai sequence ae) jodi na ami extra add na kori, 
        kototomo din ae add korte hocche eta binary diya easily pacchi(maybe onno wayo takhte pare) -__- */
            cnt++;
        }
        i++;
    }
    cout << cnt << el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}