#include <iostream>
using namespace std;

void fun(int n)
{
    static int len = n + 1;
    if (n > 0)
    {
        cout << n << "\t";
        fun(n - 1);
        if (n + 1 != len)
            cout << n + 1 << "\t";
    }
}

int main()
{
    int x = 5;
    fun(x);
}