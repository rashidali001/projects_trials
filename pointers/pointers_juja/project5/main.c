#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ages[5] = {22,25,26,31,55};
    ages[1] = 26;
    int i;
    for(i = 0;i < 5; i++)
    {
        printf("%d\n",ages[i]);
    }
    return 0;
}
