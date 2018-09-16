//
//  C8-2.cpp
//  
//
//  Created by 郑彤 on 2018/9/6.
//

#include <iostream>
using namespace std;

const double pi = 3.14;

class Shape{
public:
    Shape(){}
    ~Shape(){}
    virtual double getArea() = 0;
    virtual double getPerim() = 0;
};

class Circle: public Shape{
public:
    Circle(double rad):radius(rad){}
    ~Circle(){}
    
    /*补充这两个函数*/
    double getArea(){
        return radius*radius*pi;
    }
    double getPerim(){
        return radius*2*pi;
    }
private:
    double radius;
};

int main() {
    double radius;
    cin >> radius;
    Circle c(radius);
    cout << c.getArea() << " " << c.getPerim() << endl;
}
