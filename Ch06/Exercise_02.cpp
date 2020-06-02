/*
    数组极差
    题目描述

    给定一个整型数组 a[0, ..., n-1]，求数组元素的极差（即最大值与最小值的差）
*/

#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int* arr;
    cin >> n;
    int max, min;
    if(n>=1 && n<=5000){
        arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        max = arr[0];
        min = arr[0];
        for(int i=1; i<n; i++){
            if(arr[i] < min){
                min = arr[i];
            }
            if(arr[i] > max){
                max = arr[i];
            }
        }

        cout << max - min << endl;

        delete[] arr;
    }
    return 0;
}