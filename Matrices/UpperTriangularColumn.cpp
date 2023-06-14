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
            if(i<=j) {
                A[(j*(j-1)/2)+(i-1)] = x;
            }
        }

        int Get(int i, int j)
        {
            if(i<=j) {
                return A[(j*(j-1)/2)+(i-1)];
            }
            else {
                return 0;
            }
        }

        void Display()
        {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(i<=j) {
                        cout<<A[(j*(j-1)/2)+(i-1)]<<" ";
                    }
                    else {
                        cout<<"0 ";
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
    Diagonal d(3);
    d.Set(0,0,2);
    d.Set(0,1,4);
    d.Set(0,2,6);
    d.Set(1,1,5);
    d.Set(1,2,7);
    d.Set(2,2,9);
    d.Display();
    return 0;
}