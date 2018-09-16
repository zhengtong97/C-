//
//  C6-7.cpp
//  
//
//  Created by 郑彤 on 2018/8/27.
//

#include <iostream>
using namespace std;


int main()
{
    int M,N;
    cin>>M>>N;
    int m[N][M];
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            cin>>m[i][j];
    for(int i=0;i<N;i++)
    {
        int flag = 0;
        for(int j=0;j<M;j++)
        {
            if(flag)
            {
                cout<<" ";
            }
             cout<<m[i][j];
             flag = 1;
        }
        cout<<endl;
    }
    
}
