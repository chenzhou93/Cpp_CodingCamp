#include <iostream>
using namespace std;

class A
{
protected:
    int a=0;
public:
    A(){a=1;}
};
class B:virtual public A
{
public:
    B(){a++;}
};
class C:virtual public A
{
public:
    C(){a+=2;}
};
class D:public B,public C
{
public:
    void print(){
        cout<<a<<endl;
    }
};
int main() {
    D obj;
    obj.print();
    return 0;
}