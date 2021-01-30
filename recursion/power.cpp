#include <iostream>
using namespace std;

int power(int m, int n)
{
    int pow = 1;
    for (int i = 0; i < n; i++)
    {
        pow *= m;
    }
    return pow;
}

int recursion(int m, int n)
{
    if (n == 0)
        return 1;
    return recursion(m, n - 1) * m;
}
int fast_recursion(int m, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
        return fast_recursion(m * m, n / 2);
    return m * fast_recursion(m * m, (n - 1) / 2);
}

int main()
{
    int m = 2, n = 10;
    cout << recursion(m, n);
    cout << fast_recursion(m, n);
    cout << power(m, n);
}