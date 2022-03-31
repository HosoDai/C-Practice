#include <stdio.h>

int main(void)
{
    char str[256] = "SPAM";

    int i;

    for (i = 0; i < 10; i++)
    {
        printf("%s\n", str);
    }
    return 0;
}