#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n << "\t";
        fun(n - 1);
        cout << n << "\t";
    }
}

int main()
{
    int x = 5;
    fun(x);
}