#include <stdio.h>
#include <stdlib.h>

void rev_string(char *s)
{
    int i = 0, j = 0, size;
    char *temp;
    while(s[i] != '\0')
    {
        i++;
    }
    size = i;
    i--;
    temp = (char *)malloc(sizeof(char) * size);
    while(j < 9)
    {
        temp[j] = s[i];
        j++;
        i--;
    }
    temp[j] = '\0';
    j = 0;
    while(temp[j] != '\0')
    {
        s[j] = temp[j];
        j++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
