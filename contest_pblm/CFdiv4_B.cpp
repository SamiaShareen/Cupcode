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
    ll n,c,i,sum=0,j=0,p=0;
    cin >> n >> c;
    vi a(n);
    forcin(a);
    for(i=1;i*i<c;i++){
        while(j<n){
            sum+=(((2*i)+a[j])*((2*i)+a[j]));
            j++;
        }
        if(sum==c){
                p=i;
                break;
        }
        if(p!=0){
            break;
        }
    }
    cout << p << el;
    
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