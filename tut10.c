#include <stdio.h>

int main()
{
    int a;
    printf("Program to give information regarding your age");
    printf("\nEnter your age");
    scanf("%d", &a);
    
    printf("You entered %d as your age.\n", a);
    
    if (a >= 18)
    {   
        printf("You can vote");
    }

    else if (a <= 5)
    {
        printf("You are Adolsence");
    }
    
    else
    {
        printf("You are not elegible to vote ");
    }
    

    return 0;
}
