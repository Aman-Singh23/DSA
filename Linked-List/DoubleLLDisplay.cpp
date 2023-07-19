#include<iostream>
using namespace std;

class Node
{
    public:
        Node *prev;
        int data;
        Node *next;
}*head = NULL;

void create(int A[], int n)
{
    Node *t, *last;
    int i;

    head = new Node;
    head->data = A[0];
    head->prev = head->next = NULL;
    last = head;

    for(i=1; i<n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next =t;
        last = t;
    }
}

void display(Node *p)
{
 while(p!=NULL) {
    cout<<p->data<<" ";
    p = p->next;
 }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);

    display(head);

    return 0;
}