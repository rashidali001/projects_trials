#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int len_loop(char *src, int len)
{
    if(src[len])
        exit;

    return len + len_loop(src,len++);
}
int _strlen_recursion(char *s)
{
    int len;
    len = len_loop(s,1);


}
int main()
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
