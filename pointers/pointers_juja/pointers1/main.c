#include <stdio.h>
#include <stdlib.h>

int main()
{
    int two_dim[5][3] = {{32,33,34}, {35,36,37}, {38,39,40}, {41,42,43}, {44,45,46}};
    int row, column;

    printf("\tPrinting all the values of two_dim:\n");

    for (row = 0; row < 5; row++)
    {
        for (column = 0; column < 3; column++)
        {
            printf("Value of two_dim[%d][%d] is %d\n", row, column, two_dim[row][column]);
        }
    }

    printf("\tEnd of printing values of two_dim\n");
    return 0;
}
