//
//  C7-2.cpp
//  
//
//  Created by 郑彤 on 2018/9/5.
//

#include <iostream>
using namespace std;

class Base1
{
    int x1;
public:
    Base1(int x);
    ~Base1();
};

class Base2
{
    int x2;
public:
    Base2(int x);
    ~Base2();
};
class Base3
{
    int x3;
public:
    Base3(int x);
    ~Base3();
};

class Derived:public Base2,public Base1,public Base3//继承上面3个类
{
    int x4;
public:
    Derived(int x1, int x2, int x3, int x4);
    ~Derived();
};

Base1::Base1(int x):x1(x)
{
    cout<<"Base1 constructor called "<<x<<endl;
}

Base1::~Base1()
{
    cout<<"Base1 destructor called"<<endl;
}
//依照Base1类中的代码实现其它类的构造函数和析构函数
Base2::Base2(int x):x2(x)
{
    cout<<"Base2 constructor called "<<x<<endl;
}

Base2::~Base2()
{
    cout<<"Base2 destructor called"<<endl;
}
Base3::Base3(int x):x3(x)
{
    cout<<"Base3 constructor called "<<x<<endl;
}

Base3::~Base3()
{
    cout<<"Base3 destructor called"<<endl;
}

Derived::Derived(int x1, int x2, int x3, int x4):Base1(x2),Base2(x3),Base3(x4),x4(x1)
{
    cout<<"Derived constructor called "<<x1<<endl;
}

Derived::~Derived()
{
    cout<<"Derived destructor called"<<endl;
}

int main()
{
    int x[4];
    for (int i = 0; i < 4; ++i)
        cin >> x[i];
    Derived d(x[0], x[1], x[2], x[3]);
    return 0;
}
