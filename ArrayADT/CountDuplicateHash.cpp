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
    int size = 10, length = 21;
    int* A = new int[size]{3,6,8,8,10,12,15,15,15,20};
    int* H = new int[length]{0};
    countDuplicate(A, size, H, length); 
    delete []A;
    delete []H;
    return 0;
}