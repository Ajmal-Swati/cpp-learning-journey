#include <iostream>
using namespace std;
int main()
{
//........................WORKING ON ARRAYS............................
/* FOLLOWING PROGRAM  DEMONSTRATES TWO BASICS BUT CORE CONCEPTS OF :
#nested-if STATEMENTS
#ARRAYS MULTIPLICATION
*/
    int A[3][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3},

    };
    int B[3][3] = {
        {6, 8, 9},
        {6, 8, 9},
        {6, 8, 9},

    };
    int C[3][3];
    cout << "THE IS MATRIX A  " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "THIS IS MATRIX B  " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << "THIS IS A NEW MATRIX WHICH IS MULTIPICATION OF A AND B " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}