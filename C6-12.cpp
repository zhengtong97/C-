//
//  C6-12.cpp
//  
//
//  Created by 郑彤 on 2018/8/27.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int room[n];
    int roomnum=0;

    int N=n;
    while(n--)
    {
        int begin,end;
        cin>>begin>>end;
        for(int i=0;i<N;i++)
        {
            if(i>=roomnum)
                roomnum=i;
            if(begin>=room[i])
            {
                room[i]=end;
                break;
            }
        }
    }
    cout<<roomnum+1<<endl;
    return 0;
}
