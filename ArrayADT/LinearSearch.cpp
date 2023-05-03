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

    for(int i=0; i<length; i++)
    {
        if(arr[i] == key)
            cout<<i;
    }
    return (-1);
}