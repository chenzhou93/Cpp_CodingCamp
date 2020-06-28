#include <iostream>
#include <string>
#include <cmath>
class SalesItem {
// private members
private:
    std::string bookNo;
    unsigned unitsSold;
    double revenue;

    friend std::istream& operator >> (std::istream&, SalesItem&);
    friend std::ostream& operator << (std::ostream&, const SalesItem&);
    friend bool operator == (const SalesItem&, const SalesItem&);
public:
    SalesItem() : unitsSold(0), revenue(0) {};
    SalesItem& operator += (const SalesItem&);
    std::string isbn() const;
};

std::istream& operator >> (std::istream& in, SalesItem& s) {
    double price;
    in >> s.bookNo >> s.unitsSold >> price;
    s.revenue = s.unitsSold * price;
    return in;
}

std::ostream& operator << (std::ostream& os, const SalesItem& s) {
    os << s.bookNo << " " << s.unitsSold << " " << s.revenue << std::endl;
    return os;
}

bool operator == (const SalesItem& s1, const SalesItem& s2) {
    return ((s1.bookNo == s2.bookNo) && (s1.unitsSold == s2.unitsSold) && (abs(s1.revenue - s2.revenue) < 1e-6));
}

SalesItem& SalesItem::operator+= (const SalesItem& rhs) {
    if(this->bookNo == rhs.bookNo){
        this->unitsSold += rhs.unitsSold;
        this->revenue += rhs.revenue;
    }
    return *this;
}   

std::string SalesItem::isbn() const {
    return bookNo;
}

void case0() {
    SalesItem item1, item2;
    std::cin >> item1;
    std::cout << item1;
}

void case1() {
    SalesItem item1, item2;
    std::cin >> item1 >> item2;
    std::cout << (item1 == item2) << '\n';
}

void case2() {
    SalesItem item1, item2, item3;
    std::cin >> item1 >> item2 >> item3;
    item1 += item2;
    std::cout << item1 << item3 << (item1 == item3) << '\n';
}

int main() {
    int n;
    std::cin >> n;
    switch (n) {
            case (0):
            case0(); 
        break;
            case (1):
            case1();
        break;
            case (2): 
            case2();
        break;
    }
}