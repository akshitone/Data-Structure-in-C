#include <iostream>
using namespace std;

int main()
{
    char name[] = "AKSHIT";
    int k;
    for (k = 0; name[k] != '\0'; k++)
    {
    }

    char name2[k--];
    int i, j;
    for (i = 0, j = k; name[j] >= 0; i++, j--)
    {
        name2[i] = name[j];
    }
    name2[i] = '\0';

    cout << name << endl;
    cout << name2;
}