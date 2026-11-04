#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Node {
public:
    int data;
    Node* next;
}*top=nullptr;

void push(int val) {
    Node* temp = new Node();
    if (temp==nullptr) {
        cout<<"Stack Overflow"<<endl;
        return;}
    temp->data=val;
    temp->next=top;
    top=temp;
}

void pop() {
    if (top==nullptr) {
        cout<<"Stack Underflow"<<endl;
        return;
    }
    Node*p=top;
    top=top->next;
    delete p;
}

int peek(int pos) {
    Node* p=top;
    for (int i=0;i<pos-1&&p!=nullptr;i++) {
        p=p->next;
    }
    if (p!=nullptr) return p->data;
    return -1;
}

int stacktop() {
    if (top==nullptr) return -1;
    return top->data;

}

bool isempty() {
    if (top==nullptr) return true;
    return false;
}

bool isfull() {
    Node* t=new Node();
    if (t==nullptr) return true;
    delete t;
    return false;
}

int main() {
    cout<<"Enter the values for pushing: ";
    int value;
    while(cin>>value&&value!=-1) {
        push(value);
    }
    cout<<"Enter the position: ";
    int pos; cin>>pos;
    cout<<"the element in this position is:"<<peek(pos)<<endl;

    pop();
        cout<<"The top element is:"<<stacktop()<<endl;

    if (isempty()) {
        cout<<"Stack is empty"<<endl;
    }
    else {
        cout<<"Stack is not empty"<<endl;
    }
    if (isfull()) {
        cout<<"Stack is full"<<endl;
    }
    else {
        cout<<"Stack is not full"<<endl;
    }



    return 0;
}
