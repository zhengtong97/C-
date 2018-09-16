//
//  C6-9.cpp
//  
//
//  Created by 郑彤 on 2018/8/27.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max=0,count=0;
    while(n--)
    {
        int now;
        
        cin>>now;
        if(now)
        {
            count++;
            if (count>max) max=count;
        }
        else
        {
            if (count>max) max=count;
            count = 0;
        }
        
    }
    cout<<max<<endl;
    return 0;
}
