#include <stdio.h>
#include <stdlib.h>

void puts_half(char *str)
{
    int size, n;
    for(size = 1; str[size] != '\0'; size++);
    if ((size%2) == 0)
        n = size/2;
    else
        n = (size - 1) / 2;

    printf("Value of n: %d\n",n);
    printf("Printing half of the string\n");
    while(str[n] != '\0')
    {
        printf("%c",str[n]);
        n++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "123456789";
    puts_half(str);
    return (0);
}
