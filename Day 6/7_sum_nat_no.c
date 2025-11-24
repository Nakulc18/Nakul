#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    sum = (n * (n + 1)) / 2;
    printf("Sum of Natural Numbers is: %d \n", sum);
}