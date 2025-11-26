#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int roll_num;
    int marks;
} st1;
int main()
{
    st1.roll_num = 18;
    st1.marks = 101;
    printf("Student Details: \n");
    printf("Name:");
    scanf("%s", st1.name);
    printf("Name: %s \n", st1.name);
    printf("Roll Number: %d \n", st1.roll_num);
    printf("Marks: %d \n", st1.marks);
}