#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std; 

class Student
{
public:
    int id; 
    string name, grade;
    Student(){};
    Student(int id, string name, string grade);
    bool operator < (const Student & s) const;
};

istream & operator >> (istream & in, Student & s);
ostream & operator << (ostream & out, Student & s);

/*请在这里填充代码*/

Student::Student(int id, string name, string grade){
    this->id = id;
    this->name = name;
    this->grade = grade;
}

bool Student::operator < (const Student & s) const{
    return this->id < s.id;
}

istream & operator >> (istream & in, Student & s){
    in >> s.id >> s.name >> s.grade;
    return in;
}

ostream & operator << (ostream & out, Student & s){
    out << s.id << " "<< s.name << " " << s.grade;
    out << endl;
    return out;
}

int main()
{
    vector<Student> sv;
    Student temp;
    while (cin >> temp)
    {
        sv.push_back(temp);
    }
    sort(sv.begin(), sv.end());
    for (int i = 0; i < sv.size(); ++i)
        cout << sv[i];
    return 0;
}