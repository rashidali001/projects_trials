#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
     int dest_len = 0;
     int index = 0;

     while(dest[index++])
        dest_len++;
        for (index= 0; index < n; index++)
            dest[dest_len++] = src[index];




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


    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
