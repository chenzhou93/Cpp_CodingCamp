/*
    Sum of all digits of a integer.
    Until the new result is equal to the previous one.
*/
#include <iostream>
using namespace std;

void getSum(int num){
    int tmp = 0;
    if(num < 10){
        cout << num << endl;
        return;
    }else{
        while(num > 0){
            tmp += num%10;
            num /= 10;
        }
        getSum(tmp);
    }
}

int main(){
    unsigned long long num = 0;
    cin >> num;
    getSum(num);
    return 0;
}

