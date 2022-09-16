#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}
void reverse_array(int *a, int n)
{
    int index = 0;
    int size = n;
    size--;
    int *p;
    p = (int *)malloc(sizeof(int) * n);

    while (index < n)
    {
        p[index] = a[size];
        size--;
        index++;
    }
    index =0;

    while (index < n)
    {
      a[index] = p[index];
      index++;
    }
    free(p);
}
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
