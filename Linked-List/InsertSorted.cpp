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

void insertSorted(Node *p, int element)
{
    Node *t, *q = NULL;
    t = new Node;
    t->data = element;
    t->next = NULL;

    if(first == NULL) {
        first = t;
    }
    else {
        while(p && p->data < element) {
            q = p;
            p = p->next;
        }
        if(p == first){
            t->next = first;
            first = t;
        }
        else {
            t->next = q->next;
            q->next=t;
        }
    }
    
}

int main()
{
    Node *temp;
    
    // insert(first, 0, 3);
    // insert(first, 1, 5);
    // insert(first, 2, 6);
    // insert(first, 3, 9);
    // insert(first, 4, 11);

    insertSorted(first, 5);
    insertSorted(first, 4);
    insertSorted(first, 8);
    insertSorted(first, 7);

    display(first);
    return 0;
}