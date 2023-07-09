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

void recursiveDisplay(Node *p)
{
    static int flag=0;
    if(p!=head || flag==0) {
        flag=1;
        cout<<p->data<<" ";
        recursiveDisplay(p->next);
    }
    flag = 0;
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

int deleteCLL(Node *p, int index)
{
    Node *q;
    int i, delElement;

    if(index < 0 || index > length(head)) {
        return -1;
    }

    if(index == 1) {
        while(p->next != head) {
            p = p->next;
        }
        delElement = head->data;
        if(head == p) {
            free(head);
            head = NULL;
        }
        else {
            p->next = head->next;
            free(head);
            head=p->next;
        }
    }
    else {
        for(i=0; i<index-2; i++) {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        delElement = q->data;
        free(q);
    }
    return delElement;
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

    deleteCLL(head, 3);
    deleteCLL(head, 1);

    cout<<endl;
    recursiveDisplay(head);

    return 0;
}