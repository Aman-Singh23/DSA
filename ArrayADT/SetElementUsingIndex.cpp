#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int length = 6;
    int index, element;

    int arr[size]={12, 14, 23, 29, 16, 42};
    
    cout<<"Enter the INDEX and ELEMENT"<<endl;
    cin>>index>>element;

    // Original Array
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    if(index>=0 && index<length)
    {
        arr[index] = element;
    }
    else
        return (-1);

    // Updated Array
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}