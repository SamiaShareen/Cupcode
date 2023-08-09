// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[35]={},i,j,cnt=0;
    // a[] array te fibonacchi number gulo rakhsi 30 porjontw
    int f1=0,f2=1;
    a[2]=1;
    for(i=3;i<=30;i++){
        a[i]=f1+f2;
        f1=f2;
        f2=a[i];
    }
    // akhon n porjontw koita prime check korbo
    while(scanf("%d",&n)!=-1){
        i=4;
        while(i<=n){
            int f=0;
            if(a[i]==2){}
            else{
                for(j=2;j*j<n;j++){
                    if(a[i]%j==0){
                        f=1;
                        break;
                    }
                }
            }
            if(f==0){
                cout << a[i] <<' ';
            }
            i++;
        }
        cout << endl;
    }
}