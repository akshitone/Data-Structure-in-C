#include <iostream>
using namespace std;

void honoi(int n, int a, int b, int c)
{
    if (n > 0)
    {
        honoi(n - 1, a, c, b);
        cout << a << " to " << c << endl;
        honoi(n - 1, b, a, c);
    }
}

int main()
{
    honoi(3, 1, 2, 3);
    return 0;
}