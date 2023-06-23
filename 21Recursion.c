# include <stdio.h>

// initializing a recursive function
int fact(int number)
{
    if (number == 1 || number == 0)
        return 1;
    else{
        return number * fact(number - 1);
    }
}

int main(void)
{
    int num;
    printf("Program to find the factorialof a number\n");
    printf("Entrer the number :\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d", num, fact(num));
}