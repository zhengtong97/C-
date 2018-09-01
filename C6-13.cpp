//
//  C6-11.cpp
//  
//
//  Created by 郑彤 on 2018/8/27.
//

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<vector<int> > tri(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        int flag = 0;
        tri[i][0]=1;
        tri[i][i]=1;
        for(int j=1;j<i;j++)
            tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
        for(int j=0;j<=i;j++)
        {
            if(flag)
                cout<<" ";
            cout<<tri[i][j];
            flag = 1;
        }
        cout<<endl;
    }
    return 0;
    
}
