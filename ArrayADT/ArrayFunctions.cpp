#include<iostream>
#include<limits.h>
using namespace std;

void display(int* arr, int length)
{
    for(int i=0; i<length; i++) {
        cout<<arr[i]<<" ";
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

void reverse(int* A, int& length)
{
    int i = 0;
    int j = length-1;

    while(i <= j) {
        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }
}

int sumElement(int* A, int& length)
{
    int sum = 0;
    for(int i=0; i<length; i++) {
        sum = sum + A[i];
    }
    return sum;
}

float averageElement(int* A, int& length)
{
    float sum = 0;
    float average;
    for(int i=0; i<length; i++) {
        sum = sum + A[i];
    }
    average = sum/length;
    return average;
}

void leftShiftRotate(int* A, int length)
{
    int temp = A[0];
    for(int i=0; i<length-1; i++) {
        A[i] = A[i+1];
    }
    A[length-1] = temp;
}

void rightShiftRotate(int* A, int length)
{
    int temp = A[length-1];
    for(int i=length-1; i>0; i--) {
        A[i] = A[i-1];
    }
    A[0] = temp;
}

void checkSort(int* A, int length)
{
    bool flag = true;
    for(int i=0; i<length-1; i++) {
        if(A[i] > A[i+1]) {
            flag = false;
            cout<<"Unsorted Array"<<endl;
            break;
        }
    }
    if(flag == true) {
        cout<<"Sorted Array"<<endl;
    }
}

void sort(int* A, int& length)
{
    for(int i=0; i<length; i++) {
        for(int j=i+1; j<length; j++) {
            if(A[i] > A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void insertSort(int* A, int& length, int key)
{
    for(int i=0; i<length; i++) {
        if(key < A[i]) {
            for(int j = length; j>i-1; j--) {
                A[j] = A[j-1];
            }
            A[i] = key;
        }
    }
    length++;
}

int main()
{
    int size = 10;
    int length = 3;
    int newElement = 4;
    int element = 15;
    int key = 4;
    int pos = 2;
    int elem = 9;

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

    display(A, length);
    reverse(A, length);
    display(A, length);

    int sum = sumElement(A, length);
    float average = averageElement(A, length);
    cout<<"Sum: "<<sum<<" Average: "<<average<<endl;

    display(A, length);
    leftShiftRotate(A, length);
    display(A, length);
    rightShiftRotate(A, length);
    display(A, length);

    checkSort(A, length);
    sort(A, length);
    display(A, length);
    checkSort(A, length);

    insertSort(A, length, elem);
    display(A, length);

    delete []A;

    return 0;
}