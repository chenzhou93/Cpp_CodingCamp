#include <iostream>
#include <string>
using namespace std;

template<class T, int MAX = 1000>
class Stack
{
private:
    T list[MAX + 1];
    int top;
public:
    Stack();
    void push(const T &item);//将item压栈
    T pop();//将栈顶元素弹出栈
    const T & peek() const;//访问栈顶元素
    bool isEmpty() const;//判断是否栈空
};

template<class T, int MAX>
Stack<T, MAX>::Stack(){
    top = -1;
}

template<class T, int MAX>
void Stack<T, MAX>::push(const T &item){
    if(top < MAX){
        top++;
        list[top] = item;
    }
}

template<class T, int MAX>
T Stack<T, MAX>::pop(){
    T res;
    if(top>-1){
        res = list[top];
        top--;
    }
    return res;
}

template<class T, int MAX>
const T & Stack<T, MAX>::peek() const{
    if(top < MAX && top > -1){
        return list[top];
    }
}

template<class T, int MAX>
bool Stack<T, MAX>::isEmpty() const{
    return top == -1;
}

int main(){
    string s;
    string res;
    Stack<char> stack;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            stack.push(s[i]);
        }else if(s[i] == ')'){
            if(stack.isEmpty()){
                cout << "No" << endl;
                return 0;
            }else{
                stack.pop();
            }
        }
    }
    if(stack.isEmpty()){
        cout << "Yes" << endl; 
    }else{
        cout << "No" << endl;
    }
    return 0;
}


