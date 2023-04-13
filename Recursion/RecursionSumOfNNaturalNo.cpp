#include<iostream>
using namespace std;

int sum(int n)
{
    if(n == 0)
        return 0;
    else
        return sum(n-1) + n;
}

int main()
{
    int n;
    cout<<"Enter N Natural Number: "<<endl;
    cin>>n;

    cout<<sum(n);
}