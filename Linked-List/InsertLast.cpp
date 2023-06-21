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

void insertLast(Node *p, int element)
{
    Node *t = new Node;
    Node *last;
    t->data = element;
    t->next=NULL;

    if(first == NULL) {
        first = last = t;
    }
    else {
        last->next = t;
        last = t;
    }
}

int main()
{
    Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    display(first);
    cout<<endl;
    insertLast(first, 18);
    insertLast(first, 20);
    insertLast(first, 19);
    display(first);
    return 0;
}