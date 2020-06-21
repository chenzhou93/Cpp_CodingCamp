#include <iostream>
#include <stdexcept>
#include <cmath>
#include <iomanip>
using namespace std;

double calArea(double a, double b, double c) throw (invalid_argument)
{

	if (a <= 0 || b <= 0 || c <= 0)
		throw invalid_argument("The input is illegal");
	if (a + b <= c || b + c <= a || c + a <= b)
		throw invalid_argument("The input is illegal");
	if (a != b && a != c && b != c)
		throw invalid_argument("The input is illegal");
	else
	{
		double p = (a + b + c) / 2;
		return  sqrt(p*(p - a)*(p - b)*(p - c));
	}
}

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    try{
        double area = calArea(a, b, c);
        cout << fixed << setprecision(2) << area << endl;
    }catch(exception& e){
        cout << e.what() << endl;
    }
}