#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("sum=%d\n", a + b);
    printf("prod=%d\n", a * b);
    printf("diff=%d\n", a / b);
    printf("sub=%d\n", a - b);
}