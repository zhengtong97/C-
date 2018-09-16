//
//  C6-8.cpp
//  
//
//  Created by 郑彤 on 2018/8/27.
//
#include <iostream>
#include <vector>

using namespace std;


int main()
{
    vector<char> str;
    int num;
    cin>>num;
    while(num)
    {
        int a = num%26;
        if(!a) a=26;
        char b = char(a-1+(int)'A');
        str.push_back(b);
        num = (num - a)/26;
    }
    for(int i=str.size()-1;i>=0;i--)
        cout<<str[i];
    return 0;
}
