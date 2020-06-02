/*
    编程题 (10分)

    直角三角形
    题目描述:

    输入一个三角形的3边长度，
    判断该三角形是否为直角三角形，
    若是则输出True，若不是则输出False。
    推荐做法：定义一个函数，接受三个int参数，返回bool，再用主函数调用之。
*/

#include <iostream>
using namespace std;

bool isRightTriangle(int a, int b, int c);

int main(){
    int a=0, b=0, c=0;
    cin >> a >> b >> c;
    if(a >=1 && b>=1 && c>=1 && a<=10000 && b<=10000 && c<=10000){
        bool result = isRightTriangle(a,b,c);
        if(result){
            cout << "True" << endl;
        }else{
            cout << "False" << endl;
        }
        
    }
    return 0;
}

bool isRightTriangle(int a, int b, int c){
    int h = 0;
    int x1 = 0;
    int x2 = 0;
    if(a>b){
        if(a>c){
            h = a;
            x1 = b;
            x2 = c;
        }else{
            h = c;
            x1 = a;
            x2 = b;
        }
    }else{
        if(b>c){
            h = b;
            x1 = c;
            x2 = a;
        }else{
            h = c;
            x1 = a;
            x2 = b;
        }
    }

    return (x1*x1 + x2*x2 == h*h);
}