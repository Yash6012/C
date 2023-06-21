# include <stdio.h>

int main()
{
    int age;
    printf("proggram to see a particular age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 10:
        printf("The age is 10");
        break;

    case 20:
        printf("The age is 20");
        break;
        
    case 30:
        printf("The age is 30");
        break;
    
    default:
        printf("The age is nothing to be shown");
    }
    return 0;
}
