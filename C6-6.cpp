//
//  C6-6.cpp
//  
//
//  Created by 郑彤 on 2018/8/27.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string num;
    while(cin>>num)
    {
        int sum = 0;
        for(int i=0;i<num.size();i++)
        {
            sum *=26;
            sum += (int)num[i]-int('A')+1;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
