#include <stdio.h>
#include <stdlib.h>
int *getarray();
int main()
{
    getarray();
    return 0;
}
int *getarray()
{
   int *marks;
    int i;
    int size = 8;
    marks =malloc(sizeof(int) * size);

    printf("\tEnter marks:\n");
    for(i = 0; i < 8; i++)
    {
        scanf("%d", marks[i]);
    }
    printf("\tValue of marks in *getarray():\n");
    for (i = 0; i < 8; i++)
    {
        printf("array[%d] : %d\n", i, marks[i]);
    }
    return (0);

}
