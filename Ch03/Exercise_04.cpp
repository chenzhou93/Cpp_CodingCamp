/*
    完美数
    题目描述

    给定一个整数，判断是否为完美数
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectNum(int);

int main(){
    int num = 0;
    // cin >> num;
    // if(num > 0 && num <= 10000){
    //     if(isPerfectNum(num)){
    //         cout << "True" << endl;
    //     }else{
    //         cout << "False" << endl;
    //     }
    // }else{
    //     cout << "False" << endl;
    // }
    int cnt = 0;
    for(int i=1; i<=10000; i++){
        if(!isPerfectNum(i)){
            //cout << "i: " << i << endl;
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

bool isPerfectNum(int n){
    if(n == 1){
        return false;
    }
    int sum = 1;
    for(int i=2; i<n; i++){
        int tmp = n%i;
        if(tmp == 0){
            sum += i;
            // if(sum == n){
            //     return true;
            // }
            // if(t != i){
            //     sum += i + t;
            // }else{
            //     sum += i;
            // }
        }
    }
    return sum == n;
}