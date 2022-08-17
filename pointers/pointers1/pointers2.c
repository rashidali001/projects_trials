#include <stdio.h>

int main(void)
{
    int var1 = 90;
    int *pointer;

    pointer = &var1;
    printf("Address that the pointer stores: %x", pointer);
    printf("Value of the address the pointer stores: %d", *pointer);
    return 0;
}
