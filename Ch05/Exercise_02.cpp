/*
    通过本题目的练习可以掌握静态数据成员和静态成员函数的用法
    要求设计一个点类Point，它具有两个double型的数据成员x，y。
    和一个静态数据成员count ，用以记录系统中创建点对象的数目。
    
    为该类设计构造函数和析构函数，
    在其中对count的值做修改，
    体现点的数目的动态变化。
    
    并为其添加一个静态成员函数用以输出count的值；
    成员函数showPoint()用于输出点的信息。
*/

#include <iostream>
using namespace std;

class Point{
    private:
    double x;
    double y;
    static double count;
    
    public:
    Point(double a=0, double b=0);
    ~Point();
    void showPoint(){
        cout << x << "," << y << endl;
    }
    static void showCount();
};

double Point::count = 0;
Point::Point(double a, double b){
    x = a;
    y = b;
    count++;
}
Point::~Point(){
    //cout--
}

void Point::showCount(){
    cout << count << endl;
}

int main(){
    double a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }
        Point p(a,b);
    }
    Point::showCount();
    return 0;
}