//
//  4.cpp
//  
//
//  Created by 郑彤 on 2018/8/10.
//

#include <iostream>
using namespace std;

class Clock{
public:
    Clock();
    Clock(int newH, int newM, int newS);
    void setTime(int newH, int newM, int newS);
    void showTime();
private:
    int hour,minute,second;
};

Clock::Clock(int newH, int newM, int newS):
hour(newH),minute(newM),second(newS){}

//Clock::Clock():hour(0),minute(0),second(0){}
Clock::Clock():Clock(0,0,0){}


inline void Clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}
int main(){
    Clock c;
    c.showTime();
    return 0;
}
