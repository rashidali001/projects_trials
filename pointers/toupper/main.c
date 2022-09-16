#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *string_toupper(char *src)
{
    int i;

    for (i = 0; src[i]; i++)
    {
        if ( src[i] >= 'a' && src[i] <= 'z')
            src[i] = src[i] - 32;
    }
    return (src);

}
int main()
{

    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);

}
