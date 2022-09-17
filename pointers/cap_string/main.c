#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *cap_string(char *src)
{
    int index;

    for (index = 0; src[index]; index++)
    {
        if(index == 0)
        {
            if(src[index] >= 'a' && src[index] <= 'z')
                src[index] = src[index] - 32;
        }
        if(index > 0)
        {
            if(src[index -1] == ' ' || src[index-1] == ',' || src[index-1] == '\n' || src[index-1] == '\t' || src[index-1] == '.')
            {
                if (src[index] >= 'a' && src[index] <= 'z')
                    src[index] = src[index] - 32;
            }
        }

    }
    return src;
}

int main()
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    printf("%s", str);
    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
