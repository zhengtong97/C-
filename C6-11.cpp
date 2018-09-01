//
//  C6-10.cpp
//  
//
//  Created by 郑彤 on 2018/8/27.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    while(n--)
    {
        int tmp;
        cin>>tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<endl;
    
    return 0;
}

