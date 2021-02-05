#include <iostream>
using namespace std;
int main()
{
    int arr[11] = {11, 13, 14, 15, 16, 19, 20, 22, 23, 25, 26};
    int low = 11;
    int high = 25;
    int n = 11;
    int diff = low - 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << i + diff << "\t";
                diff++;
            }
        }
    }
}