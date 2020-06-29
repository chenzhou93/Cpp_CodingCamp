#include <iostream>

class Singleton {
protected:
    Singleton() {}
private:
    static int num;
    static Singleton* _instance;
public:
    int test;
    ~Singleton();
    static Singleton* instance();
};

// /*YOUR CODES*/
Singleton* Singleton::_instance = 0;
int Singleton::num = 0;

Singleton::~Singleton() {
    std::cout << num << std::endl;
    if(_instance != 0){
        delete _instance;
        _instance = 0;
    }
}

Singleton* Singleton::instance() {
    num++;
    if(_instance == 0){
        Singleton* s = new Singleton();
        return s;
    }
    return _instance;
}
void case0() {
    Singleton* single = Singleton::instance();
    delete single;
}

void case1() {
    Singleton* single = Singleton::instance();
    delete single;
    single = Singleton::instance();
    delete single;
    single = Singleton::instance();
    delete single;
}

void case2() {
    Singleton* single = Singleton::instance();
    single = Singleton::instance();
    delete single;
}

void case3() {
    Singleton* single0 = Singleton::instance();
    Singleton* single1 = Singleton::instance();
    single0->test = 10;
    std::cout << (single1->test == 10) << '\n';
    delete single0;
}

void case4() {
    Singleton* s = Singleton::instance();
    for (int i = 0; i < 999999; i++)
        Singleton* single0 = Singleton::instance();
    delete s;
}

void case5() {
    Singleton* s0 = Singleton::instance();
    Singleton* s1 = Singleton::instance();
    s0->test = 1;
    s0->test += s1->test;
    std::cout << (Singleton::instance()->test == 2) << '\n';
    delete s0;
}

void case6() {
    Singleton* s = Singleton::instance();
    for (int i = 0; i < 0; i++)
        Singleton* single0 = Singleton::instance();
    delete s;
}

void case7() {
    Singleton* s0 = Singleton::instance();
    Singleton* s1 = Singleton::instance();
    s0->test = 2;
    s0->test += s1->test;
    std::cout << Singleton::instance()->test << '\n';
    delete s0;
}

void case8() {
    Singleton* s0 = Singleton::instance();
    Singleton* s1 = Singleton::instance();
    std::cout << (s0 == s1) << '\n';
    delete s0;
}

void case9() {
    Singleton* s0 = Singleton::instance();
    delete s0;
    Singleton* s1 = Singleton::instance();
    s0 = Singleton::instance();
    std::cout << (s0 == s1) << '\n';
    delete s1;
}

int main() {
    int kind;
    std::cin >> kind;
    switch (kind) {
        case 0:
            case0();
            break;
        case 1:
            case1();
            break;
        case 2:
            case2();
            break;
        case 3:
            case3();
            break;
        case 4:
            case4();
            break;
        case 5:
            case5();
            break;
        case 6:
            case6();
            break;
        case 7:
            case7();
            break;
        case 8:
            case8();
            break;
        case 9:
            case9();
            break;
        default:
            break;
    }
}