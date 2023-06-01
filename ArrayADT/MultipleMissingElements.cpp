#include<iostream>
using namespace std;

void multipleMissingElements(int* A, int& length)
{
    int diff = A[0] - 0;
    for(int i=0; i<length; i++) {
        if(A[i]-i != diff) {
            while(diff < A[i]-i) {
                cout<<"Missing Element: "<<diff+i<<endl;
                diff++;
            }
        }
    }
}

int main()
{
    int size = 6;
    int* A = new int[size]{4,5,7,8,11,20};
    multipleMissingElements(A, size);
    delete[] A;
    return 0;
}