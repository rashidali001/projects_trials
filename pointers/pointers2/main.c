#include <stdio.h>

int main(void)
{
    int var1[]= {2,4,5,6,7};
    int *pointer;

    pointer = var1;
    pointer++;



    printf("Value of the pointer: %x\n", *pointer);
    printf("Address of variable %x\n",&var1);
    printf("Address of pointer %x\n",&pointer);
    return 0;
}
