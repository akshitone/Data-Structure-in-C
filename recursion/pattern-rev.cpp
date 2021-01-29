#include <iostream>
using namespace std;

void fun(int n)
{
    if (n <= 5)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "* ";
        }
        cout << endl;
        fun(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int x = 1;
    fun(x);
}