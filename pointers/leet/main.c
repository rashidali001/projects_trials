#include <stdio.h>
#include <stdlib.h>

char *leet(char *src)
{
    int index;

    for (index = 0; src[index]; index++)
    {
        if (src[index] == 'a' || src[index] == 'A')
            src[index] = '4';

        if (src[index] == 'e' || src[index] == 'E')
            src[index] = '3';

        if (src[index] == 'o' || src[index] == 'O')
            src[index] = '0';

        if (src[index] == 't' || src[index] == 'T')
            src[index] = '7';

        if (src[index] == 'l' || src[index] == 'L')
            src[index] = '1';
    }
    return src;
}

int main()
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    printf("%s\n\n", s);
    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
