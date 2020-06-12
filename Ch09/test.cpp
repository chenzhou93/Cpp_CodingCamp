#include <iostream>
using namespace std;


class A{
    public:
    int a;
};

int main(){
    A* p = new A();
    p->a = 10;

    A* p1 = p;
    cout << p1->a << endl;

    delete p;

    cout << p1->a << endl;
    
    return 0;
}