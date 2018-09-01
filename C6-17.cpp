//
//  C6-17.cpp
//  
//
//  Created by 郑彤 on 2018/8/28.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
    string words;
    string rewords;
    getline(cin,words);
    while(words.size())
    {
        char a = words[words.size()-1];
        words.pop_back();
        if(a==' ')
        {
            for(int i=rewords.size();i>0;i--)
            {
                cout<<rewords[rewords.size()-1];
                rewords.pop_back();
            }
            cout<<" ";
        }
        else
            rewords.push_back(a);
    }
    for(int i=rewords.size();i>0;i--)
    {
        cout<<rewords[rewords.size()-1];
        rewords.pop_back();
    }
    return 0;
}
