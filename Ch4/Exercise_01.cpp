/*
    最大公约数
    题目描述:
    求两个正整数a 和 b的最大公约数。要求使用c++ class编写程序。可以创建如下
*/

#include <iostream> 
using namespace std; 

class Integer { 
    private: 
    int _num;
    public: 
    //构造函数 
    Integer(int num):_num(num) { } 
    //计算当前Integer 和 b之间的最大公约数 
    int gcd(Integer b);
};

int Integer::gcd(Integer b){
    int x = _num > b._num ? _num : b._num;
    int y = _num < b._num ? _num : b._num;
    int rem = 0;
    while(y>0){
        rem = x%y;
        x = y;
        y = rem;
    }
    return x;
}

int main(){ 
    int a, b; cin >> a >> b; 
    Integer A(a); 
    Integer B(b); 
    cout << A.gcd(B) << endl; 
    return 0; 
}