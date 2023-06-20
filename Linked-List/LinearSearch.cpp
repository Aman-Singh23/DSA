#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
} *first = NULL;

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

Node * linearSearch(Node *p, int key)
{
    while(p != NULL) {
        if(key == p->data) {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

int main()
{
    Node *temp;
    int key = 8;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A,8);
    
    temp = linearSearch(first, key);
    if(temp) {
        cout<<"Key Is Found "<<temp->data;
    }
    else {
        cout<<"Key Not Found";
    }
    return 0;
}