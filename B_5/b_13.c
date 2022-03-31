#include <stdio.h>

int main(void)
{
    int num, i;
    int total = 0;

    for (i = 0; total <= 100; i++)
    {
        printf("num = ");
        scanf("%d", &num);

        total += num;
    }

    printf("total = %d\n", total);
}