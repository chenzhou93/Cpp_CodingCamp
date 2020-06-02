/*
    数组第k小数
    题目描述

    给定一个整数数组a[0,...,n-1]，
    求数组中第k小数（最小数为第1小，次小数为第2小，以此类推。
    若有并列，比如有两个最小数1，则第1小和第2小数都是1.）
*/

#include <iostream>
using namespace std;

void mySort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main(){
    int* arr;
    int n = 0;
    int k = 0;
    cin >> n >> k;
    if(n>=1 && n<=5000 && k>=1 && k<=n){
        arr = new int[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        mySort(arr, n);
        cout << arr[k-1] << endl;
        delete[] arr;
    }
    return 0;
}