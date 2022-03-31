#include <stdio.h>

int main(void)
{
    int i, num;
    int total = 0;
    int ave;

    for (i = 0; i < 10; i++)
    {
        printf("num = ");
        scanf("%d", &num);
        total += num;
    }

    ave = total / 10;

    printf("ave = %d\n", ave);

    return 0;
}