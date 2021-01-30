#include <iostream>
using namespace std;

double taylor(int x, int n)
{
    double pow = 1, fact = 1, answer = 1;
    for (double i = 1; i <= n; i++)
    {
        pow *= x;
        fact *= i;
        answer = answer + (pow / fact);
    }
    return answer;
}

double fast_taylor(int x, int n)
{
    double answer = 1;
    while (n > 0)
    {
        answer = 1 + (x * answer) / n;
        n--;
    }
    return answer;
}

double taylor_rec(int x, int n)
{
    static double pow = 1, fact = 1;
    double result;
    if (n == 0)
        return 1;
    else
    {
        result = taylor_rec(x, n - 1);
        pow = pow * x;
        fact = fact * n;
        return result + (pow / fact);
    }
}

double fast_taylor_rec(int x, int n)
{
    static double result = 1;
    if (n == 0)
        return result;
    result = 1 + (x * result) / n;
    return fast_taylor_rec(x, n - 1);
}

int main()
{
    cout << taylor(3, 10) << endl;
    cout << fast_taylor(3, 10) << endl;
    cout << fast_taylor_rec(3, 10) << endl;
    cout << taylor_rec(3, 10);
}