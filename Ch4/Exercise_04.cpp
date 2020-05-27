/*
    乘法密码-解密
    题目描述

    E(m) = k*m mod 26 （明文 -> 密文）

    现给你一串密文，全部由大写字母组成，请破译出明文。（密文 -> 明文）

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
        int q=0;
        int r = 0;
        for(r=0; r<26; r++){
            int a = r%26;
            int c = (a*k) % 26;
            if(c-m==0){
                break;
            }
        }  
        res = (char)r + 'A';
    }
    return res;
}

int main(){
    int k = 0, n = 0;
    cin >> k >> n;
    
    if(k < 26){
        PassWord pwd(k);
        for(int i=0; i<n; i++){
            char ch;
            cin >> ch;
            cout << pwd.convert(ch);
        }
        cout << endl;
    }
    
    return 0;
}