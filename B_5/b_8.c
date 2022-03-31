#include <stdio.h>

int main(void)
{
    int num, i;

    printf("num = ");
    scanf("%d", &num);

    int max = num;

    for (i = 0; i < 9; i++)
    {
        printf("num = ");
        scanf("%d", &num);
        if (max < num)
        {
            max = num;
        }
    }

    printf("max = %d\n", max);
    return 0;
}