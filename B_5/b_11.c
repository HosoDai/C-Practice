#include <stdio.h>

int main(void)
{
    int i, j, num;

    printf("num = ");
    scanf("%d", &num);

    int q = num / 10;
    int r = num % 10;

    for (i = 0; i < q; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%d", j);
        }
    }
    for (i = 0; i < r; i++)
    {
        printf("%d", i);
    }
    printf("\n");

    return 0;
}