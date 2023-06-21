#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
}*first = NULL;

void create(int A[], int n)
{
    int i;
    Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

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
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    display(first);
    cout<<endl;
    insert(first, 8, 12);
    insert(first, 0, 11);
    insert(first, 5, 13);
    display(first);
    return 0;
}