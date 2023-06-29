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

int isLoop(Node *p)
{
    Node *x = NULL, *y = NULL;
    x = y = p;
    
    do {
        x = x->next;
        y = y->next;
        y = y!=NULL?y->next:NULL;    
    }
    while (x!=NULL && y!=NULL && x!=y);
    
    return x==y?true:false;
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
    Node *t1, *t2;
    int A[] = {1 ,7, 10, 14};
    create(A, 4);
    
    display(first);
    cout<<endl;
    
    t1 = first->next;
    t2 = first->next->next->next;
    t2->next = t1;

    if(isLoop(first)) {
        cout<<"Loop";
    }
    else {
        cout<<"Linear";
    }
    return 0;
}
