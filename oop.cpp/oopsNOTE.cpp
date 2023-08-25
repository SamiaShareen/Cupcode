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

class myclass{
    int a;
    public:
    myclass();
    ~myclass();
    void show();

};

myclass::myclass(){
    cout << "constructor called" << endl;
    a=10;
}

myclass::~myclass(){
    cout << "destructor called" << endl;
}

void myclass::show(){
    cout << a << endl;
}

class point{
    int x,y;
    public:
    point(int x1, int y1){      //constructor
        x=x1;
        y=y1;
    }
    //point(const point &p2){     //copy constructor
    //    x=p2.x;
    //    y=p2.y;
    //}
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }
};

int main(){
    point p1(10,15);
    point p2=p1;
    cout << p1.getx()<<" "<<p1.gety()<<endl;
    cout << p2.getx()<<" "<<p2.gety()<<endl;

    return 0;
}