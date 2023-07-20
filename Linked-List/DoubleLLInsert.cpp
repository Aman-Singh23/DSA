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

int length(Node* p)
{
    int len;
    while(p!=NULL) {
        len++;
        p = p->next;
    }
    return len;
}

void insert(Node *p, int position, int element)
{
    Node *t;
    int i;

    if(position<0 || position>length(p)) {
        return;
    }

    if(position==0) {
        t = new Node;
        t->data = element;
        t->prev = NULL;
        head->prev = t;
        t->next = head;
        head = t;
    }
    else {
        t = new Node;
        t->data = element;
        for(int i=0; i<position-1; i++) {
            p=p->next;
        }
        t->next = p->next;
        t->prev = p;
        if(p->next) {
            p->next->prev = t;
        }
        p->next = t;
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    display(head);
    
    cout<<endl;
    
    insert(head, 3, 99);
    display(head);

    return 0;
}