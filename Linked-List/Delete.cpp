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

int  Delete(Node *p, int position)
{
    Node *q = NULL;
    int deletedElement = -1;
    if(position == 1) {
        deletedElement = p->data;
        first = p->next;
        delete p;
    }
    else {
        for(int i=0; i<position-1 && p; i++) {
            q = p;
            p = p->next;
        }
        if(p) {
            deletedElement = p->data;
            q->next = p->next;
            delete p;
        }
    }
    return deletedElement;
}

int main()
{
    Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    display(first);
    cout<<"\nDeleted Element: "<<Delete(first, 5)<<endl;
    display(first);
    return 0;
}