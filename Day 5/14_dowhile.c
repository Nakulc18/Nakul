#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);
    int i = 1;
    do
    {
        printf("%d \n ", i);
        i++;
    } while (i <= n);
}
