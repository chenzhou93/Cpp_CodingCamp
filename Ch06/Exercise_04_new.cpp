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
    int* cnt;
    if(n>=1 && n<=100){
        arr = new int[n];
        cnt = new int[n];
        for(int i=0; i<n; i++){
            cnt[i] = 0;
            cin >> arr[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i] == arr[j]){
                    cnt[i]++;
                    cnt[j]++;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(cnt[i] == 0){
                cout << arr[i] << endl;
            }
        }
        delete[] cnt;
        delete[] arr;
    }
    return 0;
}