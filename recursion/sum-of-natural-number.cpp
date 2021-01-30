#include <iostream>
using namespace std;

int sum_of_natural_n_number(int n)
{
    return n * (n + 1) / 2;
}

int recursion(int n)
{
    if (n == 0)
        return 0;
    else
        return recursion(n - 1) + n;
}

int main()
{
    int n = 7;
    cout << sum_of_natural_n_number(n) << endl;
    cout << recursion(n);
}