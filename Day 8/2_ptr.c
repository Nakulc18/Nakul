#include <stdio.h>
int main()
{
    int num = 100;
    int *ptr = &num;
    printf("Value of num: %d \n", num);
    printf("Value of num using pointer: %d \n", *ptr);
    printf("1. Value of ptr %p \n", ptr);
    printf("2. Value of ptr  using num : %p \n", &num);
}