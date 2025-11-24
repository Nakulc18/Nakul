#include <stdio.h>
void add();
int main()
{
    printf("Main Function \n");
    add();
    add();
    add();
}
void add()
{
    printf("Addition is:%d \n", (10 + 10));
}