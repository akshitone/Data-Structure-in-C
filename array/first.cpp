#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    // static array
    int A[n] = {0};
    // dynamic array
    int *P = new int[n];
    delete[] P;
    return 0;
}