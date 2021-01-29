#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *rec, int length, int breadth)
{
    rec->length = length;
    rec->breadth = breadth;
}

int area(struct Rectangle rec)
{
    return rec.length * rec.breadth;
}

void change_length(struct Rectangle *rec, int length)
{
    rec->length = length;
}

int main()
{
    struct Rectangle rec;
    initialize(&rec, 10, 5);
    printf("%d\n", area(rec));
    change_length(&rec, 20);
    printf("%d\n", area(rec));
}