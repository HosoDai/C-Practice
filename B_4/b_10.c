#include <stdio.h>

int main(void)
{
    int x, y;

    printf("x = ");
    scanf("%d", &x);

    printf("y = ");
    scanf("%d", &y);

    if (x < y && (x % 2 == 0 && y % 2 == 0))
    {
        printf("xはyより小さく、かつ、xとyは共に偶数である。\n");
    }
    if (x == y && x < 0)
    {
        printf("xとyは等しく、かつ、負の数である。\n");
    }

    if (x < y || x % 2 == 0)
    {
        printf("xはyより小さい、または、xは偶数である。\n");
    }

    if ((x <= 10 || x >= 100) && (y >= 10 && y <= 100))
    {
        printf("xは10以下または100以上で、かつ、yは10以上かつ100以下である。\n");
    }

    // !(x < 0 && y < 0)でもOK
    if (x > 0 && y > 0)
    {
        printf("xもyも負の数である、ではない。\n");
    }
    return 0;
}