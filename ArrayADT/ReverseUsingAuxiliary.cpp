#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int arr1[size] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[size];

    // Original Array
    for(int i=0; i<size; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    // Reverse Operation
    for(int i=0, j=size-1; i<size; i++, j--)
    {
        arr2[j] = arr1[i];
    }

    // Reversed Array
    for(int i=0; i<size; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<size; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    return 0;
}