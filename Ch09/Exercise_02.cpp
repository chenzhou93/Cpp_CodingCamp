#include <iostream>
using namespace std;

template <typename T>
struct Node{
    public:
    T data;
    Node<T>* next;
    Node(){}
};

template <typename T>
class MyLinkedList{
    
    public:
    Node<T>* head;
    Node<T>* tail;

    MyLinkedList(){
        head = NULL;
        tail = NULL;
    }
    ~MyLinkedList();
    void push(T e);
    void reverse();
    void print();
};

template <typename T>
MyLinkedList<T>::~MyLinkedList(){
    Node<T>* p = head;
    while(p){
        Node<T>* m = p;
        p = p->next;
        delete m;
    }
}

template <typename T>
void MyLinkedList<T>::push(T e){
    Node<T>* p = new Node<T>();
    p->data = e;
    if(head == NULL){
        head = p;
        tail = p;
    }else{
        tail->next = p;
        tail = p;
        tail->next = NULL;
    }
}

template <typename T>
void MyLinkedList<T>::reverse(){
    if(head == tail){
        head = tail;
        head->next = NULL;
        tail->next = NULL;
    }else{
        Node<T>* prev = head;
        Node<T>* cur = head->next;
        Node<T>* tmp = head->next->next;
        while(cur){
            tmp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = tmp;
        }
        head->next = NULL;
        head = tail;
    }
    
}

template <typename T>
void MyLinkedList<T>::print(){
    Node<T>* cur = head;
    while(cur != NULL){
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main(){
    MyLinkedList<int> ll;
   
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;
    
    if(num1 > 0 && num2 > 0){
        for(int i=0; i<num1; i++){
            int n;
            cin >> n;
            ll.push(n);
        }

        MyLinkedList<double> dll;
        for(int j=0; j<num2; j++){
            double num;
            cin >> num;
            dll.push(num);
        }

        ll.print();
        ll.reverse();
        ll.print();

        dll.print();
        dll.reverse();
        dll.print();
    }
    
    return 0;
}