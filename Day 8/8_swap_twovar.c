#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int *ptr = &a;
    int *ptr2 = &b;
    printf("before swapping: %d %d \n", a, b);
    // swapping using pointers
    int temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
    printf("after swapping: %d %d \n", a, b);
}