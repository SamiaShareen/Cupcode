// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define all(a) a.begin(),a.end()
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


void mdiv(vi a, int n){
    int i,j;
    vi m(n,0);
    for(i=0;i<n;i++){
        int cnt=0;
        for(j=1;j<=a[i];j++){
            if(a[i]%j==0){
                cnt++;
            }
        }
        m[i]=cnt;
    }
    int ma=*max_element(all(m)),map=max_element(all(m))-m.begin();
    for(i=0;i<n;i++){
        if(ma==m[i]){
            if(a[map]<a[i]){
                map=i;
            }
        }
    }
    cout << "The number that has the maximum number of divisors : " <<a[map]<< el;
}

void pal(vi a, int n){
    int i,j,cnt=0;
    for(i=0;i<n;i++){
        int f=0;
        //char s[200];
        //itoa(a[i],s,10);      // eta onk joss function ;^
        string s=to_string(a[i]);
        int si=sz(s);
        for(j=0;j<(si/2);j++){
            if(a[j]!=a[si-j-1]){
                f=1;
                break;
            }
        }
        if(f==0) cnt++;
    }
    cout <<"The number of palindrome numbers : " << cnt << el;
}

void isp(vi a, int n){
    int i,cnt=0,j,f=0;
    for(j=0;j<n;j++){
        f=0;
        if(a[j]==2){
            cnt++;
        }
        else if(a[j]==1) continue;
        else{
            for(i=2;i*i<a[j];i++){
                if(a[j]%i==0){
                    f=1;
                }
            }
            if(f==0){
                cnt++;
            }
        }
    }
    cout << "The number of prime numbers : " << cnt << el;
}

void min(vi a){
    cout << "The minimum number : " << *min_element(all(a)) << el;
}

void max(vi a){
    cout << "The maximum number : " << *max_element(all(a)) << el;
}
void solve(){
    int n;
    cin >> n;
    vi a(n);
    forcin(a);
    max(a);
    min(a);
    isp(a,n);
    pal(a,n);
    mdiv(a,n);
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}