/*
    移位密码-解密
    题目描述

    已知加密过程为：将每个字母按照字母表的顺序右移k位。加密函数：E(m)=(m+k)%26. （明文 -> 密文）

    现给你一串密文，全部由大写字母组成。请破译出明文！（密文 -> 明文）
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
        if(c - 'A' - k >= 0){
            res = (char) c - k;
        }else{
            res = (char)((c + 26 - k));
        }
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