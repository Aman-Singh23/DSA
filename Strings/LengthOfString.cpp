#include<iostream>
using namespace std;

int main()
{
    char* S = "Aman";
    int i;
    for(i=0; S[i] != '\0'; i++) {}
    cout<<"Length: "<<i;

    return 0;
}