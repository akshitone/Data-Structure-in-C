#include <iostream>
using namespace std;

int main()
{
    int *P = new int[5];
    P[0] = 6;
    P[1] = 7;
    P[2] = 4;
    P[3] = 3;
    P[4] = 9;

    int *Q = new int[10];
    for (int i = 0; i < 5; i++)
        Q[i] = P[i];

    delete[] P;
    P = Q;
    Q = NULL;

    for (int i = 0; i < 5; i++)
        cout << P[i] << "\t";

    return 0;
}