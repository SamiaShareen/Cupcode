// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el endl
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

void solve(){
    string a,b;
    getline(cin,a);
    //cin.ignore();
    getline(cin,b);
    int i,j,x,c=0,m[100010]={},n[100010]={},la,lb;
    string o;
    la=(int)a.size();
    lb=(int)b.size();
    for(i=la-1,j=0 ; i>=0 ; i--,j++){
        m[j]=a[i]-'0';
    }
    for(i=lb-1,j=0 ; i>=0 ; i--,j++){
        n[j]=b[i]-'0';
    }
    if(la<lb) swap(la,lb);
    if(la!=lb) la--;
    for(i=0;i<=la;i++){
        if(m[i]+n[i]==2){
            if(c==0){
                o.push_back('0');
                c=1;
            }
            else{
                o.push_back('1');
                c=1;
            }
        }
        else if(m[i]+n[i]==1){
            if(c==0){
                o.push_back('1');
                c=0;
            }
            else{
                o.push_back('0');
                c=1;
            }
        }
        else if(m[i]+n[i]==0){
            if(c==0){
                o.push_back('0');
                c=0;
            }
            else{
                o.push_back('1');
                c=0;
            }
        }
    }
    reverse(o.begin(),o.end());
    

    if((la==lb) && la==1 && (m[0]==0 || n[0]==0)){
        o[0]=o[1];
        o.resize(1);
        cout << o;
    }
    else cout << o;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}