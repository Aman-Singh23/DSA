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

void Linearsearch(int* A, int& length, int key)
{
    for(int i=0; i<length; i++) {
        if(key == A[i]) {
            cout<<"Key element is at Index "<<i<<endl;
            break;
        }
    }
}

void BinarySearch(int* A, int& length, int key)
{
    int l = 0;
    int h = length-1;

    while(l <= h) {
        int mid = (l + h)/2;
        if(key == A[mid]) {
            cout<<"Key element is at Index "<<mid<<endl;
            break;
        }
        else if(key > A[mid]) {
            l = mid + 1;
        }
        else {
            h = mid - 1;
        }
    }
}

int getElement(int* A, int pos)
{
    return A[pos];
}

int main()
{
    int size = 10;
    int length = 3;
    int newElement = 4;
    int element = 15;
    int key = 4;
    int pos = 2;

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
    Linearsearch(A, length, key);
    BinarySearch(A, length, key);
    int getElem = getElement(A, pos);
    cout<<getElem<<endl;


    delete []A;
    return 0;
}