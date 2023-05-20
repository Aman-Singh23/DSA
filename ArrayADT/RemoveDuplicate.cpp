#include<iostream>
using namespace std;

int main()
{
    int length = 7;
    int A[length] = {1,9,2,1,2,6,1};

    for(int i=0; i<length; i++) {
        for(int j=i+1; j<length; j++) {
            if(A[i] == A[j]) {
                for(int k=j; k<length; k++) {
                    A[k] = A[k+1];
                }
                length--;
            }
        }
    }

    for(int i=0; i<length; i++) {
        cout<<A[i]<<" ";
    }
}