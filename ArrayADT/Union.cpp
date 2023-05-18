#include<iostream>
using namespace std;

int main()
{

    int A[5] = {1,3,5,6,9};
    int B[4] = {2,3,6,8};
    int C[10];

    int k=0;
    for(int i=0; i<5; i++)
    {
        C[k++] = A[i];
    }

    for(int j=0; j<4; j++)
    {
        for(int i=0; i<5; i++)
        {
            if(B[j] == A[i])
            {
                break;
            }
        }
        C[k++] = B[j];
    }

    for(int i=0; i<10; i++)
    {
        cout<<C[i]<<" ";
    }

    

    return 0;
}