/*
    最大子数组和
    题目描述

    给定一个数组a[0,...,n-1],求其最大子数组(长度>=1)和

    输入描述

    第一行一个整数n(1<=n<=5000)，然后依次输入n个整数（每个整数范围[-5000, 5000]）
*/

#include <iostream>
using namespace std;

int main(){
    int* array;
    
    int n = 0;
    cin >> n;
    if(n>=1 && n<=5000){
        array = new int[n];
        for(int i=0; i<n; i++){
            cin >> array[i];
        }
        int sum = array[0];
        int max = sum;
        for(int i=1; i<n; i++){
            if(sum + array[i] < array[i]){
                sum = array[i];
            }else{
                sum += array[i];
            }
            if(max < sum){
            max = sum;
            }
        }

        cout << max << endl;
        delete[] array;
    }
   
    return 0;
}