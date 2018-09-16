//
//  C3-5.cpp
//  
//
//  Created by 郑彤 on 2018/8/9.
//

#include <iostream>

using namespace std;
long maxcomdiv(long a,long b);
int main()
{
    long a,b;
    cin>>a>>b;
    cout<<maxcomdiv(a,b)<<endl;
    return 0;
}



long maxcomdiv(long a,long b)
{
    if(b<=a)
    {
        if(a%b==0)
            return b;
        else
            return maxcomdiv(b,a%b);
    }else{
        if(b%a==0)
            return a;
        else
            return maxcomdiv(a,b%a);
    }
        
}
