/*
    图形类
    题目描述

    下面给出了图形类Shape的定义，
    请以Shape为基类派生出矩形类Rectangle和三角形类Triangle，
    并实现他们各自的求面积函数area()，该函数返回double类型。
*/

#include <iostream>
using namespace std; 

class Shape
{
protected:
    int w, h;
public:
    Shape(int w, int h):w(w), h(h){}
}; 

/*实现两个派生类*/
class Rectangle : public Shape{
    public:
    Rectangle(int wid=0, int height=0):Shape(wid, height){ }
    double area(){
        return Shape::w * Shape::h;
    }
};

class Triangle : public Shape{
    public:
    Triangle(int wid=0, int height=0):Shape(wid, height){ }
    double area(){
        return Shape::w * Shape::h * 0.5;
    }
};

int main()
{
    int w, h;
    cin >> w >> h;
    Rectangle a(w, h);
    cout << a.area() << endl;
    cin >> w >> h;
    Triangle b(w, h);
    cout << b.area() << endl;
    return 0;
}