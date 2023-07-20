#include <stdio.h>

int main(void)
{
    // Example of 1-D array
    int marks[4];

    // Taking input from user using for loop
    // Assigning the value to marks array
   
    printf("Program to input marks of students in array\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Marks of Student %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Printing the values assigned at each address of array
    for (int i = 0; i < 5; i++)
    {
        printf("The marks scored by Student %d is %d \n", i + 1, marks[i]);
    }

    printf("\n\n");
    // Example of 2-D array
    // Initaializing a matrix of 3 X 3 size
    int identity[3][3] = {{1, 0, 0},
                          {0, 1, 0},
                          {0, 0, 1}};
    
    // Printig the matrix
    printf("Printing the 2-D Array as matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d, ", identity[i][j]);
        }
        printf("\n");
    }
}