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
    int a,b,x=0,i;
    cin >> a >> b;
    string s,s1,s2;
    cin >> s1;
    while(b--){
        s=s1;
        cin >> s2;
        x=s.find(s2);
        int cnt=0;
        while(x!=-1){
            for(i=0;i<sz(s2);i++){
                s[x]='1';
                x++;
            }
            x=s.find(s2);
            cnt++;
        }
        cout << cnt << el;

    }

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
            // from Benq 

        // you should actually read the stuff at the bottom
 
        * stuff you should look for
        * int overflow, array bounds
        * special cases (n=1?)
        * do smth instead of nothing and stay organized
        * WRITE STUFF DOWN
        * DON'T GET STUCK ON ONE APPROACH
        
    */