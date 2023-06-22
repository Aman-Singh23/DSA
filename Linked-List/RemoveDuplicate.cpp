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

void removeDuplicate(Node *p)
{
    Node *q = p->next;
    while(q != NULL) {
        if(p->data != q->data) {
            p = q;
            q = q->next;
        }
        else {
            p->next = q->next;
            delete q;
            q = p->next;

        }
    }
}

int main()
{
    Node *temp;
    int A[] = {3, 5, 5, 8, 8, 8};
    create(A, 6);
    display(first);
    cout<<endl;
    removeDuplicate(first);
    display(first);

    return 0;
}