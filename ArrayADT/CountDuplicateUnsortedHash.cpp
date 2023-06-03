#include<iostream>
using namespace std;

void countDuplicate(int* A, int& size, int* H, int& length)
{
    for(int i=0; i<size; i++) {
        H[A[i]]++;
    }

    for(int i=0; i<length; i++) {
        if(H[i] > 1) {
            cout<<i<<" : "<<H[i]<<endl;
        }
    }
}

int main()
{
    int size = 10, length = 9;
    int* A = new int[size]{8,3,6,4,5,6,8,2,6};
    int* H = new int[length]{0};
    countDuplicate(A, size, H, length);
    delete []A;
    delete []H;
    return 0;
}