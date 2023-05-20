#include<iostream>
using namespace std;

void display(int* A, int length)
{
    for(int i=0; i<length; i++) {
        cout<<A[i]<<" ";
    }
}

void add(int* A, int& length, int newElement)
{
    A[length++] = newElement;
}

void insert(int* A, int& length, int pos, int element)
{
    for(int i=length-1; i>=pos; i--) {
        A[i] = A[i+1];
    }
    A[pos] = element;
    length++;
}

int main()
{
    int size = 10;
    int length = 3;
    int newElement = 4;
    int element = 15;
    int* A = new int[length];
    
    for(int i=0; i<length; i++) {
        A[i] = i+1;
    }

    add(A, length, newElement);
    insert(A, length, 1, element);
    display(A, length);

    delete []A;
    return 0;
}