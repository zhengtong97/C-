#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
class Equation{
private:
    int _a, _b, _c;
public:
    Equation(int a, int b, int c){
        _a = a;
        _b = b;
        _c = c;
    }
    void solve(){
        if(_a!=0)
        {
            int delta = _b*_b-4*_a*_c;
            if(delta > 0)
            {
                cout<<"1\n";
                float x1 = (-_b-sqrt(delta))/(2*_a);
                float x2 = (-_b+sqrt(delta))/(2*_a);
                if(x1<x2)
                    printf("%.2f %.2f\n",x1,x2);
                else
                    printf("%.2f %.2f\n",x2,x1);
            }else if(delta == 0){
                cout<<"2\n";
                float x = (-_b-sqrt(delta))/(2*_a);
                    printf("%.2f\n",x);
            }else printf("3\n");
            
        }else if(_a==0){
            if(_b==0&&_c!=0)
                printf("4\n");
            else if(_b==0&&_c==0)
                printf("5\n");
            else if(_b!=0)
            {
                printf("6\n%.2f\n",(float)-_c/(float)_b);
            }
        }
    }
};


int main(){
    int a, b, c;
    cin >> a >> b >> c;
    Equation tmp(a, b, c);
    tmp.solve();
    return 0;
}
