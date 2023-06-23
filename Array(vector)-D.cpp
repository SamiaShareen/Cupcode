#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,x;
    cin >> n;
    vector<int> arr;
    for(i=0;i<n;i++){
        cin >> x;
        if(x<=10){
        cout <<"A[" << i <<"] = " << x << endl;
        }
    }
    return 0;
}