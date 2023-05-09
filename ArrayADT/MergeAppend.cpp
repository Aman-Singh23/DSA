#include<iostream>
using namespace std;

int main()
{
    int arr1_size = 5;
    int arr2_size = 4;

    int arr1[arr1_size] = {1,2,3,4,5};
    int arr2[arr2_size] = {6,7,8,9};
    int arr3[arr1_size+arr2_size];

    int k = 0;

    for(int i=0; i<arr1_size; i++)
    {
        arr3[k++] = arr1[i];
    }

    for(int i=0; i<arr1_size; i++)
    {
        arr3[k++] = arr2[i];
    }

    for(int i=0; i<(arr1_size+arr2_size); i++)
    {
        cout<<arr3[i]<<" ";
    }

    return 0;
}