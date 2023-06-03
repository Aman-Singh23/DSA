#include<iostream>
using namespace std;

void duplicate(int* A, int& size)
{
    int lastDuplicate = 0;
    for(int i=0; i<size-1; i++) {
        if(A[i] == A[i+1] && A[i] != lastDuplicate) {
            cout<<A[i]<<endl;
            lastDuplicate = A[i];
        }
    }
}

int main()
{
    int size = 8;
    int* A = new int[size]{1,2,2,3,4,4,4,5};
    duplicate(A, size);
    return 0;
}