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

void merge(int* A, int* B, int* C, int& length, int& length_B)
{
    int k=0;
    for(int i=0; i<length; i++) {
        C[k++] = A[i];
    }
    for(int i=0; i<length_B; i++) {
        C[k++] = B[i];
    }
}

void sortMerge(int* A, int* B, int* C, int& length, int& length_B)
{
    int i = 0, j = 0, k = 0;
    while(i<length && j<length_B) {
        if(A[i] < B[j]) {
            C[k++] = A[i++];
        }
        else {
            C[k++] = B[j++];
        }
    }

    while(i < length) {
        C[k++] = A[i++];
    }

    while(j < length_B) {
        C[k++] = B[j++];
    }
}

void intersection(int* A, int* B, int* C, int& length, int& length_B)
{
    int k = 0;
    bool found = false;
    for(int i=0; i<length; i++) {
        for(int j=0; j<length_B; j++) {
            if(A[i] == B[j]) {
                C[k++] = A[i];
            }
        }
    }
    if(found == false) {
        cout<<"No common element in an array"<<endl;;
    }
}

void unionArray(int* A, int* B, int* C, int& length, int& length_B) 
{
    int k = 0;
    for(int i=0; i<length; i++) {
        C[k++] = A[i];
    }

    for(int j=0; j<length_B; j++) {
        bool found = false;
        for(int i=0; i<length; i++) {
            if(B[j] == A[i]) {
                found = true;
                break;
            }
        }
        if(found == false) {
            C[k++] = B[j];
        }
    }
}

void difference(int* A, int* B, int* C, int& length, int& length_B)
{
    int k = 0;
    for(int i=0; i<length; i++) {
        bool found = false;
        for(int j=0; i<length_B; j++) {
            if(A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if(found == false) {
            C[k++] = A[i];
        }
    }
}

void removeDuplicate(int* A, int& length)
{
    for(int i=0; i<length; i++) {
        for(int j = i+1; j<length; j++) {
            if(A[i] == A[j]) {
                for(int k=j; k<length; k++) {
                    A[k] = A[k+1];
                }
                length--;
            }
        }
    }
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
    int length_B = 4;

    int* A = new int[length];
    
    for(int i=0; i<length; i++) {
        A[i] = i+1;
    }

    int* B = new int[length_B];
    
    for(int i=0; i<length_B; i++) {
        B[i] = i-50;
    }

    int* C = new int[0];

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

    // merge(A, B, C, length, length_B);
    // sortMerge(A, B, C, length, length_B);
    // display(C, 9);
    
    intersection(A, B, C, length, length_B);
    unionArray(A, B, C, length, length_B);
    display(C, 9);

    difference(A, B, C, length, length_B);
    removeDuplicate(A, length);

    

    delete []A;
    delete []B;
    delete []C;

    return 0;
}