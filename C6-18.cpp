//
//  C6-18.cpp
//  
//
//  Created by 郑彤 on 2018/8/30.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string str1;
    string str2;
    string str3;
    getline(cin,str1);
    getline(cin,str2);
    int a,b;
    int c = 0;
    while(str1.size()&&str2.size())
    {
        a = str1[str1.size()-1]-'0';
        b = str2[str2.size()-1]-'0';
//        cout<<a<<endl;
//        cout<<b<<endl;
        str1.pop_back();
        str2.pop_back();
        c += a+b;
//        cout<<c<<endl;
        if(c<10)
        {
            str3.push_back(c+'0');
            c = 0;
        }else if(c>=10){
            str3.push_back(c%10+'0');
            c /= 10;
        }
//        cout<<str3<<endl;
    }

    while(str1.size())
    {
            c += str1[str1.size()-1]-'0';
            str1.pop_back();
            if(c<10)
            {
                str3.push_back(c+'0');
                c = 0;
            }else if(c>=10){
                str3.push_back(c%10+'0');
                c /= 10;
            }
    }

    while(str2.size())
    {
        c += str2[str2.size()-1]-'0';
        str2.pop_back();
        if(c<10)
        {
            str3.push_back(c+'0');
            c = 0;
        }else if(c>=10){
            str3.push_back((c%10+'0'));
            c /= 10;
        }
    }
    if(c)
        str3.push_back(c+'0');
    while(str3.size())
    {
        cout<<str3[str3.size()-1];
        str3.pop_back();
    }
    cout<<endl;
    return 0;
}
