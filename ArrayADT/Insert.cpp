#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int length = 6;
    int element, index;

    int arr[size]={12, 14, 23, 29, 16, 42};
    
    cout<<"Enter 'ELEMENT' and at which 'INDEX' you want to keep"<<endl;
    cin>>element>>index;
    
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    if(index>=0 && index<length)
    {
        for(int i=length; i>index; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[index] = element;
        length++;
    }

    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<endl;
    }
}