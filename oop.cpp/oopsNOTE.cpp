#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void set(int x);
    void get();
};

void A::set(int x){
    a=x;
}

void A::get(){
    cout << a << endl;
}

class B: public A{

};

int main(){
    B ob;
    ob.set(10);
    ob.get();
}