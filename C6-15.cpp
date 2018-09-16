//
//  C6-15.cpp
//  
//
//  Created by 郑彤 on 2018/8/27.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int i,l;
    cin>>i>>l;
    if( i >= (str.size()-1) || i < 0)
        cout << "Not Valid!" << endl;
    else if((str.size()-i)<l)
        cout << str.substr(i,str.size()-i) << endl;
    else
        cout << str.substr(i,l) <<endl;
   
    return 0;
    
    
}
