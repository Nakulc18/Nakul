#include <stdio.h>
int main()
{
    int a = 1000;
    int *p = &a;
    // value of a
    printf("Value of a: %d \n", a);
    printf("Value of a using pointer: %d \n", *p);
    printf("1. Value of ptr %d \n", *(*(&p)));
    printf("2. Value of ptr  using a : %d \n", *(&a));
    printf("3. Value of ptr  using a : %d \n", *(&(*((&a)))));
    printf("\n");

    *p = 2000;
    // changing the value of a  variable using pointer
    printf("After changing value using pointer:\n");
    printf("Value of a: %d \n", a);
    printf("Value of a using pointer: %d \n", *p);
    printf("\n");

    // value of p
    printf("1. Address of a: %p \n", &a);
    printf("2. Address of p: %p \n", p);
    printf("3. Address of p using a : %p \n", *(&p));
    printf("4. Address of p using a : %p \n", &(*(&a)));
    printf("4. Address of p using a : %p \n", &(*(&a)));
}