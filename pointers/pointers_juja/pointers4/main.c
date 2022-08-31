#include <stdio.h>
#include <stdlib.h>
/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
   *cc = 'o'; // changing value of char c in main function by call of reference method
   ccc = 'l'; // changing the value of the local variable ccc to 'l'
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("\n\tBefore calling modify_my_char\n");
   printf("Address of c: %p\n",&c);
   printf("Address of p: %p\n",&p);
   printf("Value of p: %p\n",p);
   printf("Value contained in address p: %d\n",*p);
   modif_my_char_var(p, c);
   printf("\n\tAfter calling modify_my_char\n");
   printf("Value of c: %d\n",c);
   return (0);
}
