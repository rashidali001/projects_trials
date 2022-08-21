#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = { 12, 12, 14, 90, 14, 14, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d",sizeof(arr));
    return 0;
}
