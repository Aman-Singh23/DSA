#include<iostream>
using namespace std;

int main()
{
    int size = 7;
    int arr[size] = {1,2,3,4,5,6,7};

    for(int i=0; i<size; i++)
    {
        if(arr[i]>arr[i+1])
        {
            cout<<"Unsorted Array";
            break;
        }
    }
    cout<<"Sorted Array";

    return 0;
}