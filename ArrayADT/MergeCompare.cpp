#include<iostream>
using namespace std;

int main()
{

    int arr1_size = 5;
    int arr2_size = 4;

    int arr1[arr1_size] = {1,3,5,7,9};
    int arr2[arr2_size] = {2,4,6,8};
    int arr3[arr1_size+arr2_size];

    int i=0, j=0, k=0;

    while(i<arr1_size && j<arr2_size)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    for(; i<arr1_size; i++)
    {
        arr3[k++] = arr1[i];
    }

    for(; j<arr1_size; j++)
    {
        arr3[k++] = arr2[j];
    }

    for(int i=0; i<(arr1_size+arr2_size); i++)
    {
        cout<<arr3[i]<<" ";
    }

    return 0;
}