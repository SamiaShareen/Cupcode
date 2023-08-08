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
    int ra,rb,ca,cb,i,j,k;
    int a[100][100],b[100][100],c[100][100]={};
    cin >> ra >> ca;
    for(i=0;i<ra;i++){
        for(j=0;j<ca;j++){
            cin >> a[i][j];
        }
    }
    cin >> rb >> cb;
    for(i=0;i<rb;i++){
        for(j=0;j<cb;j++){
            cin >> b[i][j];
        }
    }
    for(i=0;i<ra;i++){
        for(k=0;k<cb;k++){
            for(j=0;j<rb;j++){
                c[i][k]+=(a[i][j]*b[j][k]);
            }
        }
    }

    for(i=0;i<ra;i++){
        for(j=0;j<cb;j++){
            cout << c[i][j]<<' ';
        }
        cout << el;
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
        i have no friends 
        that's OK ;)
        i don't need them anyway
        i do my best all my own
        i just rather be alone
        
    */