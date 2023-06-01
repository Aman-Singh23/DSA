#include<iostream>
using namespace std;

void missingElements(int* A, int& size, int* H, int& length)
{
    for(int i=0; i<size; i++) {
        H[A[i]]++;
    }
    for(int j=1; j<=length; j++) {
        if(H[j] == 0) {
            cout<<"Missing Element: "<<j<<endl;
        }
    }
}

int main()
{
    int size = 6, length = 7;
    int* A = new int[size]{2,3,1,5,7,6};
    int* H = new int[length]{0};
    missingElements(A, size, H, length);

    delete[] A;
    delete[] H;
    return 0;
}