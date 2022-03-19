#include <stdio.h>

int main(void)
{
    int x, y;
    int q, r;

    //割られる数の代入
    printf("x = ");
    scanf("%d", &x);

    //割る数の代入
    printf("y = ");
    scanf("%d", &y);
    if (y > x)
    {
        printf("xよりも小さい数を入力してください\n");
        return 0;
    }

    //商
    q = x / y;

    //余り
    r = x % y;

    printf("商 = %d, 余り = %d\n", q, r);

    return 0;
}