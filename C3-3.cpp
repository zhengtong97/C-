

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==1)
        {
            cout<<"False"<<endl;
            continue;
        }
        while(n%2==0&&n>=2)
            n /= 2;
        while(n%3==0&&n>=3)
            n /= 3;
        while(n%5==0&&n>=5)
            n /= 5;
        if(n==1)
            cout<<"True"<<endl;
        else
            cout<<"False"<<endl;

    }
    
    
    return 0;
}
