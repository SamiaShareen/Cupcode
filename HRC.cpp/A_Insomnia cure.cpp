// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n,d,i,cnt=0;
    cin >> k >> l >> m >> n >> d;
    int a[d+10]={};
    for(i=1;i<=d;i++){
        a[i]=i;
    }
    for(i=1;i<=d;i++){
        if(a[i]%k==0 || a[i]%l==0 || a[i]%m==0 || a[i]%n==0){
            a[i]=0;
        }
    }
    for(i=1;i<=d;i++){
        if(a[i]!=0){
            cnt++;
        }
    }
    cout << d-cnt << endl;
    return 0;
}