/*
    斐波那契数列
    题目描述:

    斐波那契数列f(n)满足以下定义：f(0) = 1, f(1) = 1, f(n) = f(n-1) + f(n-2) (n >= 2)。
    请用递归的方法编写函数，对于给定的n，求出斐波那契数列的第n项f(n)。
*/

#include <iostream>

using namespace std;

int feb(int);

int main(){
    int n = 0;
    cin >> n;
    if(n >= 0 && n <= 30){
        cout << feb(n) << endl;
    }
    return 0;
}

int feb(int n){
    int res = 0;
    int first = 1;
    int second = 1;
    if(n == 0 || n == 1){
        res = 1;
    }
    
    for(int i=2; i<=n; i++){
        res = first + second;
        first = second;
        second = res;
    }
    return res;
}