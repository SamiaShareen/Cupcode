#include<bits/stdc++.h>
using namespace std;

class person{
    string name;
    int age;
    public:
    void setName(string s){
        name = s;
    }
    void setAge(int m){
        age =m;
    }
    void details(){
        cout << "Name is = " << name << endl;
        cout << "Age is = " << age << endl;
    }
};

int main(){
    person a;
    int n;
    string s;
    cout <<"enter the name of person " << endl; 
    cin >> s;
    a.setName(s);
    cout <<"enter the age of person " << endl; 
    cin >> n;
    a.setAge(n);
    a.details();

    return 0;
}