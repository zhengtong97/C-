//
//  4_2.cpp
//  
//
//  Created by 郑彤 on 2018/8/10.
//

#include <iostream>
#include <cmath>
using namespace std;

class Point{
public:
    Point(int xx=0,int yy=0){
        x=xx;
        y=yy;
    }
    Point(Point &p);
    int getX(){return x;}
    int getY(){return x;}
private:
    int x,y;
};
//
//Point::Point(int xx, int yy):x(xx),y(yy){
//    cout<<"Calling constructor of Point"<<endl;
//}

Point::Point(Point &p){ //拷贝构造函数
    x = p.x;
    y = p.y;
    cout<<"Calling the copy constructor of Point"<<endl;
}

//组合类
class Line{  //Line类的定义
public: //外部接口
    Line(Point xp1,Point xp2); //构造函数
    Line(Line &l); //复制构造函数
    double getLen() {return len;}//内联函数，直接把定义也写在了类里
private:
    Point p1,p2;
    double len;
};

//组合类的构造函数
Line::Line(Point xp1, Point xp2) : p1(xp1),p2(xp2){
    cout<<"Calling constructor of Line"<<endl;
    double x = static_cast<double>(p1.getX() - p2.getX());
    double y = static_cast<double>(p1.getY() - p2.getY());
    len = sqrt(x*x+y*y);
}
//组合类的复制构造函数
Line::Line(Line &l):p1(l.p1),p2(l.p2){
    cout << "calling the copy constructor of Line" << endl;
    len = l.len;
}

int main(){
    Point myp1(1,1),myp2(4,5);//建立Point类的对象
    Line line(myp1,myp2);//建立Line类的对象
    Line line2(line); //利用拷贝构造函数建立一个新对象
    cout << "The length of the line is:";
    cout << line.getLen() <<endl;
    cout << "The length of the line2 is:";
    cout << line2.getLen() <<endl;
    return 0;

}





















