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
    for(int i=length; i>pos; i--) {
        A[i] = A[i-1];
    }
    A[pos] = element;
    length++;
}

void deleteElement(int* A, int& length, int pos)
{
    for(int i=pos; i<length-1; i++) {
        A[i] = A[i+1];
    }
    length--;
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
    display(A, length);
    cout<<endl;
    add(A, length, newElement);
    display(A, length);
    cout<<endl;
    insert(A, length, 2, element);
    display(A, length);
    cout<<endl;
    deleteElement(A, length, 2);
    display(A, length);
    cout<<endl;

    delete []A;
    return 0;
}