#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int roll_num;
};
int main()
{
    struct student st1;
    printf("Enter a Name: \n");
    scanf("%s", st1.name);
    printf("Enter a Roll Number: \n");
    scanf("%d", &st1.roll_num);

    printf("Student Details: \n");
    printf("Name: %s \n", st1.name);
    printf("Roll Number: %d \n", st1.roll_num);
}