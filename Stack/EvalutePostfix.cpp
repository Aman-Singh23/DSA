#include<iostream>
#include<cstring>

using namespace std;

class Node
{
    public:
        char data;
        Node *next;
}*top=NULL;

int push(int x)
{
    Node *t;
    t = new Node;

    if(t == NULL) {
        cout<<"Stack is full\n";
    }
    else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop()
{
    Node *t;
    int x = -1;

    if(top == NULL) {
        cout<<"Stack is Empty\n";
    }
    else {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }

    return x;
}

void Display()
{
    Node *p;
    p = top;
    while(p!=NULL) {
        cout<<p->data;
        p = p->next;
    }
    cout<<endl;
}

int isOperand(char x)
{
    if(x == '+' || x == '-' || x == '*' || x == '/') 
        return 0;
    else
        return 1;
}

int pre(char x)
{
    if(x == '+' || x == '-')
        return 1;
    else if(x == '*' || x == '/')
        return 2;
    else
        return 0;
}

int Eval(char *postfix)
{
    int i=0;
    int x1, x2, r=0;

    for(i=0; postfix[i]!='\0'; i++) {
        if(isOperand(postfix[i])) {
            push(postfix[i] - '0');
        }
        else {
            x2 = pop();
            x1 = pop();

            switch(postfix[i])
            {
                case '+' : r = x1 + x2; break;
                case '-' : r = x1 - x2; break;
                case '*' : r = x1 * x2; break;
                case '/' : r = x1 / x2; break;
            }
            push(r);
        }
    }
    return top->data;
}

int main()
{
    char *postfix = "234*+82/-";

    cout<<"Result: "<<Eval(postfix);

    return 0;
}