#include <stdio.h>

// void swap(int &x, int &y) pass by references. not in C
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    // pass by value
    // temp = x;
    // x = y;
    // y = temp;
}

int fun_arr(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        printf("%d \t", a[i]);
    }
    return sum;
}

int main()
{
    int A[5] = {5, 7, 3, 9, 2};
    printf("\nSum is %d", fun_arr(A, 5));
    int a, b;
    a = 10;
    b = 20;
    swap(&a, &b);
    // swap(a, b); pass by value
    printf("\n%d, %d\n", a, b);
    return 0;
}