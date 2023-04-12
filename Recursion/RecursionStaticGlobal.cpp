#include<iostream>
using namespace std;

int x = 0; // Global

int fun(int n)
{
    //static int x = 0; // Static
    if(n>0)
    {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main()
{
    int a = 5;
    cout<<fun(a);
}