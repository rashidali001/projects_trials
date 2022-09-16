#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *_strncpy(char *dest, char *src, int n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code", 90);
    printf("%s\n", s1);
    printf("%s\n", ptr);

    return (0);
}
char *_strncpy(char *dest, char *src, int n)
{
    int index;
    int len = strlen(dest);

    for(index= 0; index<n && src[index] != '\0'; index++)
       {
           if(src[index] == '\0')
                break;
            dest[index] = src[index];
       }
       if (index < n)
       {
            while(index < len)
             {
               dest[index] = '\0';
                  index++;
             }
       }




    return dest;
}
