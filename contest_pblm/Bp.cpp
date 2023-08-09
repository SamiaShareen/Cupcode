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
    string s;
    cin >> s;
    int n,i,j,c=0,f=0;
    n=sz(s);
    vi a,v;
    a.pb(0);
    for(i=0;i<n;i++){
        a.pb(s[i]-'0');
    }
    if(n==1 && a[1]<5){
        cout << a[1];
    }
    else{
        for(i=1;i<=n;i++){
            if(a[i]>=5){
                a[i-1]=a[i-1]+1;
                for(j=i;j<=n;j++){
                    a[j]=0;
                }
                i=0;
            }
        }
        if(a[0]!=0){
            cout<<a[0];
        }
        for(i=1;i<=n;i++){
            cout << a[i];
        }
    }
   
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
        cout << el;
    }
    return 0;
}





/*_____________________________________________IGNORE_________________________________________________________________________________*/
    
    // if you come here to read 2nd note is for you
   // Here I write down my nasty thoughts when I'm frustrated, dont take it seriously :)


    /*
        

            // from Benq 

        // you should actually read the stuff at the bottom
 
        * stuff you should look for
        * int overflow, array bounds
        * special cases (n=1?)
        * do smth instead of nothing and stay organized
        * WRITE STUFF DOWN
        * DON'T GET STUCK ON ONE APPROACH
        
    */