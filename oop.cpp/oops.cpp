//1a no.
/*
#include<iostream>
using namespace std;

int main(){
    //1
    int x=5;
    cout << "x=" << x;          //error found:  << hba
    //2
    int m=5; // n=10; // s=m+n;     //error found: int hba
    //3
    int y;
    cin >> x >> y;      //error found: (::)scoperesolution rakhte chaile 'x' k globally diclare korte hba or (::) bad dita hba
    //4
    string name;
    cout << "\n Name: " << name;        // error found: \n will be within double quotation
    //5
    cout << "Enter value:"; cin >> x;       //error found: '<<' hba na '>>' hba
    //6
    int z;
    Addition  z = x + y;         //No error found
    return 0;
}

// 1b r i no.
#include<iostream>
using namespace std;
class A{
    public:
    int i;
};

void set(A ob,int x){
    ob.i=x;
    //cout << ob.i << endl;
}

int main(){
    A ob;
    set(ob,6);
    return 0;
}

// 1b r ii no.
#include<iostream>          // error found:  .h hba na
class room{
    int width ,height;
    public:                 // error found: public hba
    void setvalue(int w, int h){
        width = w;
        height = h;
    }
};

int main(){     // error found: void hba na
    room obj;
    obj.setvalue(12,5);
}


//1c no.
#include<iostream>
using namespace std;

int main(){
    cout << "Math = " << 90 << endl << "Physics = " << 77 << endl << "Chemistry = " << 80 << endl;
    return 0;
}
*/
//2b no.
/*
#include<iostream>
using namespace std;

class flower{
    int PL, LL;
    public:
    flower(int PL ,int LL){
        this -> PL = PL; // error found:there are same variable more than once for that reason we have to use this keyword 
        this -> LL = LL; //which is a pointer point to the private variable "this" keyword store the address of current object
    }
    void show(){
        cout << PL << " " << LL << endl;
    }
};

int main(){

    flower f1(12,10),f2(1,55);
    f1.show();
    //f2.show();
    return 0;
}
*/
//2c
/*
#include<iostream>
using namespace std;

class Time{
    int hour,minutes;
    public:
    Time(int a,int b){
        hour=a;
        minutes=b;
    }
    friend void addTime(Time t1,Time t2);
};

void addTime(Time t1, Time t2){
    int Hr= (t1.hour+t2.hour)+(t1.minutes+t2.minutes)/60;
    int Mn= (t1.minutes+t2.minutes)%60;
    cout << Hr << " " << Mn << endl;
}

int main(){
    Time T1(12,10),T2(1,55);
    addTime(T1,T2);
    return 0;
}
*/
//2d
/*
#include<iostream>
using namespace std;

class Student{
    string name;
    int id,age;
    public:
    void set(){
        cin >> name;
        cin >> id >> age;
    }
};

int main(){
    Student ob[100];
    for(int i=0;i<100;i++){
        ob[i].set();
    }
    return 0;
}
*/
//2d or
/*
#include<iostream>
using namespace std;

class Employee{
    string name,addr;
    int yr,sa;
    char a;

    public:
    void set(){
        cin >> name; // space soho nila ki pblm bujtesina
        //getline(cin,name);
        cin >> yr >> sa;
        cin.ignore();
        getline(cin,addr);
    }
    void get(){
        cout << name <<" "<<yr<<" "<<sa<<" "<<addr << endl;
    }
};

int main(){
    Employee ob[100];
    for(int i=0;i<2;i++){
        ob[i].set();
        ob[i].get();
    }
    return 0;
}
*/
//3a
/*
#include<iostream>
using namespace std;

class Employee{
    int id,salary;
    public:
    Employee(int a, int b): id(a),salary(b)
    {

    }
};

int main(){
    Employee E1(10,3000);
    Employee E2=E1;

    return 0;
}
*/
//3b 
/*
//the ans is yes but in each constructor their parameter number should be different
//this is called constructor overloding(ig) for example: code below
#include<iostream>
using namespace std;

class S{
    int id,pass,mark;
    public:
    S(int id){
        this ->id=id;
    }
    S(int id, int pass, int mark){
        this ->id=id;
        this ->pass=pass;
        this ->mark=mark;
    }
    void get(){
        cout << id <<' '<<pass<<' '<<mark <<endl;
    }
};

int main(){
    S ob1(10),ob2(20,30,40);
    ob1.get();
    ob2.get();
    return 0;
}
*/
//3b
/*
#include<iostream>
using namespace std;

void pri(int z,int x){  //error find: amra function eta k rakhte chaile z k initialize korte parbona 
//tahola eta o akta parameterized function r moto hoi jba jaikhane shudhu akta argument pass korte hoi 
    cout << x <<endl;
}

void pri(int a){
    cout << a <<endl;
}

int main(){
    pri(5);
    return 0;
}
*/
//3e
/*
#include<iostream>
using namespace std;

class stu{
    public:
    string name;
    stu(){}
    stu(stu &a){
        this->name = a.name;
    }
    void set(string a){
        name=a;
    }
    void get(){
        cout << name << endl;
    }
};

int main(){
    stu s1;
    s1.set("samia");
    s1.get();
    stu s2(s1);        //pass by 
    s1.name="SAMIA";
    s1.get();
    s2.get();
    return 0;
}
*/