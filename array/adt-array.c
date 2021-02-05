#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int array[20];
    int size;
    int length;
};

void display(struct Array arr)
{
    printf("\n");
    for (int i = 0; i < arr.length; i++)
        printf("%d\t", arr.array[i]);
}

void append(struct Array *arr, int element)
{
    if (arr->length < arr->size)
        arr->array[arr->length++] = element;
}

void insert(struct Array *arr, int position, int element)
{
    if (position <= arr->length && position >= 0)
    {
        for (int i = arr->length; i > position; i--)
            arr->array[i] = arr->array[i - 1];

        arr->array[position] = element;
        arr->length++;
    }
}
int delete (struct Array *arr, int position)
{
    int deleted_element = 0;
    if (position < arr->length && position >= 0)
    {
        deleted_element = arr->array[position];
        for (int i = position; i < arr->length - 1; i++)
            arr->array[i] = arr->array[i + 1];

        arr->length--;
    }
    return deleted_element;
}

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int linear_search(struct Array *arr, int element)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (element == arr->array[i])
        {
            swap(&arr->array[i], &arr->array[i - 1]);
            return i - 1;
        }
    }
    return -1;
}

int binary_search(struct Array *arr, int element)
{
    int mid;
    int lower = 0;
    int higher = arr->length - 1;

    while (lower <= higher)
    {
        mid = (lower + higher) / 2;

        if (arr->array[mid] == element)
            return mid;
        else if (arr->array[mid] < element)
            lower = mid + 1;
        else
            higher = mid - 1;
    }
    return -1;
}

int get(struct Array arr, int position)
{
    if (position < arr.length && position >= 0)
        return arr.array[position];
}

int set(struct Array *arr, int position, int element)
{
    if (position < arr->length && position >= 0)
        arr->array[position] = element;
}

int max(struct Array arr)
{
    int max = arr.array[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.array[i] > max)
            max = arr.array[i];
    }
    return max;
}

int min(struct Array arr)
{
    int min = arr.array[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.array[i] < min)
            min = arr.array[i];
    }
    return min;
}

int sum(struct Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
        sum += arr.array[i];
    return sum;
}

float avg(struct Array arr)
{
    return (float)sum(arr) / arr.length;
}

void reverse(struct Array *arr)
{
    int temp;
    for (int i = 0, j = arr->length - 1; i < j; i++, j--)
    {
        swap(&arr->array[i], &arr->array[j]);
    }
}

void left_swift(struct Array *arr)
{
    for (int i = 0; i < arr->length - 1; i++)
    {
        arr->array[i] = arr->array[i + 1];
    }
    arr->length--;
}

void left_rotation(struct Array *arr)
{
    int move_to_last = arr->array[0];
    for (int i = 0; i < arr->length - 1; i++)
    {
        arr->array[i] = arr->array[i + 1];
    }
    arr->array[arr->length - 1] = move_to_last;
}

void right_swift(struct Array *arr)
{
    for (int i = arr->length; i > 0; i--)
    {
        arr->array[i] = arr->array[i - 1];
    }
    arr->array[0] = 0;
    arr->length++;
}

void right_rotation(struct Array *arr)
{
    int move_to_first = arr->array[arr->length - 1];
    for (int i = arr->length - 1; i > 0; i--)
    {
        arr->array[i] = arr->array[i - 1];
    }
    arr->array[0] = move_to_first;
}

void insert_in_sorted(struct Array *arr, int element)
{
    int i = arr->length - 1;
    if (arr->length > arr->size)
    {
        while (i >= 0 && arr->array[i] > element)
        {
            arr->array[i + 1] = arr->array[i];
            i--;
        }
        arr->array[i + 1] = element;
        arr->length++;
    }
}

int is_sorted(struct Array arr)
{
    for (int i = 0; i < arr.length - 2; i++)
    {
        if (arr.array[i] > arr.array[i + 1])
            return 0;
    }
    return 1;
}

