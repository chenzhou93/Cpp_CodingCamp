#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int sum = 0;
    cin >> n;
    int* nums = new int[n];

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    int cnt = 0;
    int cur = 0;
    int max = -1;
    bool flag = false;

    for(int i=0; i<n; i++){
        if(nums[i] == 0){
            int tmp = cur;
            cur = i;
            if(!flag){
                cnt = i-tmp;
                flag = true;
            }else{
                cnt = i-tmp-1;
            }
        }
        cnt++;

        if(max < cnt){
            max = cnt;
        }
    }

    cout << max << endl;
    delete[]nums;
    return 0;
}