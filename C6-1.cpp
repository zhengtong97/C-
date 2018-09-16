
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int maxsum(vector<int> &array);

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    while(n--){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    cout<< maxsum(a)<<endl;
    return 0;
}

int maxsum(vector<int> &array)
{
    int max = -5000;
    int sum = 0;
    for(int i=0;i<array.size();i++)
    {
        sum +=array[i];
        if(sum > max)
            max = sum;
        else if(sum<0)
            sum = 0;
    }
    return max;
}
