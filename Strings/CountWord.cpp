#include<iostream>
using namespace std;

int main()
{
    int countWord = 0;
    char S[] = "Hello  my name is     Aman";
    for(int i=0; S[i]!='\0'; i++) {
        if(S[i] == ' ' && S[i-1] != ' ') {
            countWord++;
        }
    }
    cout<<countWord+1;
    return 0;
}