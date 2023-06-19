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

int recursionMaxElement(Node *p)
{
    int x = 0;
    if(p == 0) {
        return INT_MIN;
    }
    else {
        x = recursionMaxElement(p->next);
        if(x > p->data) {
            return x;
        }
        else {
            return p->data;
        }
    }
}

int recursionMinElement(Node *p)
{
    int x = 0;
    if(p == NULL)
        return INT_MAX;
    x = recursionMinElement(p->next);
    return x<p->data?x:p->data;
}

int main()
{
    Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    cout<<"Max Element: "<<recursionMaxElement(first);
    cout<<endl;
    cout<<"Min Element: "<<recursionMinElement(first);
    return 0;
}