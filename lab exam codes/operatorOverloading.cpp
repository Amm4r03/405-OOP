// code to demonstrate operator overloading 

#include <iostream>
using namespace std;

class Matrix
{
    private : 
        int data[2][2];
    
    public : 
        Matrix (int a, int b, int c, int d)
        {
            data[0][0] = a;
            data[0][1] = b;
            data[1][0] = c;
            data[1][1] = d;
        }

        Matrix operator+(Matrix &m1)
        {
            Matrix result(0, 0, 0, 0);
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    result.data[i][j] = data[i][j] + m1.data[i][j];
                }
            }
            return result;
        }

        void showMatrix(void)
        {
            for (auto &row : data)
            {
                cout << "[";
                for (auto element : row)
                {
                    cout << element << " \t";
                }
                cout << "]";
                cout << endl;
            }
        }
};

int main()
{
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);
    Matrix m3 = m1 + m2;

    cout << "matrix A : " << endl;
    m1.showMatrix();

    cout << "matrix B : " << endl;
    m2.showMatrix();

    cout << "matrix A + matrix B : " << endl;
    m3.showMatrix();

    return 0;
}