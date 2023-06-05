#include<iostream>
using namespace std;

void findingDuplicate(char* A)
{
    for(int i=0; A[i] != '\0'; i++) {
        int count = 1;
        for(int j=i+1; A[j] != '\0'; j++) {
            if(A[i] == A[j]) {
                count++;
            }
        }
        if(count>1) {
            cout<<A[i]<<":"<<count<<endl;
        }
    }
}

int main()
{
    char* A = "finding";
    findingDuplicate(A);
    return 0;
}