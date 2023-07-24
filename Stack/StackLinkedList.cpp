#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
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

        void push(int element)
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

        int pop()
        {
            Node *p;
            int deleteElement = -1;

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
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.display();

    cout<<"Deleted Element: "<<st.pop();
    cout<<"\nPeek: "<<st.peek(3);
    cout<<"\nTop Element: "<<st.stackTop();
    
    if(st.isEmpty()) {
        cout<<"\nStack is Empty";
    }
    else {
        cout<<"\nStack is not Empty";
    }

    return 0;
}