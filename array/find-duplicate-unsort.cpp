#include <iostream>
using namespace std;
int main()
{
    int last_duplicate = 0;
    int arr[10] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int low = 2, high = 8;
    int h[high + 1] = {0};
    for (int i = 0; i < 10; i++)
    {
        h[arr[i]]++;
    }
    for (int i = low; i <= high; i++)
    {
        if (h[i] > 1)
        {
            cout << i << " count: " << h[i] << endl;
        }
    }
}