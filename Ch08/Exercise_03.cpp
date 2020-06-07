#include <cstdio>
#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

enum shape{CIRCLE, TRIANGLE, RECTANGLE};
const double pi = 3.14;

class Shape
{
public:
    Shape(){};
    virtual void showArea() = 0;
};

class Circle:public Shape
{
public:
    Circle(double r)
    {
        radius = r;
    }
    //补充该函数
    void showArea()    
    {
        if(radius > 0){
            cout << pi * radius * radius << endl;
        }
    }
private:
    double radius;
};

class Triangle:public Shape
{
public:
    Triangle(double a1,double b1,double c1)
    {
    a = a1;
    b = b1;
    c = c1;
    }
    //补充该函数
    void showArea()
    {
        if(isTriangle()){
            double p = (a+b+c)/2;
            double area = sqrt(p*(p-a)*(p-b)*(p-c));
            cout << area << endl;
        }
       
    }

    bool isTriangle(){
        if(a <= 0 || b<=0 || c<=0){
            return false;
        }
        if(a+b>c || b+c>a || a+c>b){
            return true;
        }
        return false;
    }
private:
    double a, b, c;
};

class Rectangle:public Shape
{
public:
    Rectangle(double x, double y)
    {
    width = x;
    height = y;
    }
    //补充该函数
    void showArea()
    {
        if(width >= 0 && height >=0){
            cout << width * height << endl;
        }
    }
private:
    double width, height;
};



//补充该函数
void calArea(Shape* ptr){
    ptr->showArea();
}

void init(){
    //浮点输出初始化
    cout<<fixed<<setprecision(2);
}

int main(){
    init();
    int type;
    cin >> type;
    if (type == CIRCLE) {
        double r;
        cin >> r;
        Circle circle(r);
        calArea(&circle);
        }
    else if (type == TRIANGLE) {
        double a, b, c;
        cin >> a >> b >> c;
        Triangle triangle(a, b, c);
        calArea(&triangle);
    }
    else {
        double x, y;
        cin >> x >> y;
        Rectangle rectangle(x, y);
        calArea(&rectangle);
    }
}
