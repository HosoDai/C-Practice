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
        printf("bigger_number = %d\n", x);
    }
    else
    {
        printf("bigger_bumber = %d\n", y);
    }

    return 0;
}