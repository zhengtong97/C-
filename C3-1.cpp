 /* students please write your program here */
#include <iostream>
#include <cstdio>
using namespace std;
bool ifright(int a, int b, int c);

int main()
{
    int a,b,c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if(ifright(a,b,c))
            cout<<"True"<<endl;
        else 
            cout<<"False"<<endl;
    }
    return 0;
}

bool ifright(int a, int b, int c)
{
    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))
        return true;
     else 
         return false;
}
