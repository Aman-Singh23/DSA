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

void display(Node* p)
{
    if(p != NULL) {
        cout<<p->data<<" ";
        display(p->next);
    }
}

void ReverseDisplay(Node *p)
{
    if(p != NULL) {
        ReverseDisplay(p->next);
        cout<<p->data<<" ";
    }
}

int main()
{
    Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    display(first);
    cout<<endl;
    ReverseDisplay(first);
    return 0;
}