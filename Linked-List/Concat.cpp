#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
}*first = NULL, *second = NULL, *third = NULL;

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

void create2(int B[], int n)
{
    int i;
    Node *t, *last;
    second = new Node;
    second->data = B[0];
    second->next = NULL;
    last = second;

    for(i=1; i<n; i++) {
        t = new Node;
        t->data = B[i];
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

void concat(Node *p, Node *q)
{
    third = p;
    while(p->next != NULL) {
        p = p->next;
    }
    p->next = q;
    second = NULL;
}

int main()
{
    int A[] = {1 ,7, 10, 14};
    int B[] = {2, 4, 9, 13};
    create(A, 4);
    create2(B, 4);

    display(first);
    cout<<endl;
    display(second);
    cout<<endl;
    concat(first, second);
    display(third);
    cout<<endl;
    display(second);
    return 0;
}