void negative_positive(struct Array *arr)
{
    int i = 0;
    int j = arr->length - 1;
    while (i < j)
    {
        while (arr->array[i] < 0)
            i++;
        while (arr->array[j] >= 0)
            j--;
        if (i < j)
            swap(&arr->array[i], &arr->array[j]);
    }
}

struct Array *merge(struct Array arr, struct Array arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr.length && j < arr2.length)
    {
        if (arr.array[i] < arr2.array[j])
            arr3->array[k++] = arr.array[i++];
        else
            arr3->array[k++] = arr2.array[j++];
    }
    for (; i < arr.length; i++)
        arr3->array[k++] = arr.array[i++];
    for (; j < arr2.length; j++)
        arr3->array[k++] = arr2.array[j++];

    arr3->length = arr.length + arr2.length;
    arr3->size = arr.size + arr2.size;

    return arr3;
}

struct Array *set_union(struct Array arr, struct Array arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr.length && j < arr2.length)
    {
        if (arr.array[i] == arr2.array[j])
        {
            arr3->array[k++] = arr.array[i++];
            j++;
        }
        else if (arr.array[i] < arr2.array[j])
            arr3->array[k++] = arr.array[i++];
        else
            arr3->array[k++] = arr2.array[j++];
    }
    for (; i < arr.length; i++)
        arr3->array[k++] = arr.array[i++];
    for (; j < arr2.length; j++)
        arr3->array[k++] = arr2.array[j++];

    arr3->length = k;
    arr3->size = arr.size + arr2.size;

    return arr3;
}

struct Array *set_intersection(struct Array arr, struct Array arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr.length && j < arr2.length)
    {
        if (arr.array[i] == arr2.array[j])
        {
            arr3->array[k++] = arr.array[i++];
            j++;
        }
        else if (arr.array[i] < arr2.array[j])
            i++;
        else
            j++;
    }

    arr3->length = k;
    arr3->size = arr.size + arr2.size;

    return arr3;
}

struct Array *set_difference(struct Array arr, struct Array arr2)
{
    int i = 0, j = 0, k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr.length && j < arr2.length)
    {
        if (arr.array[i] == arr2.array[j])
        {
            i++;
            j++;
        }
        else if (arr.array[i] < arr2.array[j])
            arr3->array[k++] = arr.array[i++];
        else
            j++;
        ;
    }
    for (; i < arr.length; i++)
        arr3->array[k++] = arr.array[i++];

    arr3->length = k;
    arr3->size = arr.size + arr2.size;

    return arr3;
}

int main()
{
    struct Array arr = {{2, 4, 5, 6, 8, 10, 15}, 20, 7};
    struct Array arr2 = {{1, 4, 8, 10, 12}, 10, 5};
    struct Array *arr3;

    // arr3 = merge(arr, arr2);
    // arr3 = set_union(arr, arr2);
    arr3 = set_difference(arr, arr2);

    display(*arr3);
    // append(&arr, 11);
    // display(arr);
    // insert(&arr, 6, 15);
    // display(arr);
    // printf("\nElement is %dth position", binary_search(&arr, 6));
    // printf("\nElement is %d", get(arr, 4));
    // printf("\nElement is %d", delete(&arr, 4));
    // printf("\nElement is %dth position", linear_search(&arr, 5));
    // printf("\nMaximum is %d", max(arr));
    // printf("\nMinimum is %d", min(arr));
    // printf("\nSum is %d", sum(arr));
    // printf("\nAvg is %.2f", avg(arr));
    // set(&arr, 1, 3);
    // reverse(&arr);
    // left_swift(&arr);
    // left_rotation(&arr);
    // right_rotation(&arr);
    // right_swift(&arr);
    // insert_in_sorted(&arr, 9);
    // printf("\nArray is sorted %d", is_sorted(arr));
    // negative_positive(&arr);

    return 0;
}