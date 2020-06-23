#include <iostream>
using namespace std;
class Integer {
    public:
        int num;
        Integer(int);
        Integer multiply(Integer &);
        friend ostream& operator<< (ostream& os, Integer& number);
};

Integer::Integer(int number){
    num = number;
}

Integer Integer::multiply(Integer& integer){
    long long c = num * integer.num;

    int sum = 0;
    Integer res(0);
    while(c>0){
        sum += (c%10);
        c = c/10;
    }

    int tmp = sum;
    int sum1 = 0;
    while(1){
        if(tmp < 10){
            res.num = tmp;
            return res;
        }else{
            while(tmp>0){
                sum1 += tmp%10;
                tmp = tmp/10;
            }
            tmp = sum1;
            sum1 = 0;
        }
    }
}

ostream& operator<< (ostream& os, Integer& number){
    os << number.num;
    return os;
}

int main(){
    int num = 0;
    cin >> num;
    for(int i=0; i<num; i++){
        int a, b;
        cin >> a >> b;
        Integer a1(a);
        Integer b1(b);
        Integer res = a1.multiply(b1);
        cout << res << endl;
    }
    return 0;
}