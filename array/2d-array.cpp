#include <iostream>
using namespace std;

int main()
{
    // static array
    int A[3][4] = {0};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cout << A[i][j];

    // dynamic array
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];
    B[1][2] = 15;
    cout << B[1][2];

    int **C;
    C = new int *[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];
    C[1][2] = 15;
    cout << C[1][2];

    return 0;
}