#include <iostream>
using namespace std;

int main()
{
    int words, vowels, number, specials, consonents;
    words = vowels = number = specials = consonents = 0;
    char name[] = "Akshit Mithaiwala 1234342 !@#$%^&*(";
    for (int i = 0; name[i] != '\0'; i++)
    {
        // if (name[i] == ' ')
        // {
        //     while (name[i + 1] == ' ')
        //         i++;
        //     words++;
        // }
        if (name[i] == ' ' && name[i + 1] != ' ')
            words++;
        else if (name[i] >= '0' && name[i] <= '9')
            number++;
        else if (name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U' || name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
            vowels++;
        else if ((name[i] >= 'a' and name[i] <= 'z') || (name[i] >= 'A' and name[i] <= 'Z'))
            consonents++;
        else
            specials++;
    }
    cout << "words: " << words + 1 << endl;
    cout << "number: " << number << endl;
    cout << "vowels: " << vowels << endl;
    cout << "consonents: " << consonents << endl;
    cout << "specials: " << specials << endl;

    return 0;
}