#include <iostream>
#include <stdio.h>
using namespace std;

class Array
{
private:
    int *array;
    int size;
    int length;
    void swap(int *a, int *b);

public:
    Array();
    Array(int size);
    void display();
    void append(int element);
    void insert(int position, int element);
    int deletee(int position);
    int linear_search(int element);
    int binary_search(int element);
    int get(int position);
    void set(int position, int element);
    int max();
    int min();
    int sum();
    float avg();
    void reverse();
    void left_swift();
    void left_rotation();
    void right_swift();
    void right_rotation();
    void insert_in_sorted(int element);
    int is_sorted();
    void negative_positive();
    Array *merge(Array arr2);
    Array *set_union(Array arr2);
    Array *set_intersection(Array arr2);
    Array *set_difference(Array arr2);
    ~Array();
};

Array::Array()
{
    size = 20;
    length = 0;
    array = new int[size];
}

Array::Array(int size)
{
    this->size = size;
    length = 0;
    array = new int[size];
}

Array::~Array()
{
    delete[] array;
}

void Array::display()
{
    cout << endl;
    for (int i = 0; i < length; i++)
        cout << array[i] << "\t";
}

void Array::append(int element)
{
    if (length < size)
        array[length++] = element;
}

void Array::insert(int position, int element)
{
    if (position <= length && position >= 0)
    {
        for (int i = length; i > position; i--)
            array[i] = array[i - 1];

        array[position] = element;
        length++;
    }
}

int Array::deletee(int position)
{
    int deleted_element = 0;
    if (position < length && position >= 0)
    {
        deleted_element = array[position];
        for (int i = position; i < length - 1; i++)
            array[i] = array[i + 1];

        length--;
    }
    return deleted_element;
}

void Array::swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int Array::linear_search(int element)
{
    for (int i = 0; i < length; i++)
    {
        if (element == array[i])
        {
            swap(&array[i], &array[i - 1]);
            return i - 1;
        }
    }
    return -1;
}

int Array::binary_search(int element)
{
    int mid;
    int lower = 0;
    int higher = length - 1;

    while (lower <= higher)
    {
        mid = (lower + higher) / 2;

        if (array[mid] == element)
            return mid;
        else if (array[mid] < element)
            lower = mid + 1;
        else
            higher = mid - 1;
    }
    return -1;
}

int Array::get(int position)
{
    if (position < length && position >= 0)
        return array[position];
    return -1;
}

void Array::set(int position, int element)
{
    if (position < length && position >= 0)
        array[position] = element;
}

int Array::max()
{
    int max = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int Array::min()
{
    int min = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

int Array::sum()
{
    int sum = 0;
    for (int i = 0; i < length; i++)
        sum += array[i];
    return sum;
}

float Array::avg()
{
    return (float)sum() / length;
}

void Array::reverse()
{
    int temp;
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        swap(&array[i], &array[j]);
    }
}

void Array::left_swift()
{
    for (int i = 0; i < length - 1; i++)
    {
        array[i] = array[i + 1];
    }
    length--;
}

void Array::left_rotation()
{
    int move_to_last = array[0];
    for (int i = 0; i < length - 1; i++)
    {
        array[i] = array[i + 1];
    }
    array[length - 1] = move_to_last;
}

void Array::right_swift()
{
    for (int i = length; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = 0;
    length++;
}

void Array::right_rotation()
{
    int move_to_first = array[length - 1];
    for (int i = length - 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = move_to_first;
}

void Array::insert_in_sorted(int element)
{
    int i = length - 1;
    if (length > size)
    {
        while (i >= 0 && array[i] > element)
        {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = element;
        length++;
    }
}

int Array::is_sorted()
{
    for (int i = 0; i < length - 2; i++)
    {
        if (array[i] > array[i + 1])
            return 0;
    }
    return 1;
}

void Array::negative_positive()
{
    int i = 0;
    int j = length - 1;
    while (i < j)
    {
        while (array[i] < 0)
            i++;
        while (array[j] >= 0)
            j--;
        if (i < j)
            swap(&array[i], &array[j]);
    }
}

Array *Array::merge(Array arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (array[i] < arr2.array[j])
            arr3->array[k++] = array[i++];
        else
            arr3->array[k++] = arr2.array[j++];
    }
    for (; i < length; i++)
        arr3->array[k++] = array[i++];
    for (; j < arr2.length; j++)
        arr3->array[k++] = arr2.array[j++];

    arr3->length = length + arr2.length;
    arr3->size = size + arr2.size;

    return arr3;
}

Array *Array::set_union(Array arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (array[i] == arr2.array[j])
        {
            arr3->array[k++] = array[i++];
            j++;
        }
        else if (array[i] < arr2.array[j])
            arr3->array[k++] = array[i++];
        else
            arr3->array[k++] = arr2.array[j++];
    }
    for (; i < length; i++)
        arr3->array[k++] = array[i++];
    for (; j < arr2.length; j++)
        arr3->array[k++] = arr2.array[j++];

    arr3->length = k;
    arr3->size = size + arr2.size;

    return arr3;
}

Array *Array::set_intersection(Array arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (array[i] == arr2.array[j])
        {
            arr3->array[k++] = array[i++];
            j++;
        }
        else if (array[i] < arr2.array[j])
            i++;
        else
            j++;
    }

    arr3->length = k;
    arr3->size = size + arr2.size;

    return arr3;
}

Array *Array::set_difference(Array arr2)
{
    int i = 0, j = 0, k = 0;
    Array *arr3 = new Array(length + arr2.length);

    while (i < length && j < arr2.length)
    {
        if (array[i] == arr2.array[j])
        {
            i++;
            j++;
        }
        else if (array[i] < arr2.array[j])
            arr3->array[k++] = array[i++];
        else
            j++;
        ;
    }
    for (; i < length; i++)
        arr3->array[k++] = array[i++];

    arr3->length = k;
    arr3->size = size + arr2.size;

    return arr3;
}

int main()
{
    Array *arr;
    int choice, size;
    int element, position;

    cout << "Enter size of an arary: ";
    cin >> size;

    arr = new Array(size);

    do
    {
        cout << "\n\nMenu\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Sum\n";
        cout << "5. Display\n";
        cout << "6.Exit\n";

        cout << "enter you choice ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter an element ";
            cin >> element;
            arr->append(element);
            break;

        case 2:
            cout << "Enter position ";
            cin >> position;
            element = arr->deletee(position);
            cout << "Deleted Element is" << element;
            break;

        case 3:
            cout << "Enter element to search";
            cin >> element;
            position = arr->linear_search(element);
            cout << "Element index " << position;
            break;

        case 4:
            cout << "Sum is " << arr->sum();
            break;

        case 5:
            arr->display();
        }
    } while (choice < 6);

    return 0;
}