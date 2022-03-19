#include <stdio.h>

int main(void)
{
    int x, y;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("xはyより大きい\n");
    }
    else if (x < y)
    {
        printf("xはyより小さい\n");
    }
    else
    {
        printf("xとyは等しい\n");
    }

    return 0;
}