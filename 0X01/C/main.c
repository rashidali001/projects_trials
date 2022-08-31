#include <stdlib.h>
#include <time.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	    if (letter == 'q' || letter == 'e')
            continue;
	    printf("%c", letter);
	}
	return (0);
}
