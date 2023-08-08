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
/*_____________________________________________________________________________*/



void solve(){
    int n,k,i,j;
    cin >> n >> k;
    vector<string> a;
    vector<string>::iterator it;
    string c,s;

    for(i=0;i<n;i++){
        cin >> c;
        a.pb(c);
    }
    int cnt=0;
    s=*(a.begin());
    for(it=a.begin()+1;it<a.end();it++){
        if(s==*it){
            cnt++;
        }
    }
    cout << cnt+1 << el;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}





/*____________________________________________IGNORE___________________________*/
    
    // if you come here to read 2nd note is for you
   // Here I write down my nasty thoughts when I'm frustrated, dont take it seriously :)


    /*
    */