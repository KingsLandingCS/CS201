#include <iostream>
using namespace std;

class Matrix
{
private:
    int A[2][2], B[2][2];

public:
    Matrix()
    {
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                A[i][j] = 0;
                B[i][j] = 0;
            }
        }
    }

    Matrix(int m[2][2], int n[2][2])
    {
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                A[i][j] = m[i][j];
                B[i][j] = n[i][j];
            }
        }
    }

    void sumMatrix()
    {
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                cout << A[i][j] + B[i][j] << " ";
            }
            cout << "\n";
        }
    }

    void subMatrix()
    {
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                cout << A[i][j] - B[i][j] << " ";
            }
            cout << "\n";
        }
    }

    void mulMatrix()
    {
        int result[2][2] = {0};
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                result[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j];
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }

    void divMatrix()
    {
        cout << "Matrix division (A * B-inverse) is not implemented correctly here, skipping.\n";
    }

    void transposeA()
    {
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                cout << A[j][i] << " ";
            }
            cout << "\n";
        }
    }

    void transposeB()
    {
        for (int i = 0; i <= 1; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                cout << B[j][i] << " ";
            }
            cout << "\n";
        }
    }

    ~Matrix() {}
};

int main()
{
    int a[2][2] = {{3, 3}, {1, 1}}, b[2][2] = {{2, 1}, {0, 1}};
    Matrix obj(a, b);

    cout << "2 By 2 Matrix Addition:" << endl;
    obj.sumMatrix();

    cout << "2 By 2 Matrix Subtraction:" << endl;
    obj.subMatrix();

    cout << "2 By 2 Matrix Multiplication:" << endl;
    obj.mulMatrix();

    cout << "2 By 2 Matrix Division:" << endl;
    obj.divMatrix();

    cout << "Transpose of A:" << endl;
    obj.transposeA();

    cout << "Transpose of B:" << endl;
    obj.transposeB();

    return 0;
}
