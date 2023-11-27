#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(){
        a,b=0;
    }
    A(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout << a <<' '<<b<<endl;
    }
    A operator+(A m){   //this operator function is a member 
    //function of this class so the 1st perameter is 
    //automatically passed as current object
        A sum;
        sum.a = a + m.a;
        sum.b = b + m.b;
        return sum;
    }
    A operator-(A x);   //define the overloded function outside
    //the class
};

A A::operator-(A x){
    A sub;
    sub.a= a - x.a;
    sub.b = b - x.b;
    return sub;
}

class B{
    int mark;
    public:
        B(int x){
            mark = x;
        }
        void display(){
            cout << mark << endl;
        }
        void operator+=(int x){
            mark = mark + x;
        }
        friend void operator-=(B &b , int x);

};

void operator-=(B &b , int x){
    b.mark = b.mark - x;
}

int main(){
    // A m1(10,20),m2(1,2);
    // A m3 = m1 + m2;
    // A m4 = m1 - m2;
    // m3.display();
    // m4.display();
    B m1(10);
    int x=5;
    m1+=x;
    m1.display();
    B m2(10);
    m2-=x;
    m2.display();
    return 0;
}