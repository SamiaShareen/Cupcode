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


//shob bit print korbe
void print_bit(){
    int a,i=0,f=0;
    cin >> a;
    if(a<0){
        a=-a;
        f=1;
    }
    while((int)pow(2.0,(double)i)<=a){
        i++;
    }
    i--;
    if(f){
        //signbit
        cout << 1 ;
    }
    // value
    for(;i>=0;i--){
        cout << ((a& (1<<i))>0?1:0);
    }
}

// nth bit check korbe 0 nki 1
// 0 holae output=0
// 1 holae output=1
void check_bit(){
    int a,n;
    cin >> a >> n;
    cout << ((a & (1 << n))>0?1:0) << el;
}

// nth bit check korbe 0 nki 1
// 0 holae 1 kore debo
// 1 holae 0 kore debo
void set_reset(){
    int a,n;
    cin >> a >> n;
    if((a&(1<<n))>0?1:0)
        cout << (a&(-((1<<n)+1))) << el;
    else{
        cout << (a|(1<<n)) << el;
    }
}


int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        //print_bit();
        //check_bit();
        //set_reset();
    }
    return 0;
}
