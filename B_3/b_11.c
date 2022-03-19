#include <stdio.h>

int main(void)
{
    int x, y;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    int ave = (x + y) / 2;
    printf("ave = %d\n", ave);

    return 0;
}