//1

#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll_no;
};

int main(){
    Student s;
    s.name="Jamshed";
    s.roll_no=2;
    return 0;
}

//2
#include<iostream>
using namespace std;

class Student{
    string n1="Shofi",n2="Jamshed";
    public:
    string r1,r2;
    string p1,p2;
};

int main(){
    Student ob1,ob2;
    ob1.r1="2";
    ob1.p1="01....8239";
    ob2.r2="3";
    ob2.p2="01...3882";
    return 0;
}

//3
#include<iostream>
using namespace std;

class Tringle{
    public:
    int a=3,b=4,c=5;        //3no. without constructor
    //Tringle(int x,int y,int z){   //4no. using constructor
    //    a=x;
    //    b=y;
    //    c=z;
    //}
    void show(){
        cout << a+b+c << endl;
        cout << (0.5*(double)a*(double)b) << endl;
    }
};

int main(){
    Tringle t(3,4,5);
    t.show();
    return 0;
}

//5
#include<iostream>
using namespace std;

class Rectangle{
    public:
    int a,b;
    Rectangle(int x, int y){
        a=x;
        b=y;
    }
    int area(){
        return (a*b);
    }

};

int main(){
    Rectangle ob1(4,5),ob2(5,8);
    cout << ob1.area() << endl;
    cout << ob2.area() << endl;
    return 0;
}

//6
#include<iostream>
using namespace std;

class Area{
    int a,b;
    public:
    void setDim(int x, int y){
        a=x;
        b=y;
    }
    int getArea(){
        return(a*b);
    }
};

int main(){
    Area a1;
    int x,y;
    cin >> x >> y ;
    a1.setDim(x,y);
    cout << a1.getArea() << endl;
    return 0;
}

//7
#include<iostream>
using namespace std;

class Area{
    int a,b;
    public:
    Area(int x, int y){
        a=x,b=y;
    }
    int returnArea(){
        return (a*b);
    }
};

int main(){
    int x,y;
    cin >> x >> y ;
    Area a1(x,y);
    cout << a1.returnArea() << endl;
    return 0;

}

//8
#include<iostream>
using namespace std;

class Average{
    public:
    double a,b,c;
    void calc(){
        double x;
        x=(a+b+c)/3;
        cout << x << endl;
    }
};

class B : public Average{
    public:
    void get(){
        cin >> a >> b >> c;
    }
};

int main(){
    B ob;
    ob.get();
    ob.calc();
    return 0;
}
// class Average r object create kora jba na tai class B creat kore Average k
// inherit korsi jate member access korte pari 

//9
#include<iostream>
using namespace std;

class Complex{
    public:
    int a,b,x,y;
    Complex(int p, int q,int r,int s){
        a=p,b=q,x=r,y=s;
    }
    void sum(){
        if((b+y) >= 0)
            cout << (a+x) <<'+'<<(b+y)<<'i'<<endl;
        else
            cout << (a+x) << (b+y)<<'i'<<endl;
    }
    void sub(){
        if((b-y) >= 0)
            cout << (a-x) <<'+'<<(b-y)<<'i'<<endl;
        else
            cout << (a-x) << (b-y)<<'i'<<endl;
    }
    void pro(){
        cout << ((a*x)-(b*y)) <<'+'<<((a*y)+(b*x))<<'i'<<endl;
    }
};

int main(){
    int a,b;
    int x,y;
    char p,q;
    cin >> a >> p >> b >> q;
    if(p=='-'){
        b*=-1;
    }
    cin >> x >> p >> y >> q;
    if(p=='-'){
        y*=-1;
    }
    Complex ob(a,b,x,y);
    ob.sum();
    ob.sub();
    ob.pro();
    return 0;
}

//10
#include<iostream>
using namespace std;

class Volume{
    public:
    int a,b,c;
    Volume(int x, int y, int z) : a(x),b(y),c(z){}
    void show(){
        cout << a*b*c << endl;
    }
};

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    Volume v(a,b,c);
    v.show();
    return 0;
}

//11    done before
//12
#include<iostream>
using namespace std;

class Employee{
    public:
    int s,w;
    void getinfo(int x, int y){
        s=x,w=y;
    }
    void AddSal(){
        s+=10;
    }
    void AddWork(){
        s+=5;
    }
    int show(){
        return s;
    }
};

int main(){
    int x,y;
    cin >> x >> y;
    Employee e;
    e.getinfo(x,y);
    if(x>500){
        e.AddSal();
    }
    if(y>6){
        e.AddWork();
    }
    cout << e.show() << endl;
    return 0;
}
//13 // too much lengthy to implement
