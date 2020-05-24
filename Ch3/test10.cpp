#include <iostream>

using namespace std;

void func(int i,int n){
    if(i==n){
        cout << i << endl;
        return;
    }
    cout << i << endl;
    func(i+1,n);
    cout << i << endl;
}

int main(){
    func(1,4);
    return 0;
}