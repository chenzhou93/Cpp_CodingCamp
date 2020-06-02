/*
    Excel编号转换-I
    题目描述

    Excel中列的编号都是由A-Z组成，比如A, AE等。
    给定一个Excel中的列编号，请转化为数字编号。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s;
    while(cin>>s)
    {
        int sum=0;
        for(int i=s.size()-1, j=0; i>=0; i--,j++){
            sum += pow(26, j) * (s[i] - 'A' + 1);
        }
        cout<<sum<<endl;
    }
    return 0;
}