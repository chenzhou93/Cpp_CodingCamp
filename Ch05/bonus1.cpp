#include <iostream>
#include <cmath>

using namespace std;

class Point{
    private:
    int x;
    int y;
    public:
    Point(){ }
    Point(int x1, int y1);
    friend class Distance;
};

class Distance{ 
    public:
    float Dis(Point & p,Point & q); 
};

Point::Point(int x1, int y1){
    x = x1;
    y = y1;
}

float Distance::Dis(Point & p,Point & q){
    return sqrt((q.y - p.y) * (q.y - p.y) + (q.x - p.x) * (q.x - p.x));
}

int main(){
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    Point p(x1,y1), q(x2,y2);
    Distance d;
    cout<<d.Dis(p,q)<<endl;
    return 0; 
}