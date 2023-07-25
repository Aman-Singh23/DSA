#include<iostream>
#include<cstring>
using namespace std;

class Stack
{
    public:
        int size;
        int Top;
        char *s;
};

void create(Stack *st)
{
    // cout<<"Enter Stack size";
    // cin>>st.size;
    st->size = strlen(exp);
    st->s = new int[st->size];
    st->Top = -1;
}

void push(Stack *st, char *element)
{
    if(st->Top == st->size-1) {
        cout<<"Stack Overflow";
    }
    else {
        st->Top++;
        st->s[st->Top] = element;
    }
}

char pop(Stack *st)
{
    char deletedElement = -1;
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

int isBalance(Stack *st, char *exp)
{
    for(int i=0; exp[i]!='\0', i++) {
        if(exp[i] == '(') {
            push(&st, exp[i])
        }
    }
}

int main()
{
    Stack st;
    create(&st);

    char *exp = "((a+b)*(c-d))";


    return 0;
}