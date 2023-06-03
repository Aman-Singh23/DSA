#include<iostream>
using namespace std;

void countDuplicate(int* A, int& size)
{
    for(int i=0; i<size-1; i++) {
        if(A[i] != -1) {
            int count = 1;
            for(int j=i+1; j<size; j++) {
                if(A[i] == A[j]) {
                    count++;
                    A[j] = -1;
                }
            }
            if(count > 1){
                cout<<A[i]<<" : "<<count<<endl;
            }
        }
    }
}

int main()
{
    int size = 10;
    int* A = new int[size]{8,3,6,4,5,6,8,2,6};
    countDuplicate(A, size);
    return 0;
}