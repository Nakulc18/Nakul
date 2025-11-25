#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter a Number: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array Elements: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d value is: %d \n", i, arr[i]);
    }
}