#include<iostream>
using namespace std;

void missingElement(int* A, int& length)
{
    int diff = A[0] - 0;
    for(int i=0; i<length; i++) {
        if(A[i]-i != diff) {
            cout<<"Missing Element: "<<i+diff<<endl;
            break;
        }
    }
}

int main()
{
    int length  = 6;
    int* A = new int[length]{3,4,6,7,8,9};
    missingElement(A, length);
    delete[] A;
    return 0;
}