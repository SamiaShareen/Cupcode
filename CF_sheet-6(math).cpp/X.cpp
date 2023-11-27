// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

//typedef data type define korae
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pll> vll;

#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(a) (a).begin(),(a).end()
#define pb push_back 
#define forcin(n) for(auto &x : n) cin >> x
#define fori(n) for(auto &x : (n))
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el '\n'
#define YES cout<< "YES\n"
#define NO cout<< "NO\n"
#define F first
#define S second
#define mem(a,b) memset(a,b,sizeof(a))      // 0 n -1 only
#define gcd(a,b) __gcd(a,b)
#define set_pre(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

const double PI = acos(-1);
const double eps = 1e-9;

void printVec(vector<int> v , string s=""){
    cout << s <<' ';
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}

bool is_vowel(char ch){
    string s="aeiouAEIOU";
    for(int i=0;s[i];i++){
        if(s[i]==ch){
            return 1;
        }
    }
    return 0;
}

//Debugger
 //pair
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
            return os << "(" << p.first << ", " << p.second << ")";
}
//vector
template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
            os << "{";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "}";
}
//set
template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
//multiset
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << *it;
                                            }
                    return os << "]";
}
//map
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
            os << "[";
                for(auto it = v.begin(); it != v.end(); ++it) {
                                if( it != v.begin() ) os << ", ";
                                        os << it -> first << " = " << it -> second ;
                                            }
                    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
 
void faltu () {
            cerr << endl;
}
//array
template <typename T>
void faltu( T a[], int n ) {
            for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
                cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest) {
            cerr << arg << ' ';
                faltu(rest...);
}
 

/*____________________________________________________________________________________________________________________________________*/



void solve(){
    ll x1,x2,x3,x4,y1,y2,y3,y4,t,x,y,ax,bx,ay,by;
    cin >> x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4>>t;
    if(x1==x2){
        ax=x1,bx=x3;
    }
    else if(x1==x3){
        ax=x1,bx=x2;
    }
    else if(x1==x4){
        ax=x1,bx=x2;
    }
    else if(x2==x3){
        ax=x2,bx=x4;
    }
    else if(x2==x4){
        ax=x2,bx=x3;
    }
    else if(x3==x4){
        ax=x3,bx=x1;
    }
    if(y1==y2){
        ay=y1,by=y3;
    }
    else if(y1==y3){
        ay=y1,by=y2;
    }
    else if(y1==y4){
        ay=y1,by=y2;
    }
    else if(y2==y3){
        ay=y2,by=y4;
    }
    else if(y2==y4){
        ay=y2,by=y3;
    }
    else if(y3==y4){
        ay=y3,by=y1;
    }
    while(t--){
        cin >> x >> y;
        if((x>=ax)&&(x<=bx)&&(y>=ay)&&(y<=by)){
            YES;
        }
        else if((x<=ax)&&(x>=bx)&&(y<=ay)&&(y>=by)){
            YES;
        }
        else if((x<=ax)&&(x>=bx)&&(y>=ay)&&(y<=by)){
            YES;
        }
        else if((x>=ax)&&(x<=bx)&&(y<=ay)&&(y>=by)){
            YES;
        }
        else{
            NO;
        }
    }
}

int main(){
    
    bismillah
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}