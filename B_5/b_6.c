#include <stdio.h>

int main(void)
{
    int lose_total = 0;
    int win_total = 0;
    int i, judge;

    for (i = 0; i < 10; i++)
    {
        printf("judge(0 or 1) = ");
        scanf("%d", &judge);
        if (judge == 0)
        {
            lose_total++;
        }
        else
        {
            win_total++;
        }
    }

    printf("win_total = %d\n", win_total);
    printf("lose_total = %d\n", lose_total);

    return 0;
}