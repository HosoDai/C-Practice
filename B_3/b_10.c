#include <stdio.h>

int main(void)
{
    int x, y;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    //和
    printf("x + y = %d\n", x + y);

    //差
    printf("x - y = %d\n", x - y);

    //積
    printf("x * y = %d\n", x * y);

    //商
    printf("x / y = %d\n", x / y);

    //余り
    printf("x %% y = %d\n", x % y);

    return 0;
}