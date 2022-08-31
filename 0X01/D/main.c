#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    for (a = 0; a <= 9; a++)
    {
        for (b = 0; b <= 9; b++)
        {
            if (a != b && a<=b)
                printf("%d%d ", a, b);
        }
    }
    return 0;
}
