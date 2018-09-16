//
//  C8-3.cpp
//  
//
//  Created by 郑彤 on 2018/9/6.
//

#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

class Shape{
public:
    Shape() {}
    virtual ~Shape() {}
};

class Triangle: public Shape{
public:
    Triangle() {}
    ~Triangle() {}
};

class Rectangle: public Shape {
public:
    Rectangle() {}
    ~Rectangle() {}
};

/*用dynamic_cast类型转换操作符完成该函数*/
int getVertexCount(Shape * b){
    Triangle * triangle = dynamic_cast<Triangle *>(b);
    if(triangle != nullptr) return 3;
    Rectangle * rectangle = dynamic_cast<Rectangle *>(b);
    if(rectangle != nullptr) return 4;
    return 0;
}

int main() {
    Shape s;
    cout << getVertexCount(&s) << endl;
    Triangle t;
    cout << getVertexCount(&t) << endl;
    Rectangle r;
    cout << getVertexCount(&r) << endl;
}
