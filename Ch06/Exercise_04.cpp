/*
    查找单独的数
    题目描述

    有一个由 n 个小于10^9无序的正整数构成的数组，
    其中有且仅有一个数出现了一次，
    其他的数均出现了两次。请找出这个只出现一次的数。
*/

#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int* arr;
    
    cin >> n;
    int ret;
    if(n>=1 && n<=100){
        arr = new int[n];
        
        for(int i=0; i<n; i++){
            
            cin >> arr[i];
        }
        for(int j=0; j<n; j++){
            ret ^= arr[j];
        }
        cout << ret << endl;
        delete[] arr;
    }
    return 0;
}