#include<iostream>
using namespace std;

int main()
{
    int size = 5, length = 4;
    int arr[size] = {2,4,6,8};
    int newElement = 5;

    for(int i=0;i<size; i++)
    {
        if(newElement<arr[i])
        {
            for(int j=size-1; j>i; j--)
            {
                arr[j] = arr[j-1];
            }
            arr[i] = newElement;
            break;
        }
    }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}