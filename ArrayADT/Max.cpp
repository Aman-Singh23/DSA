#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int size=10, length=6;
    int max;

    int arr[size] = {4,6,2,33,9,1};
    max = INT_MIN;

    for(int i=0; i<length; i++)
    {
        if(max<arr[i])
            max = arr[i];
    }
    cout<<max;
    
    return 0;
}