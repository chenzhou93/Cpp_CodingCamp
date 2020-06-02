/*
    乘法密码-加密
    题目描述

    E(m) = k*m mod 26 （明文 -> 密文）

    现给你一串明文，全部由大写字母组成，请加密成密文。

*/

#include <iostream>
using namespace std;

class PassWord {
    private:
    int k;

    public:
    PassWord(int);
    char convert(const char); // 解密函数
};

PassWord::PassWord(int n) : k(n) { }

char PassWord::convert(const char c){
    char res;
    if(c >= 'A' && c <= 'Z'){ 
        int m = c - 'A';
        int r = (m * k) % 26;      
        res = (char)'A' + r;
    }
    return res;
}

int main(){
    int k = 0, n = 0;
    cin >> k >> n;
    PassWord pwd(k);
    
    for(int i=0; i<n; i++){
        char ch;
        cin >> ch;
        cout << pwd.convert(ch);
    }
    cout << endl;
    return 0;
}