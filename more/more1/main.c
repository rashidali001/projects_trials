#include <stdlib.h>
#include <stdio.h>

char *_strcat(char *dest, char *src)
{

    int size = 0;
    int i = 0;
    while(dest[i] != '\0')
    {
        size++;
        i++;
    }
    i = 0;
    while(src[i] != '\0')
    {
        dest[size] = src[i];
        size++;
        i++;
    }
    return dest;
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
