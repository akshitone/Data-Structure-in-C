#include <iostream>
using namespace std;

int x = 0;
int fun(int n)
{
    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}

int main()
{
    int x = 5;
    int res = fun(x);
    cout << res;
}