#include <iostream>
using namespace std;

void recursion_fun(int n)
{
    if (n > 0)
    {
        cout << n << "\t";
        recursion_fun(n - 1);
    }
}
void while_fun(int n)
{
    while (n > 0)
    {
        cout << n << "\t";
        n--;
    }
}

int main()
{
    int x = 5;
    recursion_fun(x);
    cout << endl;
    while_fun(x);
}