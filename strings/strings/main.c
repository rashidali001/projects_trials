#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   int  len ;

   /* copy str1 into str3 */
   strcpy(str2, str1);
   printf("strcpy( str3, str1) :  %s\n", str2 );


    return 0;
}
