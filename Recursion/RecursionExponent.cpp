#include<iostream>
// #include<math.h>

using namespace std;

int pow(int x, int n)
{
    if(n == 0)
        return (1);
    else
        return pow(x, n-1) * x;
}

int improvePow(int x, int n)
{
    if(n == 0)
        return 1;
    if(n%2 == 0)
    {
        return improvePow(x*x, n/2);
    }
    else
    {
        return x * improvePow(x*x, (n-1)/2);
    }
}

int main()
{
    cout<<"Power Function "<<pow(2,10)<<endl;
    cout<<"Improved Power Function "<<improvePow(2,11)<<endl;;
    return 0;
}