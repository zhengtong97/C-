//
//  C6-10.cpp
//  
//
//  Created by 郑彤 on 2018/8/31.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int zero = 0;
    int max = 0;
    int count = 0;
    cin >>n;
//    while(n--)
//    {
//        int a;
//        cin >> a;
//        if(a)
//        {
//            zero = 0;
//            current++;
//        }
//        else
//        {
//            if(!zero)
//            {
//                if(last+1+current>max)
//                    max = last+1+current;
//                last = current;
//                current = 0;
//            }else
//                last = 0;
//            zero++;
//        }
//    }
//    if(current+zero>max)
//        max = current+zero>max;
//
    
    
    
    
//    while(n--)
//    {
//        int a;
//        cin >> a;
//        if(a)
//            current++;
//        else
//        {
//            if(last+zero+current>max)
//            {
//                max = last+zero+current;
//                zero = 0;
//            }
//            zero++;
//            if(current)
//                if(current+1>max)
//                    max = current+1;
//            if(zero==1)
//                last = current;
//            if(zero>1)
//                last = 0;
//            current = 0;
//        }
//
//    }
//
//    if(last+zero+current>max)
//    {
//        max = last+zero+current;
//        zero = 0;
//    }
    
    
    
    
    while(n--)
    {
        int a;
        cin >> a;
        if(a)
        {
            count++;
            zero=0;
        }
        else
        {
            zero++;
             if(zero==1)
                 if(count+1>max&&count!=0)
                     max = ++count;
            if(zero>=2)
            {
                count = 0;
                zero = 0;
            }
        }
        
    }
    
    if(count>max)
        max = count;
    if(max==0) max = 1;
    cout << max <<endl;
    return 0;
    
}
