#include <iostream>

using namespace std;

class A{
    public:
    int a, b;
    A(int x){
        a=x--;
        b=a*x;
    }
};

int main(){
    int a=4,b=3,c=2,d=1;

	return 0;
}