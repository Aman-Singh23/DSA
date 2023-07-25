#include<iostream>
using namespace std;

class Node
{
    public:
        char data;
        Node *next;
};

class Stack
{
    private:
        Node *top;
    public:
        Stack()
        {
            top = NULL;
        }

        void push(char element)
        {
            Node *t = new Node;
            if(t == NULL) {
                cout<<"Stack Overflow";
            }
            else {
                t->data = element;
                t->next = top;
                top = t;
            }
        }

        char pop()
        {
            Node *p;
            char deleteElement = -1;

            if(top == NULL) {
                cout<<"Stack Underflow\n";
            }
            else {
                p = top;
                deleteElement = p->data;
                top = top->next;
                delete p;
            }
            return deleteElement;
        }

        int peek(int position)
        {
            Node *p = top;
            for(int i=0; p!=NULL && i<position-1; i++) {
                p  = p -> next;
            }
            if(p!=NULL) {
                return p->data;
            }
            else {
                return -1;
            }
        }

        int stackTop()
        {
            if(top != NULL) {
                return top->data;
            }
            else {
                return -1;
            }
        }

        int isEmpty()
        {
            return top ? 0 : 1;
        }

        int isFull()
        {
            Node *t = new Node;
            int r = t?1:0;
            delete t;
            return r;
        }

        void display()
        {
            Node *p = top;
            while(p!=NULL) {
                cout<<p->data<<endl;
                p = p->next;
            }
            cout<<endl;
        }

        int isBalance(char *exp)
        {
            for(int i=0; exp[i]!='\0'; i++) {
                if(exp[i] == '(') {
                    push(exp[i]);
                }
                else if(exp[i] == ')') {
                    if(isEmpty()) {
                        return 0;
                    }
                    pop();
                }
            }
            if(isEmpty()) {
                return 1;
            }
            else {
                return 0;
            }
        }
};

int main()
{
    Stack st;
    
    char *exp = "((a+b)*(c-d))";
    // cout<<"Match: "<<st.isBalance(exp);
    if(st.isBalance(exp)) {
        cout<<"Parenthesis is Balanced";
    }
    else {
        cout<<"Parenthesis is not Balanced";
    }

    return 0;
}