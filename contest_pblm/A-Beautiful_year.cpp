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


// think twice code once

void solve(){
    int n,i,j,a[5],x,cnt;
    cin >> n;
    while(1){
        cnt=0;
        n=n+1;
        x=n,j=3;
        while(x!=0){
            a[j]=x%10;
            x=x/10;
            j--;
        }
        for(i=0;i<3;i++){
            for(j=i+1;j<4;j++){
                if(a[i]!=a[j]){
                    cnt++;
                }
            }
        }
        if(cnt==6)
            break;
    }
    for(i=0;i<4;i++){
        cout << a[i];
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

        I have no friend , that's OK.
        I don't need them anyway !!
        I do my best all my own :)
        I just rather be alone :"

   */
