#include<iostream>
using namespace std;

class LowerTriangularMatrix
{
    private:
        int n;
        int* A;
    public:
        LowerTriangularMatrix(int n)
        {
            this->n = n;
            A = new int[n];
        }

        void Set(int i, int j, int x)
        {
            if(i>=j) {
                A[(i*(i-1)/2)+(j-1)] = x;
            }
        }

        int Get(int i, int j)
        {
            if(i>=j) {
                return A[(i*(i-1)/2)+(j-1)];
            }
            else {
                return 0;
            }
        }

        void Display()
        {
            for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                    if(i>=j) {
                        cout<<A[(i*(i-1)/2)+(j-1)]<<" ";
                    }
                    else {
                        cout<<"0 ";
                    }
                }
                cout<<endl;
            }
        }

        ~LowerTriangularMatrix()
        {
            delete []A;
        }

};

int main()
{
    LowerTriangularMatrix d(3);
    d.Set(0,0,2);
    d.Set(1,0,4);
    d.Set(2,0,6);
    d.Set(1,1,5);
    d.Set(2,1,7);
    d.Set(2,2,9);
    d.Display();
    return 0;
}