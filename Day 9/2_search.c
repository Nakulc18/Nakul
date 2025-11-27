#include <stdio.h>
int main()
{
    int arr[50], pos = 0, ele = 0, size = 0;
    printf("Enter the size of array: \n");
    scanf("%d", &size);
    if (size > 50)
    {
        printf("Array out of bound\n");
    }
    else
    {
        // to insert
        printf("Enter elements : \n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
    }
    printf("Enter a element to search: \n");
    scanf("%d", &ele);
    // linear search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            printf("Index is: %d\n", i);
            break;
        }
    }
}