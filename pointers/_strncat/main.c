#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n);
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
}
char *_strncat(char *dest, char *src, int n)
{

    int index = 0, dest_len = 0;

    while (dest[index])
    {
        dest_len++;
        index++;
    }
    for (index = 0; index < n; index++)
    {

        dest[dest_len] = src[index];
        dest_len++;
        if (src[index] == '\0')
            break;
    }
    return dest;
}
