#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int size=10, length=7;
    float sum = 0;

    int arr[size] = {1, 2, 3, 4, 5, 6, 7};

    for(int i=0; i<length; i++)
    {
        sum = sum + arr[i];
    }
    cout<<sum/length;
    
    return 0;
}