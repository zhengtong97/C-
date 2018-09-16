//
//  6-1.hpp
//  
//
//  Created by 郑彤 on 2018/8/13.
//

#ifndef __1_hpp
#define __1_hpp

#include <iostream>

class SavingsAccount{
    int id;
    double balance;
    double rate;
    int lastDate;
    double accumulation;
    
    static double total; //2
    
    void record(int date,double amount);
    const double accumulate(int date)const{
        return accumulation+balance*(date-lastDate);
    }
public:
    SavingsAccount(int date,int id,double rate);
    const int getId(){return id;}
    const double getBalance(){return balance;}
    const double getRate(){return rate;}
    void show();
    void deposit(int date,double amount);
    void withdraw(int date,double amount);
    void settle(int date);
    
    static double getTotal();//2
    
}



#endif /* __1_hpp */
