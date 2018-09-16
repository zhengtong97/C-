//
//  C6-4.cpp
//  
//
//  Created by 郑彤 on 2018/8/27.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int tmp;
    static int i = 0;
    static int sum = 0;
    static int max = 0;
    while(n--)
    {

        cin>>tmp;
        if(sum+tmp <=0)
            sum = 0;
        else
            sum +=tmp;
        if(sum>=max)
            max = sum;

        i++;
    }
    cout<<max<<endl;
    return 0;
}
