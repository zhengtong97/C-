//
//  C9-2.cpp
//  
//
//  Created by 郑彤 on 2018/9/12.
//

#include <iostream>
using namespace std;

template <class T>
int binSearch(T arr[], int n, T key);

/*请实现折半查找，并按顺序输出被访问的元素下标*/

template <class T>
int binSearch(T arr[], int n, T key)
{
    int a=0,b=n-1;
    int i;
    int last = n;
    for(i = b/2 ;last!=i; i = (a+b)/2 )
    {
        cout<<i<<endl;
        if(arr[i]<key)
            a = i+1;
        else if(arr[i]>key)
            b = i-1;
        else
            break;
        last = i;
    }
    return i;
}

int main()
{
    int n, m;
    int key1;
    double key2;
    cin >> n >> m >> key1 >> key2;
    int* arr_int = new int[n];
    double* arr_double = new double[m];
    for (int i = 0; i < n; ++i)
        cin >> arr_int[i];
    for (int i = 0; i < m; ++i)
        cin >> arr_double[i];
    binSearch(arr_int, n, key1);
    binSearch(arr_double, m, key2);
    return 0;
}
