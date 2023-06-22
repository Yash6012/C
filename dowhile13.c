#include <stdio.h>

int main(void)
{
    int num, i = 0;
    printf("Program to print numbers\n");
    printf("Enter the number :\n");
    scanf("%d", &num);
    do
    {
        printf("\n%d", i + 1);
        i += 1;
    } while (i < num);
}