#include <stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
struct Student
{
    int rollno;
    char name[25];
    char dept[10];
};

int main()
{
    //struct using pointer
    struct Student viral = {235, "Viral", "ComHack"};
    struct Student *s = &viral;

    s->rollno = 43; // (*s).rollno = 43;
    printf("%d\n", viral.rollno);

    // struct using array
    struct Student student[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter student id:");
        scanf("%d", &student[i].rollno);
        printf("Enter student name:");
        scanf("%s", &student[i].name);
        printf("Enter student dept:");
        scanf("%s", &student[i].dept);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\n---%s---\n", student[i].name);
        printf("Id : %d\n", student[i].rollno);
        printf("Dept : %s\n", student[i].dept);
    }

    //struct using object
    struct Rectangle rec = {10, 5};
    struct Student akshit = {235, "Akshit", "ComSci"};

    printf("Area of rectangle is %d \n", rec.breadth * rec.length);
    printf("\n---Student---\n");
    printf("Id: %d \n", akshit.rollno);
    printf("Name: %s \n", akshit.name);
    printf("Dept: %s \n", akshit.dept);

    return 0;
}
