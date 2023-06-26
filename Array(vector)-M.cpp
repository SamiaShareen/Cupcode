#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
#define vi  vector<int>
#define forcin(n) for(auto &x : n) cin >> x;
#define forcout(n) for(auto x : n) cout << x << " ";

void printVec(vector<int> v2, string s = "")
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}

void solve(){
    int n;
    cin >> n;
    vi arr(n);
    vi :: iterator it,p1,p2;

    forcin(arr);

    int min=arr[0],max=arr[0];

    p1=p2=arr.begin();
    for(it=arr.begin()+1;it!=arr.end();it++){
        if(min>*it){
            p1 = it;
            min=*it;
        }
        else if(max<*it){
            p2 = it;
            max = *it;
        }
    }
    swap(arr[p1-arr.begin()],arr[p2-arr.begin()]);

    forcout(arr);
}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}