#include<iostream>
using namespace std;

class Diagonal
{
    private:
        int n;
        int* A;
    public:
        Diagonal(int n)
        {
            this->n = n;
            A = new int[n];
        }

        void Set(int i, int j, int x)
        {
            if(i-j == 0) {
                A[n-1+i] = x;
            }
            else if(i-j == 1) {
                A[i] = x;
            }
            else if(i-j == -1) {
                A[2*n-1+i] = x;
            }
        }

        int Get(int i, int j)
        {
            if(i-j == 0) {
                return A[n-1+i];
            }
            if(i-j == 1) {
                return A[i];
            }
            if(i-j == -1) {
                return A[2*n-1+i];
            }
            else {
                return 0;
            }
        }

        void Display()
        {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                     if(i-j == 0) {
                        cout<<A[n-1+i]<<"   ";
                    }
                    if(i-j == 1) {
                        cout<<A[i]<<"   ";
                    }
                    if(i-j == -1) {
                        cout<<A[2*n-1+i]<<"   ";
                    }
                    else {
                        cout<<"0   ";
                    }
                }
                cout<<endl;
            }
        }

        ~Diagonal()
        {
            delete []A;
        }

};

int main()
{
    Diagonal d(4);
    d.Set(0,0,2);
    d.Set(1,1,4);
    d.Set(2,2,6);
    d.Set(3,3,8);
    d.Set(4,4,1);
    d.Set(1,0,3);
    d.Set(2,1,5);
    d.Set(3,2,7);
    d.Set(4,3,9);
    d.Set(0,1,11);
    d.Set(1,2,22);
    d.Set(2,3,33);
    d.Set(3,4,44);


    d.Display();
    return 0;
}