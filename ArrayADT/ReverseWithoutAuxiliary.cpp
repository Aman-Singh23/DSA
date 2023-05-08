#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8};

    // Original Array
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Reverse Operation
    for(int i=0, j=size-1; i<j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Reversed Array
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}