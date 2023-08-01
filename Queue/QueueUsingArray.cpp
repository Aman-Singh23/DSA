#include<iostream>
using namespace std;

class Queue
{
    private:
        int size;
        int front;
        int Rear;
        int *Q;

    public:
        Queue()
        {
            size = 10;
            front = Rear = -1;
            Q = new int[size];
        }

        void enqueue(int x)
        {
            if(Rear == size - 1) {
                cout<<"Queue is Full";
            }
            else {
                Rear++;
                Q[Rear] = x;
            }
        }

        int dequeue()
        {
            int x = -1;

            if(front == Rear) {
                cout<<"Queue is Empty";
            }
            else {
                front++;
                x = Q[front];
            }
            return x;
        }

        void display()
        {
            for(int i=front+1; i<=Rear; i++) {
                cout<<Q[i]<<" ";
            }
        }

};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
    q.enqueue(1);

    q.dequeue();

    q.display();
    return 0;
}

