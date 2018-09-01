//
//  C6-3.cpp
//  
//
//  Created by 郑彤 on 2018/8/26.
//

#include <iostream>
using namespace std;
#define MaxValue 5000;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int array[n2];
    for(int i=0;i<n2;i++)
        array[i] = MaxValue;
    while(n1--)
    {
        int a;
        cin>>a;
        if(a<array[n2-1])
        {
            array[n2-1] = a;
            int flag = 1;
            for(int j = n2-1;j>0&&flag==1;j--)
                if(array[j]<array[j-1])
                {
                    int tmp =array[j-1];
                    array[j-1] = array[j];
                    array[j] = tmp;
                }else{
                    flag = 0;
                }
        }
        
    }
    cout<<array[n2-1]<<endl;
    return 0;
}
