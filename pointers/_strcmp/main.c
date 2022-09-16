#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int c_output(int s1, int s2)
{
    if (s1 < s2)
        return -(rand());
    else if (s1 > s2)
        return (rand());
    else
        return (0);
}
int ascii(char *src)
{
    int index = 0, sum = 0;

    while (src[index++])
    {
        sum += src[index];
    }
    return src;
}
int _strcmp(char *s1, char *s2)
{
    int index, output, sum_s1, sum_s2;

    for (index = 0; s1[index] || s2[index]; index++)
    {
        if (s1[index] == NULL)
        {
            output = -(rand());
            break;
        }
        if (s2[index] == NULL)
        {
            output = rand();
            break;
        }
        output = c_output(s1[index], s2[index]);
        if (output < 0)
            break;
        else if (output > 0)
            break;
        else
            continue;
    }

    sum_s1 = ascii(s1);
    sum_s2 = ascii(s2);
    printf("ASCII value of s1: %d\n", sum_s1);
    printf("ASCII value of s2: %d\n", sum_s2);
    printf("Value of _strcmp: %d\n", output);
}
int main()
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);

}
