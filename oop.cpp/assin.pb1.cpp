#include<bits/stdc++.h>
using namespace std;

class circle{
    double radius;

    public:
    void setRadius(double r){
        radius = r;
    }
    void printInfo(){
        cout << "details of the circle:\n";
        cout << "radius is = " << radius << endl;
        cout << "area is = ";
        cout << fixed << setprecision(2)<<(3.1416*(radius)*(radius)) <<endl;
    }
};

int main(){
    circle a;
    int r;
    cin >> r;
    a.setRadius(r);
    a.printInfo();
    return 0;
}