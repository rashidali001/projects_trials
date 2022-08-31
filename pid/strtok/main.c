#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = "Geeksforgeeks";
    char *token;

    token = strtok(str,"");\
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(0 , "");
    }
    return 0;
}
