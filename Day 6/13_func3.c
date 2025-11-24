#include <stdio.h>
void div(int a, int b);
int main()
{
    div(36, 2);
    div(32, 2);
}
void div(int a, int b)
{
    printf("Division is: %d \n", a / b);
}