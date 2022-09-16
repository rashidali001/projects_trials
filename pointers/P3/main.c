#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char  *_strcat(char *dest, char *src)
{
    int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);

}

int main()
{
    char *out;
    out = _strcat("hello ", "world");
    printf("%s\n", out);

   return (0);
}
