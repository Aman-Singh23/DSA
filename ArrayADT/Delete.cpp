#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int length = 6;
    int index;

    int arr[size]={12, 14, 23, 29, 16, 42};
    
    cout<<"Enter the element 'INDEX' to delete"<<endl;
    cin>>index;
    
    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    if(index>=0 && index<length)
    {
        int deleted_element = arr[index];
        {
            for(int i=index; i<length-1; i++)
            {
                arr[i] = arr[i+1];
            }
            length--;
        }
    }
    else
        return -1;

    for(int i=0; i<length; i++)
    {
        cout<<arr[i]<<endl;
    }

}