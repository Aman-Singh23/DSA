#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
}*first = NULL;

void display(Node *p)
{
    while(p != NULL) {
        cout<<p->data<<" ";
        p = p->next;
    }
}

void insert(Node *p, int position, int element)
{
    Node *t, *x;
    if(position == 0) {
        t = new Node;
        t->data = element;
        t->next = first;
        first = t;
    }
    else if(position > 0) {
        for(int i=0; i<position-1 && p; i++) {
            p = p->next;
        }
        if(p) {
            t = new Node;
            t->data = element;
            t->next = p->next;
            p->next = t;
        }
    }
}

int main()
{
    Node *temp;
    insert(first, 0, 12);
    insert(first, 1, 11);
    insert(first, 2, 13);
    insert(first, 0, 15);
    display(first);
    return 0;
}