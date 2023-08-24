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
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b){
        if(c%2==0){
            cout << "Second" <<el;
        }
        else{
            cout << "First" <<el;
        }
    }
    else{
        if((a+c)>(b+c)){
            cout << "First" << el;
        }
        else{
            cout << "Second" << el;
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





/*_____________________________________________IGNORE_________________________________________________________________________________*/
    
    // if you come here to read 2nd note is for you
   // Here I write down my nasty thoughts when I'm frustrated, dont take it seriously :)


    /*
        I don't care that they stole my idea 
        I care that they don't have any of their own

            // from Benq 

        // you should actually read the stuff at the bottom
 
        * stuff you should look for
        * int overflow, array bounds
        * special cases (n=1?)
        * do smth instead of nothing and stay organized
        * WRITE STUFF DOWN
        * DON'T GET STUCK ON ONE APPROACH
        
    */