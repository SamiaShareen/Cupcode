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
    int n,x,m,i,j=0,k=0,cnt=0,c=0;
    cin >> n;   
    m=n;
    x=(n*(n-1))/2;
    vi a(n,0),b(x);
    forcin(b);
    sort(all(b));
    if(b[0]==b[x-1]){
        for(i=0;i<n;i++){
            a[i]=b[0];
        }
    }
    else{
        for(i=0;i<x-1;i++){
            if(b[i]==b[i+1]){
                cnt++;
            }
            else{
                cnt+=1;
                for(j=0;j<cnt;j++){
                    a[k]=b[i];
                    k++;
                    m--;
                    cnt=cnt-m;
                    c++;
                }
                cnt=0;
            }
        }
    }
    //cout << c << el;
    for(i=c;i<n;i++){
        a[i]=b[x-1];
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout << el;
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
        

            // from Benq 

        // you should actually read the stuff at the bottom
 
        * stuff you should look for
        * int overflow, array bounds
        * special cases (n=1?)
        * do smth instead of nothing and stay organized
        * WRITE STUFF DOWN
        * DON'T GET STUCK ON ONE APPROACH
        
    */