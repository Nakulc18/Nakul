#include <stdio.h>
void div(int a, int b);
int main()
{
    div(10, 20);
    div(3, 6);
}
void div(int a, int b)
{
    printf("Multiplication is: %d \n", a * b);
}