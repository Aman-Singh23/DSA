#include<iostream>
using namespace std;

void maxMin(int* A, int& size)
{
    int max = A[0];
    int min = A[0];
    for(int i=1; i<size; i++) {
        if(A[i] > max) {
            max = A[i];
        }
        else if(A[i] < min) {
            min = A[i];
        }
    }
    cout<<"Max:"<<max<<endl;
    cout<<"Min:"<<min<<endl;
}

int main()
{
    int size = 10;
    int* A = new int[size]{5,8,3,9,6,2,19,7,-1,4};
    maxMin(A, size);
    return 0;
}