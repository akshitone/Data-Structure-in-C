#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int *p; // declaration of pointer
    p = &a; // initialization of pointer
    printf("%d\n", a);
    printf("%d\n", *p);
    p = (int *)malloc(5 * sizeof(int)); // sizeof(int) = 2 bytes ---> in C++ p = new int[5]

    return 0;
}