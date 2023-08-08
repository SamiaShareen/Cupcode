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
    int n,l1,l2,i,j;
    cin >> n;
    string s1,s2;
    if(n!=1){
        int f=0;
        cin >> s1;
        while(n--){
            cin >> s2;
            l1=sz(s1);
            l2=sz(s2);
            if(l1>l2){
                swap(s1,s2);
                swap(l1,l2);
            }
            for(i=0;i<l1;i++){
                if(s1[i]!=s2[i]){
                    f=1;
                    break;
                }
            }
            if(f==1){
                break;
            }
            else{
                s1=s2;
            }
        }
        if(f==1){
            cout << "Impossible" << el;
        }
        else{
            cout << sz(s2) << el;
        }
    }
    else{
        cin >> s1;
        cout << sz(s1) << el;
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