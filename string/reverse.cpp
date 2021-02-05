#include <iostream>
using namespace std;

int main()
{
    char name[] = "Akshit Mithaiwala";
    char temp;
    int j;
    cout << name << endl;
    for (j = 0; name[j] != '\0'; j++)
    {
    }
    j--;
    for (int i = 0; i < j; i++, j--)
    {
        temp = name[i];
        name[i] = name[j];
        name[j] = temp;
    }

    // for (int j = i; j >= 0; j--)
    // {
    //     cout << name[j];
    // }
    cout << name;
}