#include <stdio.h>
#include <stdlib.h>

int getaverage( int arr[], int size);
int main()
{
    int balance[]={100, 375, 573, 825, 374};
    int size = 5;
    int avg;

    avg = getaverage(balance , size);

    printf("\tAverage of the initialized numbers is:\n");
    printf("\tAverage: %d\n", avg);

    return 0;
}
int getaverage( int arr[], int size)
{
    int sum = 0;
    int i;

    for (i = 0; i < size; i++)
        sum += arr[i];

    return sum / size;
}
