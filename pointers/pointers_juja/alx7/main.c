#include <stdio.h>
#include <stdlib.h>

void puts2(char *str)
{
  printf("%s",str);
  printf("\n");

}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
