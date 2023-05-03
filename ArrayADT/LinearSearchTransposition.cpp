#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int length = 6;
    int key;

    int arr[size]={12, 14, 23, 29, 16, 42};
    
    cout<<"Enter the element which you want to search"<<endl;
    cin>>key;

    // Original Array
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<length; i++)
    {
        if(arr[i] == key)
            cout<<i;
    }

    // Updated Array
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}