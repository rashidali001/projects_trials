#include <stdio.h>
void print_rev(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++);
    i--;
    while (i >= 0)
    {
        printf("%c",s[i]);
        i--;
    }
    printf("\n");
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
