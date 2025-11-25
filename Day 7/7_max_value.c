#include <stdio.h>
int main()
{
    int max = 0, arr[5];
    printf("Enter a Number: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("maximum value is: %d \n ", max);
}