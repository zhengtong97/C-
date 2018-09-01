//
//  5_1.cpp
//  
//
//  Created by 郑彤 on 2018/8/12.
//

#include <iostream>
#include "client.h"
using namespace std;

int  Client::ClientNum = 0;
char Client::ServerName = 'a';

int main()
{
    Client c1;
    c1.ChangeServerName('a');
    cout << Client::getServerName() <<endl;
    cout << Client::getClientNum() <<endl;
    Client c2;
    c2.ChangeServerName('b');
    cout << Client::getServerName() <<endl;
    cout << Client::getClientNum()<<endl;
    return 0;
}
