#include <iostream>

using namespace std;
int func(int i, int j){
    int temp;
    if(i<j){
        temp = i;
        i = j;
        j = temp;
    }

    while(j != 0){
        temp = i%j;
        i=j;
        j=temp;
    }
    return i;
}

int main(){
    cout << func(1, 10) << endl;
    return 0;
}