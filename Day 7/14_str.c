#include <stdio.h>
#include <string.h>
int main()
{
    char first_name[] = "John";
    char last_name[] = "Doe";
    char another_name[] = "Johen_Doe";

    printf("lenght of first name: %lu\n", strlen(first_name));
    printf("full name: %s\n", strcat(first_name, last_name));
    printf("%d \n ", strcmp(first_name, another_name));
    if (strcmp(first_name, another_name) == 0)
    {
        printf("Both Strings are equal\n");
    }
    else
    {
        printf("Both Strings are not equal\n");
    }
}