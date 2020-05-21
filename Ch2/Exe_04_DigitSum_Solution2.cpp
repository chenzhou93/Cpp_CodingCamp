/*
    Sum of all digits of a integer.
    Until the new result is equal to the previous one.
*/
#include <iostream>
using namespace std;

int main(){
    unsigned long long num = 0;
    cin >> num;
    int n = 0;
    while(num > 0){
        int digit = num%10;
        n += digit;
        num = num/10;
    }

    int res = n > 10 ? 0 : n;
    while(n > 10){
        int a1 = n%10;
        int b1 = n/10;
        int s = a1 + b1;
        if(s>=10){
            n = s;
        }else{
            res = s;
            break;
        }
    }
    cout << res << endl;
    
    return 0;
}

