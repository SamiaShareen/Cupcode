//Bismillahir Rahmanir Raheem
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
    int l=0,r=0,cnt=0,i,j=0;
    string s;
    cin >> s;
    for(i=0;s[i];i++){
        if(s[i]=='L') l++;
        else r++;
        if(l==r){
            cnt++;
            l=r=0;
        }
    }
    cout << cnt << el;

    for(i=0;s[i];i++){
        if(s[i]=='L') l++;
        else r++;
        if(l==r){
            for(;j<=i;j++){
                cout << s[j];
            }
            cout << el;
            l=r=0;
        }
    }
}

// another sol^n by 2D string 

void solve_2(){
    int l=0,r=0,cnt=0,i,j=0;
    char s[1005],t[1000][1000];
    cin >> s;
    for(i=0;s[i];i++,j++){
        t[cnt][j]=s[i];
        if(s[i]=='L') l++;
        else r++;
        if(l==r){
            cnt++;
            l=r=0;
            j=-1;
        }
    }
    cout << cnt << el;
    for(i=0;i<cnt;i++)
        cout << t[i] << el;
}

// another sol^n by using vector (2d string : vector<string>)

void solve_3(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.o", "w", stdout);
    
    string str;
    cin >> str;
    vector<string> ans; // ans akhon 2D string
    int sz = str.size();
    for(int i = 0; i < sz; ) {
        // Checking for the minimum size of the balancd string from position i
        // It should be an even sized string

        // agulo sob sodor_bodor ki ami nijao bujtesi na(Jamil_Sir_r_code)
        // sir addhattik level ae chola gasen :|
        for(int len = 2; i + len <= sz; len += 2)
        {
            int l = 0, r = 0;
            string temp;
            for(int j = i; j < i + len; j++) {
                l += (str[j] == 'L');
                r += (str[j] == 'R');
                temp += str[j];
            }
            if(l == r) {
                ans.push_back(temp);
                i += len;
                break;
            }
        }
    }
 
    cout << (int) ans.size() << endl;
    for(int i = 0; i < (int) ans.size(); i++)
        cout << ans[i] << endl;
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        //solve();
        //solve_2();
        solve_3(); // by_Jamil_sir
    }
    return 0;
}