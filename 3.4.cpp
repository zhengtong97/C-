//
//  3.4.cpp
//  
//
//  Created by 郑彤 on 2018/7/11.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5,6,7,8,9};
    vector<int>::size_type n;
    for (int i =0; i != 10; ++i)
        v.push_back(i);
    for (auto i : v)
        cout << i << " ";
    
    return 0;
}
