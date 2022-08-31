#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *text= malloc(sizeof(char) * 3);
    text[0] =  'A';
    text[1] =  'B';
    text[2] =  'C';

    printf("%s",text);
    return 0;
}
