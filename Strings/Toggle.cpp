#include<iostream>
using namespace std;

int main()
{
    char S[] = "We5comE";
    for(int i=0; S[i]!='\0'; i++) {
        if(S[i]>=97 && S[i]<=122) {
            S[i] -= 32;
        }
        else if(S[i]>='A' && S[i]<=90) {
            S[i] += 32;
        }
    }
    cout<<S;
}