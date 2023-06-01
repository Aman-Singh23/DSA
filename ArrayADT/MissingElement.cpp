#include<iostream>
using namespace std;

void findMissing(int* A, int& length)
{
    int sum = 0, s;
    for(int i=0; i<length; i++) {
        sum = sum + A[i];
    }
    s = (A[length-1]*(A[length-1]+1))/2;
    cout<<"Missing element is "<<s-sum;
}

int main()
{
    int length = 5;
    int* A = new int[length]{1,2,4,5,6};
    findMissing(A, length);
    delete[] A;
    return 0;
}