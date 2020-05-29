/*
    设计一个日期类和时间类，编写display函数用于显示日期和时间。
    要求将Time类声明为Date类的友元类，
    通过Time类中的Display函数引用Date类对象的私有数据，
    输出年、月、日和时、分、秒
*/

#include <iostream>

using namespace std;

class Date;//************要记得先声明！！！*****************

class Time{
    private:
        int hour;
        int minute; 
        int second;

    public:
        Time(int hh,int mm,int ss):hour(hh),minute(mm),second(ss) {}
        void display(Date&);
};

/*补充Date类的定义，并声明友元类 */
class Date{
    private:
        int year;
        int month;
        int day;
        friend class Time;
    
    public:
        Date(int y, int m, int d):year(y), month(m), day(d) { }
};

/*添加display函数的定义 */
void Time::display(Date& d){
    cout << d.year << "/" << d.month << "/" << d.day << endl;
    cout << hour << ":" << minute << ":" << second << endl;
}

int main(){
    int year,month,day;
    cin >> year >> month >> day;

    Date d1(year,month,day);

    int hour,minute,second;
    cin >> hour >> minute >> second;

    Time t1(hour,minute,second);
    t1.display(d1);

    return 0;
}