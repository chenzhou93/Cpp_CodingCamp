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

    sum = nums[0];
    int max = sum;
    for(int i=1; i<n; i++){
        if(sum + nums[i] < nums[i]){
            sum = nums[i];
        }else{
            sum += nums[i];
        }
        if(max < sum){
            max = sum;
        }
    }
    cout << max << endl;

    delete[]nums;
    return 0;
}