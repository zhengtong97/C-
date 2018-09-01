//
//  C6-5.cpp
//  
//
//  Created by 郑彤 on 2018/8/27.
//

#include <iostream>
using namespace std;



int main()
{
    int n;
    int a=0,b=0;
    while(cin>>n)
    {
        int a=0,b=0;
        int flag = 1;
        for(int i=0;i<2*n;i++)
        {
            a=b;
            cin>>b;
            if(b<a) flag = 0;
        }
        if(flag==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
