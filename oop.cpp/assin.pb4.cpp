#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    double length,width;
    public:
    void set(double a, double b){
        length = a;
        width = b;
    }
    void print(){
        cout << "Area is = ";
        cout <<fixed << setprecision(2) << (length*width) << endl;
        cout << "Perimeter is = ";
        cout << fixed << setprecision(2) << 2*(length+width) << endl;
    }

};

int main(){
    Rectangle a;
    double l,w;
    cout << "enter the length \n";
    cin >> l;
    cout << "enter the width \n";
    cin >> w;

    a.set(l,w);
    a.print();

    return 0;
}