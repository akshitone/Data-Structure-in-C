#include <iostream>
using namespace std;

int main()
{
    char a[] = "akshitmithaiwala";
    int hash[26] = {0};

    for (int i = 0; a[i] != '\0'; i++)
    {
        hash[a[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > 1)
        {
            cout << char(i + 97) << "\t" << hash[i] << endl;
        }
    }
}