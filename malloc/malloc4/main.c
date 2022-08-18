#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2);

char *str_concat(char *s1, char *s2)
{
    int size_s1 = 0;
    int size_s2 = 0;
    int i = 0, j = 0;
    int a = 0, b = 0;
    char *concat;
    if (s1 == NULL)
        s1[i] = '\0';
    if (s2 == NULL)
        s2[i] = '\0';
    if (s1 == NULL && s2 == NULL)
        return NULL;
    while(s1[i] != '\0')
    {
        size_s1++;
        i++;
    }
    while(s1[j] != '\0')
    {
        size_s2++;
        j++;
    }
    i = 0;
    j = 0;
    concat = malloc(sizeof(char)* (size_s1 + size_s2));
    if (concat == NULL)
        return (NULL);
    while (s1[i] != '\0')
    {
        concat[i] = s1[i];
        i++;
    }
   while(s2[j] != '\0')
   {
       concat[i] = s2[j];
       i++;
       j++;
   }
   return concat;






}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
