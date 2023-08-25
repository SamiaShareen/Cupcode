//1d

#include<iostream>
using namespace std;

class student{
    int a=5;
    public:
    float f;        // float will be under public otherwise we cant access
    void  show(){
        cout << a << endl;
    }
};

int main(){     // int hba
    student s1;
    s1.f=2.5;
    s1.show();
    //return 0;
}

//1d or
#include<iostream>
using namespace std;
class student{
    int a=5;
    public:
    float f;
    //void show();
    friend void show(student);  //we have to call friend function 
};

void show(student t){
    cout << t.a << endl; //it can access private also
}
//void student::show(){
//   cout << a << endl;
//}
int main(){     //int hba
    student s1;
    s1.f=2.5;
    show(s1);       // pass an object as argument by calling show func.
}
/*
//2c
#include<iostream>
using namespace std;

class X{
    public:
    int x;
};

int main(){
    X a={10};
    X b=a;
    cout << a.x << " ";
    cout << b.x;
    return 0;
}
// output : 10 10

//2c
#include<iostream>
using namespace std;

class X{
    int x;
    public:
    X(){}
    X(int x){
        x=x;
    }
    void show(){
        cout << x << endl;
    }

};

int main(){
    X a,b(4);
    b.show();
}
// output : garbage value to fix this we can use 'this' keyword in the parametarized constructor

//2c or
#include<iostream>
using namespace std;

class X{
    int x,y;
    public:
    //1st
    X(){}
    //2nd
    X(int a,int b){
        x=a;
        y=b;
    }
    void show(){
        cout << x << endl;
        cout << y << endl;
    }
};

int main(){
    X s1,s2(3,4);
    s2.show();
}

// we find 2 error.here we have 2 default constructor. if we make the the 2nd constructor parameterized
// so the object s1 didn't show any erroe. for the object s2 if we pass 2 value as argument so the parameterized 
// constructor called and bug fixed (thug life (~-_-)~)
