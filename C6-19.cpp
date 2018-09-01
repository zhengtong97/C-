//
//  C6-19.cpp
//  
//
//  Created by 郑彤 on 2018/8/31.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int k;
    int count = 0;
    getline(cin,str);
    cin >> k;
    int i = 0;
    while(count<k)
    {

        if(str[i]>str[i+1])
        {
            str.erase(i,1);
            count++;
            if(i)
                i--;
        }
        else
            i++;
    }
    while(str[0]=='0')
        str.erase(str.begin());
    if(str.size())
        cout<<str<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
