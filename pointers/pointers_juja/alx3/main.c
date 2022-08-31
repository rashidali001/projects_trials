#include <stdio.h>

int _strlen(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++);
    return i;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
