// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define all(a) (a.begin(),a.end())
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
    ll n;
    cin >> n;
    if(n==1){
        YES;
        return;
    }
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            NO;
            return;
        }
    }
    YES;
}
void solve2(){
    ll n,x,z;
    cin >> n;
    x=log2(n);
    z=pow(2,x);
    cout << ((n==z?"YES":"NO"));
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        //solve();
        solve2();
    }
    return 0;
}





/*_____________________________________________IGNORE_________________________________________________________________________________*/
    
    // if you come here to read 2nd note is for you
   // Here I write down my nasty thoughts when I'm frustrated, dont take it seriously :)


    /*
    */