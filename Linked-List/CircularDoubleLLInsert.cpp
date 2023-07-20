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
    head->prev = last;
    last->next = head;
}

void display(Node *p)
{
    do {
        cout<<p->data<<" ";
        p = p->next;
    }
    while(p!=head);
}

int length(Node *p)
{
    int len = 0;
    do {
        len++;
        p = p->next;
    }
    while(p!=head);
    return len;
}

void insert(Node *p, int index, int element)
{
    Node *t;
    int i;

    if(index<0 || index>length(p)) {
        return;
    }

    if(index==0) {
        t = new Node;
        t->data = element;
        if(head == NULL) {
            head = t;
            head->next = head ->prev = head;
        }
        else {
            while(p->next != head) {
                p = p->next;
            }
            t->next = head;
            t->prev = p;
            head->prev = t;
            p->next = t;
            head = t;
        }
    }
    else {
        t = new Node;
        t->data = element;
        for(int i=0; i<index-2; i++) {
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
    int A[] = {10, 20, 30, 40, 50, 60};
    create(A, 6);
    display(head);
    cout<<"\nLength: "<<length(head);

    cout<<endl;

    insert(head, 0, 99);
    display(head);

    return 0;
}