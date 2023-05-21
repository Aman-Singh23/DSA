#include<iostream>
#include<limits.h>
using namespace std;

void display(int* A, int length)
{
    for(int i=0; i<length; i++) {
        cout<<A[i]<<" ";
    }
    cout<<endl;
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

void setElement(int* A, int element, int pos)
{
    A[pos] = element;
}

int maxElement(int* A, int& length)
{
    int max = INT_MIN;
    for(int i=0; i<length; i++) {
        if(A[i] > max) {
            max = A[i];
        }
    }
    return max;
}

int minElement(int* A, int& length)
{
    int min = INT_MAX;
    for(int i=0; i<length; i++) {
        if(A[i] < min) {
            min = A[i];
        }
    }
    return min;
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
    add(A, length, newElement);
    display(A, length);
    insert(A, length, 2, element);
    display(A, length);
    deleteElement(A, length, 2);
    display(A, length);
    Linearsearch(A, length, key);
    BinarySearch(A, length, key);
    int getElem = getElement(A, pos);
    cout<<getElem<<endl;
    setElement(A, element, pos);
    display(A, length);

    int maxElem = maxElement(A, length);
    int minElem = minElement(A, length);
    cout<<"Max: "<<maxElem<<" Min: "<<minElem<<endl;


    delete []A;

    return 0;
}