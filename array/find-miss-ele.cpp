#include <iostream>
using namespace std;
int main()
{
    int res = 0;
    int sum = (22 * (22 + 1) / 2) - (10 * (10 + 1) / 2);
    int arr[11] = {11, 12, 13, 14, 15, 16, 18, 19, 20, 21, 22};
    for (int i = 0; i < 11; i++)
    {
        res += arr[i];
    }
    cout << sum - res;
}