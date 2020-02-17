/*
    Transfer a binary number to Decimal.
*/

#include <iostream>

using namespace std;

int main(){
    long num = 0L;
    int cnt = 0;
    int dec = 0;
    cin >> num;
    while(num > 0){
        int tmp = num % 10;
        if(tmp == 1){
            int res = 1;
            for(int i=0; i<cnt; ++i){
                res *= 2;
            }
            dec += res;
        }
        num = num/10;
        cnt++;
    }
    cout << dec << endl;
    return 0;
}
