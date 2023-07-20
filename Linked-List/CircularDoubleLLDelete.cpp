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

int deleteCDLL(Node *p, int index)
{
    int deletedElement;
    int i;

    if(index<0 || index>length(p)) {
        return -1;
    }

    if(index == 1) {
        p->prev->next = p->next;
        p->next->prev = p->prev;
        deletedElement = p->data;
        head = p->next;
        free(p);
    }
    else {
        for(i=0; i<index-1;i++) {
            p = p->next;
        }
        p->prev->next = p->next;
        if(p->next) {
            p->next->prev = p->prev;
        }
        deletedElement = p->data;
        delete p;
    }
    return deletedElement;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    display(head);
    
    cout<<endl;

    deleteCDLL(head, 3);
    display(head);
    return 0;
}