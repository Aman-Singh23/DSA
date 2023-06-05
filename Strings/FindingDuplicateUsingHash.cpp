#include<iostream>
using namespace std;

void findingDuplicate(char* A, int* H, int& size)
{
    for(int i=0; A[i] != '\0'; i++) {
        H[A[i]-97]++;
    }

    for(int i=0; i<size; i++) {
        if(H[i] > 1) {
            cout<<char(i+97)<<":"<<H[i]<<endl;
        }
    }
}

int main()
{
    int size = 26;
    char* A = "finding";
    int* H = new int[size]{0};
    findingDuplicate(A, H, size);
    return 0;
}