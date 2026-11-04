#include <iostream>
using namespace std;
#define ll long long
class stack {
public:
    int size=0;
    int top=-1;
    int *s=nullptr;
};

void push(stack*st,int x) {
    if (st->top==st->size-1) {
        cout<<"stack overflow"<<endl;
        return;
    }
    st->top++;
    st->s[st->top]=x;
}

int pop(stack*st) {
    int x=-1;
    if (st->top==-1) {
        cout<<"stack underflow"<<endl;
    }
    else {
        x=st->s[st->top];
        st->top--;
    }
    return x;
}

int peek(stack st,int pos) {
    if (st.top==-1||st.top-pos+1<0) {
        return -1;
    }
    return st.s[st.top-pos+1];
}

int stack_top(stack st) {
    if (st.top==-1) {
        return -1;
    }
    return st.s[st.top];
}

int isEmpty(stack st) {
    if (st.top==-1) {
        return 1;
    }
    return 0;
}

int isFull(stack st) {
    if (st.top==st.size-1) {
        return 1;
    }
    return 0;
}

int main() {
    stack st;
    cout<<"Enter size of stack: ";
    cin>>st.size;
    st.s = new int[st.size];
    cout<<"Enter the values for pushing: ";
    int value;
    for (int i=0;i<st.size;i++) {
        cin>>value;
        push(&st,value);
    }
    cout<<"Enter the position: ";
    int pos; cin>>pos;
    cout<<"the element in this position is:"<<peek(st,pos)<<endl;

    cout<<"the deleted element:" <<pop(&st)<<endl;

    if (isEmpty(st)) {
        cout<<"Stack is empty"<<endl;
    }
    else {
        cout<<"Stack is not empty"<<endl;
    }
    if (isFull(st)) {
        cout<<"Stack is full"<<endl;
    }
    else {
        cout<<"Stack is not full"<<endl;
    }
    return 0;
}

