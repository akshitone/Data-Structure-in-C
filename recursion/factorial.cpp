#include <iostream>
using namespace std;

int recursion(int n)
{
    if (n == 0)
        return 1;
    else
        return recursion(n - 1) * n;
}

int main()
{
    int n = 5;
    cout << recursion(n);
}