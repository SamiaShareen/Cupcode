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
    int n,m[4]={},i;
    cin >> n;
    vi a(n);
    forcin(a);
    for(i=0;i<n;i++){
        m[a[i]]++;
    }
    int min=m[1];
    for(i=1;i<4;i++){
        if(min>m[i]){
            min=m[i];
        }
    }
    cout << min << el;
    while(min--){
        int x=0,y=0,z=0;
        for(i=0;i<n;i++){
            if(a[i]==1 && x==0){
                cout << i+1 <<' ';
                a[i]=-1;
                x=1;
            }
            else if(a[i]==2 && y==0){
                cout << i+1 <<' ';
                a[i]=-1;
                y=1;
            }
            else if(a[i]==3 && z==0){
                cout << i+1 <<' ';
                a[i]=-1;
                z=1;
            }
            if(x==1 && y==1 && z==1){
                cout<<el;
                break;
            }
        }
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
        I don't care that they stole my idea 
        I care that they don't have any of their own
    */