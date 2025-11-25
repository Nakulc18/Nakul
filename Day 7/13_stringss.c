#include <stdio.h>
int main()
{
    char user_input[100];
    printf("Enter a string: \n");
    fgets(user_input, 100, stdin);
    printf("You entered: %s", user_input);
}