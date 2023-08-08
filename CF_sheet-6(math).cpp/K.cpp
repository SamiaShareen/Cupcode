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
    ll a,b,i,fa=0,fb=0,fab=0;
    cin >> a >> b;
    if(a==0) fa=1;
    if(b==0) fb=1;
    if(a==0 && b==0) fab=1;
    if(fa!=1){
        fa=1;
        for(i=1;i<=a;i++){
            fa*=i;
        }
    }
    if(fb!=1){
        fb=1;
        for(i=1;i<=b;i++){
            fb*=i;
        }
    }
    if(fab!=1){
        fab=1;
        for(i=1;i<=(a-b);i++){
            fab*=i;
        }
    }
    cout <<(fa/(fb*fab))<<' '<<(fa/fab)<<el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
        
    }
    return 0;
}





/*_____________________________________________IGNORE_________________________________________________________________________________*/
    
    // if you come here to read 2nd note is for you
   // Here I write down my nasty thoughts when I'm frustrated, dont take it seriously :)


    /*
        no matter what other people thinks about me,i let them
        i just dont care ;)
    */