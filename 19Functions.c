# include <stdio.h>

// here a function is decalred so that compiler may not raise an error
// Function is definrd later in the code
int sum(int a, int b);

// Here we declare and define a function
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    
}

int main(void)
{
    printf("Tutorial of functions\n");
    int a, b, c, n;
    // just for fun
    printf("Enter the value of a :\n");
    scanf("%d", &a);
    printf("Enter the value of b :\n");
    scanf("%d", &b);
    // calling the sum function and assigning the value to c
    c = sum(a, b);
    printf("The sum of %d and %d is %d", a, b, c);
    printf("\nEnter the value of n :\n");
    scanf("%d", &n);
    // Calling the printstar function
    printstar(n);
}

// here the function is defined
int sum(int a, int b)
{
    return a + b;
}
