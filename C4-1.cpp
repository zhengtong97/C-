//
//  C4-1.cpp
//  
//
//  Created by 郑彤 on 2018/8/11.
//


#include <iostream>
using namespace std;
class Integer {
private:
    int _num;
public:
    //构造函数
    Integer(int num) {
        _num = num;
    }
    int GetNum(){return _num;}
    //计算当前Integer 和 b之间的最大公约数
    int gcd(Integer b) {
        if(b.GetNum()<=_num)
        {
            if(_num%b.GetNum()==0)
                return b.GetNum();
            else
                return b.gcd(_num%b.GetNum());
        }else{
            if(b.GetNum()%_num==0)
                return _num;
            else
                return gcd(b.GetNum()%_num);
        }
    }
};
int main(){
    int a, b;
    cin >> a >> b;
    Integer A(a);
    Integer B(b);
    cout << A.gcd(B) << endl;
    return 0;
}


