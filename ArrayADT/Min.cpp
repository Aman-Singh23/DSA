#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int size=10, length=7;
    int min;

    int arr[size] = {2,4,6,2,33,9,-19};
    min = INT_MAX;

    for(int i=0; i<length; i++)
    {
        if(min>arr[i])
            min = arr[i];
    }
    cout<<min;
    
    return 0;
}