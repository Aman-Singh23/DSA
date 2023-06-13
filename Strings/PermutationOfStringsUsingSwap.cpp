#include<iostream>
#include<cstring>
using namespace std;

void swap(char S[], int l, int i)
{
    char temp;
    temp = S[l];
    S[l] = S[i];
    S[i] = temp;
}

void permuationString(char S[], int l, int h)
{
    int i;
    if(l==h) {
        cout<<S<<" ";
    }
    else {
        for(i=l; i<=h; i++) {
            swap(S[i], S[l]);
            permuationString(S,l+1,h);
            swap(S[l], S[i]);
        }
    }
}

int main()
{
    char S[] = "AMAN";
    permuationString(S, 0, strlen(S)-1);
    return 0;
}