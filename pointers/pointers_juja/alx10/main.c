#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strcpy(char *dest, char *src)
{
    strcpy(dest, src);
    return dest;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
