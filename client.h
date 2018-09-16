//
//  client.hpp
//  
//
//  Created by 郑彤 on 2018/8/12.
//

#ifndef CLIENT_H_
#define CLIENT_H_

class Client{
    static char ServerName;
    static int ClientNum;
public:
    static void ChangeServerName(char name);
    static int getClientNum();
    static char getServerName();
};

#endif /* client_h */
