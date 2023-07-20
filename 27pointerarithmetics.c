# include <stdio.h>

int main(void)
{
    printf("Examples of Pointer Arithmetic\n");
    int arr[5] = {1, 2, 3, 4, 5};
    // Printing by default approach
    printf("The value of 0 index is %x\n", arr[0]);
    // Printing by using dereference approach
    printf("The value of 1 index is %x\n", *(arr));
    // Printing by using dereference of address 
    printf("The value of 2 index is %x\n", *(&arr[0]));
    
}