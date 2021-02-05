#include <iostream>
using namespace std;

int main()
{
    char name[] = "Akshit";
    char name2[] = "Akshit";
    int i, j;
    for (i = 0, j = 0; name[i] != '\0' && name[j] != '\0'; i++, j++)
    {
        if (name[i] != name2[j])
            break;
    }
    if (name[i] == name2[j])
        cout << "equal";
    else if (name[i] > name2[j])
        cout << "bigger";
    else
        cout << "smaller";
}
