#include <stdio.h>

int main(void)
{
    int i;

    int total = 1;

    for (i = 1; i < 8; i++)
    {
        total *= i;
    }

    printf("%d\n", total);
    return 0;
}