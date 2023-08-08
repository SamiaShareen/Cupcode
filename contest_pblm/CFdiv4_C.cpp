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
    int n,k,c[200000]={},i=0,j=0;
    cin >> n >> k;
    vi a(n);
    forcin(a);
    sort(a.begin(),a.end());
    for(i=0;i<n-1;i++){
        int x = ((int)abs((double)a[i]-(double)a[i+1]));
        if(x<=k){
            c[j]++;
        }
        else{
            j++;
        }
    }
    int max=c[0];
    for(i=0;i<200000;i++){
        if(max<c[i]){
            max=c[i];
        }
    }
    cout << (n-(max+1)) << el;

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
    */