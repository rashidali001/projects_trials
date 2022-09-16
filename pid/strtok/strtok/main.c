#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[] = "Hello Motherfucker";
    char *token;
    char *pptr;
    int i = 1;

    token = strtok(str , " ");
    pptr = token;
    printf("%s\n", pptr);

    while (token != NULL)
    {
        if( i == 1)
        {

        }
         printf("%s\n", token);
         token = strtok(NULL, " ");
         i++;
    }
    printf("%s\n");

    return 0;
}
