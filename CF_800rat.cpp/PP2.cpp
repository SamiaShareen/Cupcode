// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,r,x,i,j,cnt=0;
        vector<int> v,m;
        cin >> a >> b;
        if(a>b) swap(a,b);
        if((b-a)<=100){
            x=b-a;
        }
        else{
            x=100;
        }
        for(i=b;cnt<=x;i--){
            int max,min;
            j=i;
            max=min=i%10;
            while(j!=0){
                r=j%10;
                if(max<r){
                    max=r;
                }
                if(min>r){
                    min=r;
                }
                j=j/10;
            }
            m.push_back(i);
            v.push_back(abs(max-min));
            cnt++;
        }
        int mx=v[0],p=0;
        for(i=0;i<cnt;i++){
            if(mx<v[i]){
                mx=v[i];
                p=i;
            }
        }
        cout << m[p] << endl;
    }
}