#include<iostream>
using namespace std;

int main()
{
    int length = 9;
    int A[length] = {4,-6,7,-2,-1,6,3,-9,1};

    int i = 0, j = length-1;

    while(i<=j) {
        while(A[i] >= 0) {i++;}
        while(A[j] < 0) {j--;}

        int temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i++;
        j--;
    }

    for(int k=0; k<length; k++) {
        cout<<A[k]<<" ";
    }
    return 0;
}