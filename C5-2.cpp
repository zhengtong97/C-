/* students please write your program here */
#include <iostream>
using namespace std;
//
//class Mouse{
//
//    static int num;
//public:
//    Mouse();
//    ~Mouse();
//    Mouse(const Mouse &p);
//
//};
//int Mouse::num;
//Mouse::~Mouse()
//{
//    Mouse::num--;
//}
//Mouse::Mouse()
//{
//    Mouse::num++;
//}
//Mouse::Mouse(const Mouse &p)
//{
//    Mouse::num++;
//}


class Mouse{

public:
    static int num;
    Mouse(){num++;}
    Mouse(Mouse &p){num++;}
    ~Mouse(){num--;}
};

int Mouse::num = 0;
void fn(Mouse m);

int main()
{
    Mouse::num = 0;
    Mouse a;
    cout << Mouse::num << endl;
    Mouse b(a);
    cout << Mouse::num << endl;
    for (int i = 0; i < 10; ++i)
    {
        Mouse x;
        cout << Mouse::num << endl;
    }
    fn(a);
    cout << Mouse::num << endl;
    return 0;
}

void fn(Mouse m)
{
    cout << Mouse::num << endl;
    Mouse n(m);
    cout << Mouse::num << endl;
}


