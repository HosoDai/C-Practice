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

    if (x < y)
    {
        printf("xはyより小さい\n");
    }

    return 0;
}