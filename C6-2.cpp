//
//  C6-2.cpp
//  
//
//  Created by 郑彤 on 2018/8/26.
//
//
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//
//int main()
//{
//    string str;
//    char a;
//    while(cin>>str)
//    {
//        int dp[str.size()][str.size()];
//        for(int i=0;i<str.size();i++)
//        {
//            dp[i][i]=1;
//            for(int j=i-1;j>0;j--)
//            {
//                dp[j][i] = dp[j][i-1]+dp[j+1][i]-dp[j+1][i-1];
//                if(str[i]==str[j])
//                    dp[j][i]+=dp[j+1][i-1]+1;
//            }
//        }
//            cout<<dp[0][str.size()-1]<<endl;
//    }
//
//    return 0;
//}

//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int NumOfPalindromeSubSequence(string str){
//    int len=str.length();
//    vector<vector<int> > dp(len,vector<int>(len));
//
//    for(int j=0;j<len;j++){
//        dp[j][j]=1;
//        for(int i=j-1;i>=0;i--){
//            dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
//            if(str[i]==str[j])
//                dp[i][j]+=1+dp[i+1][j-1];
//        }
//    }
//    return dp[0][len-1];
//}
//
//int main()
//{
//    string str;
//    int num;
//    while(cin>>str){
//        num=NumOfPalindromeSubSequence(str);
//        cout<<num<<endl;
//    }
//    return 0;
//}






#include <iostream>
#include <vector>
using namespace std;
int numofpalin(vector<char> &str);
int main()
{
    vector<char> str;
    char a;
    while(cin>>a)
        str.push_back(a);
    cout<<numofpalin(str)<<endl;
    
    
    return 0;
}

int numofpalin(vector<char> &str)
{
    int len = str.size();
    vector<vector<int> > dp(len,vector<int>(len));
    for (int i=0;i<len;i++)
    {
        dp[i][i]=1;
        for (int j=i-1;j>=0;j--)
        {
            dp[j][i] = dp[j+1][i]+dp[j][i-1]-dp[j+1][i-1];
            if (str[i]==str[j])
                 dp[j][i] += 1+dp[j+1][i-1];
        }
    }
        return dp[0][len-1];
}












