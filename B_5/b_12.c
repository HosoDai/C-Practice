#include <stdio.h>

int main(void)
{
    int i;

    for (i = 3; i < 10000; i *= 3)
    {
        printf("%d\n", i);
    }

    return 0;
}