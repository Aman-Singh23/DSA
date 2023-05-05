#include<iostream>
using namespace std;

int main()
{
    int size = 10;
    int length = 6;
    int key, l, h, mid;
    int arr[size] = {2,5,6,8,14,29};

    cin>>key;

    l = 0;
    h = length-1;

    while(l<=h)
    {
        mid = (l + h)/2;
        if(key == arr[mid])
        {
            cout<<mid;
            break;
        }
        else if(key < arr[mid])
            h = mid -1;
        else
            l = mid + 1;
    }

    return -1;
}