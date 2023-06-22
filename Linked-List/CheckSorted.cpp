#include<iostream>
#include<limits.h>

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

bool checkSorted(Node *p)
{
    int x = INT_MIN;
    while(p != NULL) {
        if(x > p->data) {
            return false;
        }
        x = p->data;
        p = p->next;
    }
    return true;
}

int main()
{
    Node *temp;
    int A[] = {3, 5, 7, 10, 25, 32};
    create(A, 6);
    
    if(checkSorted(first)) {
        cout<<"Sorted";
    }
    else {
        cout<<"Not Sorted";
    }

    return 0;
}