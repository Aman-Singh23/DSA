#include<iostream>
using namespace std;

void countDuplicate(int* A, int& size)
{
    for(int i=0; i<size-1; i++) {
        if(A[i] == A[i+1]) {
            int j = i+1;
            while(A[j] == A[i]) {
                j++;
            }
            cout<<A[i]<<":"<<j-i<<endl;
            i = j-1;
        }
    }
}

int main()
{
    int size = 8;
    int* A = new int[size]{1,2,2,3,4,4,4,5};
    countDuplicate(A, size);
    return 0;
}