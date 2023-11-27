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



void sbr_code_milae_khali_amar_code_milaena(){

    ll n,x,y;
    cin >> n >> x >> y;
    /*
    
    * 1 to n ae koita common factor? ans: n/lcm ta
    * common factor gulo baad ,uncommon gulo niya kaj kora lagbe
    * x r jonno koita factor? ans: (n/x) ta
    * x r jonno koita uncommon factor? ans: (n/x)-(common_factor) ta
    * y r jonno koita factor? ans: (n/y) ta
    * y r jonno koita uncommon factor? ans: (n/y)-(common_factor) ta

    jahatu diff max hta hba tai x r uncommon factor gulor index ae 
    value n r last takhe nibo & y r uncommon factor gulor index ae 
    value n r 1st takhe nibo

    */
    ll cf= n/((x*y)/__gcd(x,y));     //common factor
    ll ufx= (n/x)-cf;                //uncommon factor of x
    ll ufy= (n/y)-cf;                //uncommon factor of y
    ll  sum1= ((n*(n+1))/2)-((n-ufx)*(n-ufx+1)/2); //sum of uncommon factor of x
    ll  sum2= (ufy*(ufy+1)/2);                    //sum of uncommon factor of y
    cout << sum1-sum2 << el;
}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        sbr_code_milae_khali_amar_code_milaena();
    }
    return 0;
}