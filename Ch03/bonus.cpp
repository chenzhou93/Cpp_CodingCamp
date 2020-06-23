#include <iostream>

using namespace std;

int sum7s(int n){
    int sum = 0;
    if(n<7){
        return 0;
    }
    int index = 1;
    while(index * 7 <= n){
        sum += index*7;
        index++;
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << sum7s(n) << endl;
    return 0;
}