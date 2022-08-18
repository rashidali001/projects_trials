#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str);

char *_strdup(char *str)
{
    char *cpy;
    int size = 0;
    int i = 0;
    int j = 0;
    if (str == NULL)
        return NULL;
    while (str[i] != '\0')
    {
        i++;
        size++;
    }
    cpy = malloc(sizeof(char) * size);
    if (cpy == NULL)
        return (NULL);
    while(str[j] != '\0')
    {
        cpy[j] = str[j];
        j++;
    }

    return cpy;
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
