#include <iostream>
using namespace std;

int main()
{
    // char temp[] = {'A', 'k', 's', 'h', 'i', 't', '\0'};
    // printf("%c", temp[10]);
    char temp[10] = "Akshit";
    printf("%s\n", temp);
    for (int i = 0; i < 10; i++)
    {
        printf("%c", temp[i]);
    }

    char const *s = "akshit mithaiwala";
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
    }
    cout << i;

    return 0;
}