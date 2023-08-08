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
#define sz(n) (int)(n.size())
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
    string s;
    cin >> s;
    int n,i,cnt=0,x;
    n=sz(s);
    if(n==1){
        if(s[0]=='^') x=1;
        else x=2;
        cout << x << el;
        return;
    }
    for(i=0;i<n;i++){
        if(s[i]=='_' && s[i+1]!='^'){
            cnt++;
        }
    }
    if(s[0]=='^'){
        x=cnt;
    }
    else if(s[0]=='_'){
        x=cnt+1;
    }
    cout << x << el;
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
    */