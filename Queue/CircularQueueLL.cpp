#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
}*front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t;
    t = new Node;

    if(t == NULL) {
        cout<<"Queue is Full";
    }
    else {
        t->data = x;
        t->next = NULL;
        if(front == NULL) {
            front = rear = t;
        }
        else {
            rear->next = t;
            rear = t;
        }
    }
}

int dequeue()
{
    int x=-1;
    Node *t;

    if(front == NULL) {
        cout<<"Queue is Empty";
    }
    else {
        x = front->data;
        t = front;
        front = front->next;
        delete t;
    }
    return x;
}

void display()
{
    Node *p = front;
    while(p!=NULL) {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    
    display();
    
    cout<<dequeue();

    return 0;
}
