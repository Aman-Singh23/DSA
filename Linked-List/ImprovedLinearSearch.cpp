#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
} *first = NULL;

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

Node * linearSearch(Node *p, int key)
{
    Node *q = NULL;
    while(p != NULL) {
        if(key == p->data) {
            q->next = p->next;
            p->next = first;
            first = p;
        }
        q = p;
        p = p->next;
    }
}

void display(Node *p)
{
    while(p != NULL) {
        cout<<p->data<<" ";
        p = p->next;
    }
}

int main()
{
    Node *temp;
    int key = 25;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A,8);
    linearSearch(first, key);
    display(first);
    return 0;
}