#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int roll_num;
    int marks;
} st1, st2;
int main()
{
    strcpy(st1.name, "ROGER");
    st1.roll_num = 18;
    st1.marks = 101;
    printf("Student Details: \n");
    printf("Name: %s \n", st1.name);
    printf("Roll Number: %d \n", st1.roll_num);
    printf("Marks: %d \n", st1.marks);

    strcpy(st2.name, "EMMA");
    st2.roll_num = 25;
    st2.marks = 95;
    printf("\nStudent Details: \n");
    printf("Name: %s \n", st2.name);
    printf("Roll Number: %d \n", st2.roll_num);
    printf("Marks: %d \n", st2.marks);
}