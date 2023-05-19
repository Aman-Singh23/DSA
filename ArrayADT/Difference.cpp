#include<iostream>
using namespace std;

int main()
{

    int A[5] = {1,3,5,6,9};
    int B[4] = {2,3,6,8};
    int C[10];

    int k=0;
    for(int i=0; i<5; i++) {
        bool found = false;
        for(int j=0; j<4; j++) {
            if(A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if(found == false) {
            C[k++] = A[i];
        }
    }

    for(int i=0; i<k; i++) {
        cout<<C[i]<<" ";
    }

    return 0;
}