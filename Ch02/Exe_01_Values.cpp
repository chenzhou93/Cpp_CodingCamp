/*
    Given number of n integers,
    input numbers of integers n, and these numbers.
    calculate the sum of these integers, max, min.

    SAMPLE
    Input: 2, 1 2
    Output: 3 1 2
*/

#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int sum = 0;
    int max = 0;
    int min = 10000;
    int num = 0;
    //cout << "Input the number of integers: ";
    cin >> n;
    if(n <= 100){
        for(int i=0; i<n; ++i){
            int number = 0;
            cin >> number;
            if(number >= -10000 && number <= 10000){
                sum += number;
                if(number >= max){
                    max = number;
                }
                if(number <= min){
                    min = number;
                }
            }
        }
        cout << sum << ' ' << min << ' ' << max << endl;
    }
    
    return 0;
}
