#include<iostream>
using namespace std;

void twoSum(int* A, int& size, int* H, int& length, int target)
{
    for(int i=0; i<size; i++) {
        if(H[target - A[i]] != 0) {
            cout<<A[i]<<" "<<target-A[i]<<" "<<target<<endl;
        }
        H[A[i]]++;
    }
}

int main()
{
    int size = 10, length = 17;
    int target = 10;
    int* A = new int[size]{6,3,8,10,16,7,5,2,9,14};
    int* H = new int[length]{0};
    twoSum(A, size, H, length, target);
    delete []A;
    delete []H;
    return 0;
}