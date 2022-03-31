#include <stdio.h>

int main(void)
{
    int num, i;

    printf("num = ");
    scanf("%d", &num);

    int max = num;
    int min = num;

    for (i = 0; i < 9; i++)
    {
        printf("num = ");
        scanf("%d", &num);
        if (max < num)
        {
            max = num;
        }
        if (min > num)
        {
            min = num;
        }
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);

    return 0;
}