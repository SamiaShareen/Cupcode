#include<bits/stdc++.h>
using namespace std;

class student{
    string name,id;
    
    public:
    void set(string s,string ID){
        name = s;
        id=ID;
    }
    void get(){
        cout << "Name is = " << name << endl;
        cout << "ID is = " << id << endl;
    }
};

int main(){
    student a;
    string s,id;
    cout << "enter the name : \n";
    cin >> s;
    cout << "enter the ID : \n";
    cin >> id;
    a.set(s,id);
    a.get();
    return 0;
}