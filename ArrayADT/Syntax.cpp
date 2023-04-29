#include<iostream>
using namespace std;

int main()
{
    // int arr[10] = {1, 2, 3, 4, 5};
    
    int size; // size of an array
    int length; // Number of elements in an array
    cin>>size>>length;
    
    // int arr[size] = {};

    int *q = new int[size];

    // Assign
    for(int i=0; i<length; i++)
    {
        cin>>q[i];
    }
    
    //Display
    for(int i=0; i<size; i++)
    {
        cout<<q[i]<<endl;
    }
    
    // Deallocate heap memory
    delete []q;
    q=nullptr;
    
    return 0;

    
}