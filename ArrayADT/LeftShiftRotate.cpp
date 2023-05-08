#include<iostream>
using namespace std;


int main()
{
    int size = 6;
    int arr[size] = {1, 2, 3, 4, 5, 6};

    int temp = arr[0];
    for(int i=0; i<size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1] = temp;

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}