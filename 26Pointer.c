# include <stdio.h>

int main(void)
{
    printf("Example of Pointers\n");
    int num = 23;
    int *p = &num;
    int *p2 = NULL; // Null pointer
    // value using variable
    printf("The value of num is %d\n", num);
    // Value using dereference operator
    printf("The value of num is %d\n", *p);
    printf("Address of num is %x\n", &num);
    printf("Address of num is %x\n", p);
    printf("Address of pointr is %x\n", &p);
    printf("This is a null pointer %d\n", p2);    
    printf("Address of null pointr is %x\n", &p2);
}