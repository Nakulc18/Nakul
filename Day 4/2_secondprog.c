#include <stdio.h>
int main()
{
    int a, b, c, largest;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    printf("enter third number:");
    scanf("%d", &c);
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
    printf("largest=%d", largest);
    return 0;
}
