#include <iostream>
using namespace std;

void sum_of_natural_n_number(int n)
{
    int a = 0, c;
    int b = 1;
    cout << a << "\t";
    cout << b << "\t";
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        cout << c << "\t";
        a = b;
        b = c;
    }
}

int recursion(int n)
{
    if (n == 0)
        return 0;
    return recursion(n - 1) + n;
}

int main()
{
    int n = 7;
    sum_of_natural_n_number(n);
    cout << recursion(n);
}