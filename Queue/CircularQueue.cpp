#include<iostream>
using namespace std;

class Queue
{
    private:
        int size;
        int front;
        int rear;
        int *Q;

    public:
        Queue()
        {
            size = 5;
            front = rear = 0;
            Q = new int[size];
        }

        void enqueue(int x)
        {
            if((rear+1)%size == front) {
                cout<<"Queue is Full\n";
            }
            else {
                rear = (rear + 1) % size;
                Q[rear] = x;
            }
        }

        int dequeue()
        {
            int x = -1;
            if(front == rear) {
                cout<<"queue is Empty\n";
            }
            else {
                front = (front + 1)%size;
                x = Q[front];
            }
            return x;
        }

        void display()
        {
            for(int i=front+1; i<=rear; i++) {
                cout<<Q[i]<<" ";
            }
            cout<<endl;
        }

};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
    q.enqueue(1);

    q.display();


    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.display();

    q.enqueue(11);
    q.enqueue(12);

    q.display();

    return 0;
}

