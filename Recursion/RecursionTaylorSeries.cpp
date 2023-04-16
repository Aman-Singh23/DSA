#include<iostream>
using namespace std;

// e(x) = 1/0! + x/1! + x(2)/2! + . . . . . . + x(n)/n!  

double e(int x, int n)
{
    static double p = 1, f =1;
    double r;

    if(n==0)
        return 1;
    r = e(x, n-1);
    p = p * x;
    f = f * n;
    return r + p/f;
}

int main()
{
    cout<<e(4,15);
    return 0;
}