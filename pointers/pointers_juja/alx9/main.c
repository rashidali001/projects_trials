#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if (i == (n-1))
        {
            printf("%d",*(a + i));
            continue;
        }
        printf("%d, ",*(a + i));
    }
}
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 4);
    return (0);
}
