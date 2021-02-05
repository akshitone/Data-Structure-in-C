#include <iostream>
using namespace std;
int main()
{
    int last_duplicate = 0;
    int arr[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == arr[i + 1] && last_duplicate != arr[i])
        {
            last_duplicate = arr[i];
            cout << last_duplicate << '\t';
        }
    }

    int j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            last_duplicate = arr[i];
            j = i + 1;
            while (arr[j] == arr[i])
                j++;
            cout << "\n"
                 << last_duplicate << " count: " << j - i;
            i = j - 1;
        }
    }
}