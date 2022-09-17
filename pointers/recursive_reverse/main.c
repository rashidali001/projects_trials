#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
char *cut(char *src, int len)
{
    int index;
    if (len == 0)
    {
        exit(1);
    }

    for(index = 0;index < len; index++)
    {
        if (index == (len - 1))
        {
            printf("%c",src[index]);
        }
    }
    cut(src, len-1);
}
void _print_rev_recursion(char *s)
{
    int len = strlen(s);
    cut(s,len);
}
int main()
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}
