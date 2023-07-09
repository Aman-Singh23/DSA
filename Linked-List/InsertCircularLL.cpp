#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
}*head;

void create(int A[], int n)
{
    int i;
    Node *t, *last;
    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for(i=1; i<n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

int length(Node *p) 
{
    int len=0;
    do {
        len++;
        p = p->next;
    }
    while(p!=head);

    return len;
}

void display(Node *p)
{
    do {
        cout<<p->data<<" ";
        p = p->next;
    }
    while(p!=head);
}

void insert(Node *p, int element, int index)
{
    Node *t;
    int i;
    
    if(index < 0 || index > length(p)) {
        return;
    }

    if(index == 0) {
        t = new Node;
        t->data = element;
        if(head == NULL) {
            head = t;
            head->next = head;
        }
        else {
            while(p->next != head) {
                p = p->next;
            }
            p->next = t;
            t->next = head;
            head = t;
        }
    }
    else {
        for(i=0; i<index-1; i++) {
            p = p->next;
        }
        t = new Node;
        t->data = element;
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
    int A[] = {1, 12, 23, 35};
    create(A, 4);
    display(head);
    cout<<endl;

    insert(head, 14, 0);
    display(head);
    cout<<endl;

    insert(head, 29, 2);
    display(head);

    return 0;
}