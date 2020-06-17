#include <iostream>
#include <string>
#include <stack>

using namespace std;

int isValid(string s){
    int n = s.size();
    stack<char> myStack;
    if(n == 0){
        return 1;
    }
    for(int i=0; i<n; i++){
        if(s[i] == '(' || s[i] == '{'|| s[i] == '['){
            myStack.push(s[i]);
        }else if(s[i] == ')' || s[i] == '}'|| s[i] == ']'){
            if(s[i] == ')' && myStack.top() != '('){
                return 0;
            }
            if(s[i] == ']' && myStack.top() != '['){
                return 0;
            }
            if(s[i] == '}' && myStack.top() != '{'){
                return 0;
            }
            myStack.pop();
        }
    }
    if(myStack.empty()){
        return 1;
    }
    return 0;
}

int main(){

    string input;
    cin >> input;
    cout << isValid(input) << endl;

    return 0;
}