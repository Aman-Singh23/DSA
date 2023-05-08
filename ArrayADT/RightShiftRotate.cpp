#include<iostream>
using namespace std;


int main()
{
    int size = 7;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7};

    int temp = arr[size-1];
    for(int i=size-1; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0] = temp;

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}