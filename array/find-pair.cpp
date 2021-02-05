#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int sum = 10;
    int h[sum] = {0};
    // for (int i = 0; i < 17; i++)
    // {
    //     if (arr[i] < 10)
    //     {
    //         if (h[sum - arr[i]] != 0)
    //         {
    //             cout << arr[i] << "\t" << sum - arr[i] << endl;
    //         }
    //         h[arr[i]]++;
    //     }
    // }

    int arr_s[10] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int i = 0, j = 9;
    while (i < j)
    {
        if (arr_s[i] + arr_s[j] == sum)
            cout << arr_s[i++] << "\t" << arr_s[j--] << endl;
        else if (arr_s[i] + arr_s[j] < sum)
            i++;
        else
            j--;
    }
}