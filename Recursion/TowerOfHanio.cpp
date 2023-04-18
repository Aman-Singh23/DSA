#include<iostream>
using namespace std;

void TOH(int disk, int tower1, int tower2, int tower3)
{
    if(disk>0)
    {
        TOH(disk-1, tower1, tower3, tower2);
        cout<<"("<<tower1<<","<<tower3<<")"<<endl;
        TOH(disk-1, tower2, tower1, tower3);
    }
}

int main()
{
    TOH(4,1,2,3);
    return 0;
}