#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

int main(){
    int m = 0, n = 0;
    double result;
    cin >> m >> n;
    cin >> result;
    if(m >= 0 && n>=0){
        if(m == 0 && n == 0){
            cout << (int)result << endl;
        }else{ 
            if(result < 0){
                result = -1 * result;
                cout << "-";
            }
            cout << setw(m) << setfill('0') << fixed << (int)result; 

            if(n != 0){
                cout << ".";
                double tmp = result - (int)result;

                stringstream ss;
                ss << fixed << setprecision(n+1) << tmp;
                string s = ss.str();
                for(int i=2; i<n+2; i++){
                    if(!s[i]){
                        cout << "0";
                    }else{
                        cout << s[i];
                    }
                }
            }
            cout << endl;
            //cout << setfill('0') << setw(m+n+1) << fixed << setprecision(n) << ret << endl; 
        }
    }
    return 0;
}