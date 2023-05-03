#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int length = 6;
    int index;

    int arr[size]={12, 14, 23, 29, 16, 42};
    
    cout<<"Enter the element's index"<<endl;
    cin>>index;
    
    if(index>=0 && index<length)
    {
        cout<<arr[index];
    }

    return 0;
}