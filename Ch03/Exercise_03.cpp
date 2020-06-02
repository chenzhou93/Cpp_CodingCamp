/*
    丑数
    题目描述:

    只包含因子2,3,5的正整数被称作丑数，
    比如4,10,12都是丑数，而7,23,111则不是丑数，
    另外1也不是丑数。
    请编写一个函数，输入一个整数n，能够判断该整数是否为丑数，如果是，则输出True，否则输出False。
*/

#include <iostream>
using namespace std;

bool isUglyNumber(int);

int main(){
    int n = 0;
    cin >> n;
    if(n >= 1 && n <= 1000000){
        if(isUglyNumber(n)){
            cout << "True" << endl;
        }else{
            cout << "False" << endl;
        }
    }
    return 0;
}

bool isUglyNumber(int n){
    if(n == 1){
        return false;
    }
    while(n%2==0){
        n /= 2;
    }
    while(n%3==0){
        n /= 3;
    }
    while(n%5==0){
        n /= 5;
    }
    return n==1;
}