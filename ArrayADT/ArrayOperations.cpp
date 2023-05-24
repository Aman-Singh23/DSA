#include<iostream>
using namespace std;

class ArrayOperation
{
private:
    int *A;
    int *B;
    int *C;
    int length_A;
    int length_B;

public:
    ArrayOperation(int* arr_A, int arr_A_length, int* arr_B, int arr_B_length)
    {
        length_A = arr_A_length;
        length_B = arr_B_length;

        A = new int[length_A];
        for(int i=0; i<length_A; i++) {
            A[i] = arr_A[i];
        }

        B = new int[length_B];
        for(int i=0; i<length_B; i++) {
            B[i] = arr_B[i];
        }

        C = new int[0];
    }

    void display(int* arr, int length)
    {
        for(int i=0; i<length; i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    ~ArrayOperation()
    {
        delete[] A;
        delete[] B;
        delete[] C;
    }
};

int main()
{
    int size = 10;
    int length = 3;
    int newElement = 4;
    int element = 15;
    int key = 4;
    int pos = 2;
    int elem = 9;
    int length_B = 4;

    int* A = new int[length];
    
    for(int i=0; i<length; i++) {
        A[i] = i+1;
    }

    int* B = new int[length_B];
    
    for(int i=0; i<length_B; i++) {
        B[i] = i-50;
    }

    int* C = new int[0];

    ArrayOperation ops(A, length, B, length_B);
    ops.display(A, length);
}
