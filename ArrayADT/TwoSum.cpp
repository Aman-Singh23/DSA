#include<iostream>
using namespace std;

void twoSum(int* A, int& size, int target)
{
    for(int i=0; i<size-1; i++) {
        for(int j=i+1; j<size; j++) {
            if(A[i] + A[j] == target) {
                cout<<i<<":"<<A[i]<<" "<<j<<":"<<A[j]<<endl;
            }
        }
    }
}

int main()
{
    int size = 10;
    int target = 10;
    int* A = new int[size]{6,3,8,10,16,7,5,2,9,14};
    twoSum(A, size, target);
    delete []A;
    return 0;
}