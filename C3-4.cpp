//
//  C3-4.cpp
//  
//
//  Created by 郑彤 on 2018/8/9.
//

#include <iostream>
#include <cstdio>

using namespace std;

long long fib(int n);

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
        cout<<fib(n)<<endl;
    return 0;
}


long long fib(int n)
{
    if(n<=1) return 1;
    else
    {
        long long a=1,b=1,c;
        while((n--)-1)
        {
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
}
