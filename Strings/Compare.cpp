#include<iostream>
using namespace std;

void compareStrings(char* A, char* B)
{
    int i, j;
    for(i=0, j=0; A[i] != '\0' && B[j] != '\0'; i++, j++) {
        if(A[i] != B[i]) {
            break;            
        }
    }
    if(A[i] == B[j]) {
        cout<<"Equal";
    }
    else if(A[i] > B[j]) {
        cout<<"Greater";
    }
    else {
        cout<<"Smaller";
    }
}

int main()
{
    char* A = "Painter";
    char* B = "Painting";

    compareStrings(A, B);
    return 0;
}