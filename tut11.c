# include <stdio.h>

int main()
{
    int age, marks;
    printf("proggram to see a particular age\n");
    printf("Enter your age\n");
    scanf("%d", &age);
    printf("Enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 10:
        printf("The age is 10\n");
        switch (marks)
        {
        case 90:
            printf("You scored 90");
            break;
        
        default:
            break;
        }
        break;

    case 20:
        printf("The age is 20\n");
        switch (marks)
        {
        case 90:
            printf("You scored 90");
            break;
        
        default:
            break;
        }
        break;
        
    case 30:
        printf("The age is 30");
        break;
    
    default:
        printf("The age is nothing to be shown");
    }
    return 0;
}
