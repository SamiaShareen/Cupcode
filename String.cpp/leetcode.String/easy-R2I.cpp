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
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    int i,j,a[100010]={},sum=0;
    for(i=0;s[i];i++){
        if(s[i]=='I'){
            a[i]=1;
        }
        else if(s[i]=='V'){
            a[i]=5;
        }
        else if(s[i]=='X'){
            a[i]=10;
        }
        else if(s[i]=='L'){
            a[i]=50;
        }
        else if(s[i]=='C'){
            a[i]=100;
        }
        else if(s[i]=='D'){
            a[i]=500;
        }
        else if(s[i]=='M'){
            a[i]=1000;
        }
    }
    for(i=0;i<sz(s);i++){
        if(a[i]>a[i+1]){
            sum+=(a[i]-a[i+1]);
            i++;
        }
        else{
            sum+=a[i];
        }
    }
    cout << sum << el;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}