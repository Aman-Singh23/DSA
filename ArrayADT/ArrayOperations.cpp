#include<iostream>
using namespace std;

class ArrayOperation
{
    private:
    int *arr;
    int size;

    public:
    ArrayOperation( int arrSize)
    {
        size = arrSize;
        arr = new int[size];
    }

    void Display()
    {
        for(int i=0; i<size; i++)
        {
            arr[i];
        }
    }

    ~ArrayOperation()
    {
        delete[] arr;
        arr = nullptr;
    }
};

int main()
{
    int size;
    cout<<"Enter Size of an Array\n";
    cin>>size;
    ArrayOperation list(size);

    for(int i=0; i<size; i++)
    {
        
    }

    return 0;

}

