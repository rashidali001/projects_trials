#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    str = malloc(sizeof(char)*3);
    str[0] = 'O';
    str[1] = 'K';
    str[2] = '!';
    printf("%s",str);
    return 0;
}
