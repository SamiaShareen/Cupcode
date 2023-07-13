#include<bits/stdc++.h>
using namespace std;

class circle{
    double radius;

    public:
    void setRadius(double r){
        radius = r;
    }
    double cal(){
        return (3.1416*(radius)*(radius));
    }
    void printInfo(){
        cout << "details of the circle:\n";
        cout << "radius is = " << radius << endl;
        cout << "area is = ";
        cout << cal() <<endl;
    }
};

int main(){
    circle a;
    double r;
    cin >> r;
    a.setRadius(r);
    a.printInfo();
    return 0;
}