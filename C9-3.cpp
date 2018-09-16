//
//  C9-3.cpp
//  
//
//  Created by 郑彤 on 2018/9/10.
//

#include <iostream>
#include <string>
using namespace std;
#define MAX 1000
template<class T>
class Stack
{
private:
    T list[MAX + 1];
    int top;
public:
    Stack();//构造函数
    void push(const T &item);//将item压栈
    T pop();//将栈顶元素弹出栈
    const T & peek() const;//访问栈顶元素
    bool isEmpty() const;//判断是否栈空
};
//请完成栈模板类的实现，并解决括号匹配问题
template<class T>
Stack<T>::Stack(){
    T list[MAX+1];
    top = -1;
}

template<class T>
void Stack<T>::push(const T &item){
    top++;
    list[top] = item;
}

template<class T>
T Stack<T>::pop(){
    top--;
    return list[top+1];
}

template<class T>
const T & Stack<T>::peek() const{
    return list[top];
}

template<class T>
bool Stack<T>::isEmpty() const{
    if(top==-1)
        return true;
    else
        return false;
}

int main()
{
    Stack<char> str;
    char a;
    bool flag=1;
    while(cin>>a)
    {
        if(a=='(')
            str.push(a);
        else if(a==')')
        {
            if(str.isEmpty())
                flag = 0;
            else
                str.pop();
        }
                
    }
    if(!str.isEmpty()) flag=0;
    if(flag)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    
    return 0;
}
