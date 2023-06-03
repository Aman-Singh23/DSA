#include<iostream>
using namespace std;

void twoSum(int* A, int& size, int target)
{
    int i = 0, j = size-1;
    while(i<j) {
        if(A[i] + A[j] == target) {
            cout<<A[i]<<" "<<A[j]<<" "<<target<<endl;
            i++;
            j--;
        }
        else if(A[i] + A[j] > target) {
            j--;
        }
        else {
            i++;
        }
    }
}

int main()
{
    int size = 10;
    int target = 10;
    int* A = new int[size]{2,3,5,6,7,8,9,10,14,16};
    twoSum(A, size, target);
    delete []A;
    return 0;
}