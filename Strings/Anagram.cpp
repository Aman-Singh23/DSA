#include<iostream>
#include<cstring>

using namespace std;

void anagram(char* A, char* B, int* H)
{
    if(strlen(A) == strlen(B)) {
        int i=0;
        for(i=0; A[i]!='\0'; i++) {
            H[A[i]-97]++;
        }
        
        for(i=0; B[i]!='\0'; i++) {
            H[A[i]-97]--;
            if(H[A[i]-97] < 0) {
                cout<<"Not Anagram";
                break;
            }
        }
        if(B[i] == '\0') {
            cout<<"Anagram";
        }
    }
    else {
        cout<<"Not Anagram";
    }
}

int main()
{
    char* A = "verbose";
    char* B = "observe";
    int* H = new int[26];

    anagram(A, B, H);
    return 0;
}