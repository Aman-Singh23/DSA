#include<iostream>
using namespace std;

class Stack
{
    public:
        int size;
        int Top;
        int *s;
};

void create(Stack *st)
{
    // cout<<"Enter Stack size";
    // cin>>st.size;
    st->size = 5;
    st->s = new int[st->size];
    st->Top = -1;
}

void push(Stack *st, int element)
{
    if(st->Top == st->size-1) {
        cout<<"Stack Overflow";
    }
    else {
        st->Top++;
        st->s[st->Top] = element;
    }
}

int pop(Stack *st)
{
    int deletedElement = -1;
    if(st->Top == -1) {
        cout<<"Stack Underflow";
    }
    else {
        deletedElement = st->s[st->Top];
        st->Top--;
    }
    return deletedElement;
}

int peek(Stack st, int position)
{
    int element = -1;
    if(st.Top - position + 1 < 0) {
        cout<<"Invalid Position";
    }
    else {
        element = st.s[st.Top-position+1];
    }
    return element;
}

int stackTop(Stack st)
{
    if(st.Top == -1) {
        return -1;
    }
    else {
        return st.s[st.Top];
    }
}

int isEmpty(Stack st)
{
    if(st.Top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

int isFull(Stack st)
{
    if(st.Top == st.size-1) {
        return 1;
    }
    else {
        return 0;
    }
}

void display(Stack st)
{
    for(int i=st.Top; i>=0; i--) {
        cout<<st.s[i]<<endl;
    }
    cout<<endl;
}

int main()
{
    Stack st;
    // cout<<"Enter Stack size";
    // cin>>st.size;
    // st.size = 5;
    // st.s = new int[st.size];
    // st.Top = -1;

    create(&st);

    push(&st, 2);
    push(&st, 5);
    push(&st, 9);
    push(&st, 4);
    push(&st, 6);

    display(st);

    pop(&st);

    display(st);

    cout<<"\nPeek: "<<peek(st, 2);

    cout<<"\nTop element: "<<stackTop(st);

    cout<<"\nisEmpty: "<<isEmpty(st);

    // cout<<"\nisFull: "<<isFull(st);

    if(isFull(st)) {
        cout<<"\nStack is Full";
    }
    else {
        cout<<"\nStack is not Full";
    }
    return 0;
}