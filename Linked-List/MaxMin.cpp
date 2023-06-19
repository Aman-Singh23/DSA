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

int maxElement(Node *p)
{
    int max = INT_MIN;

    while(p != NULL) {
        if(p->data > max) {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int minElement(Node *p)
{
    int min = INT_MAX;
    
    while(p != NULL) {
        if(p->data < min) {
            min = p->data;
        }
        p = p->next;
    }
    return min;
}

int main()
{
    Node *temp;
    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(A, 8);
    cout<<"Max Element: "<<maxElement(first);
    cout<<endl;
    cout<<"Min Element: "<<minElement(first);
    return 0;
}