/* students please write your program here */
#include <iostream>
#include <cstdio>
using namespace std;
int fib(int n);
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
        cout<<fib(n)<<endl;
    return 0;
}

int fib(int n)
{
    if(n>=3)
        return fib(n-1)+fib(n-2);
    else if(n==0)
        return 1;
    else
        return n;
}
