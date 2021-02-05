#include <iostream>
using namespace std;
int main()
{
    int arr[11] = {4, 5, 3, 8, 2, 1, 9, 6, 12, 11};
    int H[11] = {0};
    int low = 1;
    int high = 12;
    int n = 11;
    for (int i = 0; i < n; i++)
    {
        H[arr[i]]++;
    }
    for (int i = low; i < high; i++)
    {
        if (H[i] == 0)
            cout << i << "\t";
    }
}