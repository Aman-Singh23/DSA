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

int length(Node *p)
{
    int len;
    while(p!=NULL) {
        p = p->next;
    } 
    return len;
}

int deleteDLL(Node *p, int index)
{
    int deletedElement;
    int i;

    if(index<0 || index>length(p)) {
        return -1;
    }

    if(index == 1) {
        head = head->next;
        if(head) {
            head->prev =NULL;
        }
        deletedElement = p->data;
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

    deleteDLL(head, 3);
    display(head);

    return 0;
}