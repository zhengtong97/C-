//
//  client.cpp
//  
//
//  Created by 郑彤 on 2018/8/12.
//

#include "client.h"

void Client::ChangeServerName(char name){
    Client::ServerName = name;
    Client::ClientNum++;
}
int Client::getClientNum(){
    return Client::ClientNum;
}

char Client::getServerName(){
    return Client::ServerName;
}
