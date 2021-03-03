#include <iostream>
using namespace std;

int main()
{
    char a[] = "decimal";
    char b[] = "medical";
    int hash[26] = {0};
    int i, j;
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    for (j = 0; b[j] != '\0'; j++)
    {
    }

    if (i == j)
    {
        for (int k = 0; a[k] != '\0'; k++)
        {
            hash[a[k] - 97]++;
        }
        for (int k = 0; b[k] != '\0'; k++)
        {
            hash[b[k] - 97]--;
            if (hash[b[k] - 97] < -1)
            {
                cout << "Not anagram" << endl;
                break;
            }
            if (b[k] == '\0')
            {
                cout << "Anagram" << endl;
            }
        }
    }
}