#include <iostream>
using namespace std;

class Integer{
private:
    int _num;
    //getLength()函数获取_num长度
//    int getLength(){
//    }
public:
    //Integer类构造函数
    Integer(int num){
        _num = num;
    }
    //反转_num
    int inversed(){
        int inv=0;
        for(;_num/10;_num /= 10)
            inv = inv*10+_num%10;
         inv = inv*10+_num%10;
        return inv;
    }
};

int main() {
    int n;
    cin >> n;
    Integer integer(n);
    cout << integer.inversed() << endl;
    return 0;
}
