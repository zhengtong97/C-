//
//  C9-1.cpp
//  
//
//  Created by 郑彤 on 2018/9/7.
//

#include <iostream>
using namespace std;
template <typename T>
T getSum(T* arr,int num);
/*请在这里填充代码*/
template <typename T>
T getSum(T* arr,int num)
{
    T sum = 0;
    for(int i=0;i<num;i++)
        sum += arr[i];
    return sum;
}


int main()
{
    int n, m;
    cin >> n >> m;
    int* arr_int = new int[n];
    double* arr_double = new double[m];
    for (int i = 0; i < n; ++i)
        cin >> arr_int[i];
    for (int i = 0; i < m; ++i)
        cin >> arr_double[i];
    cout << getSum(arr_int, n) << endl;
    cout << getSum(arr_double, m) << endl;
    return 0;
}
