#include <stdio.h>

int main(void)
{
    int i;
    int num = 2;

    for (i = 0; i < 8; i++)
    {
        printf("%d\n", num);
        num *= 2;
    }

    return 0;
}