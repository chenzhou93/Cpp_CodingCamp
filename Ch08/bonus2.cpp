#include <iostream>

class Book {
public:
    virtual void print() const { std::cout << "print\n"; }
    virtual void cut() const { std::cout << "cut\n"; }
    virtual void bind() const { std::cout << "bind\n"; }
};

class GoldenAge : public Book {
public:
    void print() const { std::cout << "Song\n"; }
    void cut() const { std::cout << 32 << '\n'; }
    void bind() const { std::cout << "Paperback\n"; }
};

class LaborEconomics : public Book {
public:
    void print()const { std::cout << "Hei\n"; }
    void cut()const { std::cout << 28 << '\n'; }
    void bind()const { std::cout << "Paperback\n"; }
};

class WhiteNight : public Book {
public:
    void print()const { std::cout << "Kai\n"; }
    void cut()const { std::cout << 32 << '\n'; }
    void bind()const { std::cout << "Hardback\n"; }
};

class ParseBook {
public:
    static void parse (const Book& book) { book.print(); book.cut(); book.bind(); }
};
void case0() {
    GoldenAge a;
    ParseBook::parse(a);
}

void case1() {
    LaborEconomics a;
    ParseBook::parse(a);
}

void case2() {
    WhiteNight a;
    ParseBook::parse(a);
}

void case3() {
    Book* a = new GoldenAge();
    ParseBook::parse(*a);
}

void case4() {
    Book* a = new Book();
    ParseBook::parse(*a);
    delete a;
    a = new GoldenAge();
    ParseBook::parse(*a);
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
        default:
            break;
    }
}