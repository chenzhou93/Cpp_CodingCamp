#include <string>
#include <iostream>
using namespace std;
class Skill
{
protected:
    string skill_type;
public:
    Skill(string x = "default")
    {
        skill_type = x;
        cout << "construct Skill " << skill_type << endl;
    }
};
class Cpp : virtual public Skill
{
public:
    Cpp(string x = "cpp_default") : Skill(x)
    {
        cout << "construct Cpp " << skill_type << endl;
    }
};
class Python : virtual public Skill
{
public:
    Python(string x = "python_default") : Skill(x)
    {
        cout << "construct Python " << skill_type << endl;
    }
};
class Programmer : public Cpp, public Python
{
private:
    Skill skill;
    Cpp cpp;
    Python python;
public:
    Programmer(string a, string b, string c)
    :skill(a), python(c),cpp(b)
    {
        cout << "construct Programmer " << skill_type<< endl;
    }
};
int main()
{
    Programmer programmer("python", "cpp", "python");
    return 0;
}