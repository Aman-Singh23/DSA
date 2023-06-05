#include<iostream>
using namespace std;

int palindrome(char* S) {
    int i=0 , j;
    for(j=0; S[j] != '\0'; j++) {}
    j = j-1;
    while(i<j) {
        if(S[i] != S[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char S[] = "motom";
    if(palindrome(S)){
        cout<<"Palindrome";
    }
    else {
        cout<<"Not Palindrome";
    }
   return 0;
}