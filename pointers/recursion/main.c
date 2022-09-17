#include <stdio.h>
#include <stdlib.h>
void _puts_recursion(char *src)
{
    printf("%s", src);
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
